#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <vector>
#include <utility>
#include <time.h>

using namespace std;

#define Width 640
#define Height 480
#define COMMON_RADIUS 10

class mycircle {
public:
    // 球半径
    int radius;
    // 球位置
    int circle_x;// x, 竖
    int circle_y;// y, 横
    // 球速度
    int velocity_x;// x速度
    int velocity_y;// y速度

    mycircle(int x = Width / 2, int y = Height / 2, int r = COMMON_RADIUS, int v_x = 1, int v_y = 1) {
        circle_x = x;
        circle_y = y;
        radius = r;
        velocity_x = (rand() % 2 == 0) ? v_x : -v_x;
        velocity_y = (rand() % 2 == 0) ? v_y : -v_y;
    }

    void move() {
        // 拉回到可行区域
        if (circle_x < radius) circle_x = radius;
        if (circle_x > (Width - radius)) circle_x = Width - radius;
        if (circle_y < radius) circle_y = radius;
        if (circle_y > (Height - radius)) circle_y = Height - radius;

        /*方法一
        int new_circle_x = min(max(0 + radius, circle_x + velocity_x), Width - radius);
        int new_circle_y = min(max(0 + radius, circle_y + velocity_y), Height - radius);
        // 判断反向情况
        if ((velocity_x < 0 && new_circle_x >= circle_x) || // 向左撞墙
            (velocity_x > 0 && new_circle_x <= circle_x)) {// 向右撞墙
            velocity_x = -velocity_x;
        }
        if (velocity_y < 0 && new_circle_y >= circle_y || // 向上撞墙
            velocity_y > 0 && new_circle_y <= circle_y) {// 向下撞墙
            velocity_y = -velocity_y;
        }
        circle_x = new_circle_x;
        circle_y = new_circle_y;
        */
        /*方法二*/
        if ((circle_x + velocity_x < radius) || (Width - radius < circle_x + velocity_x)) {
            velocity_x = -velocity_x;
        }
        if ((circle_y + velocity_y < radius) || (Height - radius < circle_y + velocity_y)) {
            velocity_y = -velocity_y;
        }
        circle_x += velocity_x;
        circle_y += velocity_y;
    }
};

int main() {
    //mycircle b[5] = { mycircle(10, 10, 5), mycircle(50, 50, 10), mycircle(100, 100, 15), mycircle(150, 150, 20), mycircle(200, 200, 25) };
    //vector<mycircle> balls(b, b + 5);
    srand((unsigned)time(NULL));
    vector<mycircle> balls;
    for (int i = 0; i < 30; i++) {
        mycircle c(rand() % Width, rand() % Height);
        bool is_fit = true;
        for (int j = 0; j < balls.size(); j++) {
            double dis = pow(c.circle_x - balls[j].circle_x, 2) + pow(c.circle_y - balls[j].circle_y, 2);
            if (dis <= 4 * COMMON_RADIUS * COMMON_RADIUS) {
                i--;
                is_fit = false;
                break;
            }
        }
        if (is_fit)
            balls.push_back(c);
    }

    initgraph(Width, Height);
    setbkcolor(WHITE);
    cleardevice();

    BeginBatchDraw();// 开始批量绘图，暂不输出到屏幕
    while (true) {
        // 清除当前位置
        setcolor(WHITE);
        setfillcolor(WHITE);
        for (int i = 0; i < balls.size(); i++) {
            fillcircle(balls[i].circle_x, balls[i].circle_y, balls[i].radius);
        }

        // 所有小球移动
        for (int i = 0; i < balls.size(); i++) {
            balls[i].move();
        }
        // 判断碰撞
        // 1. 初始化二维数组
        vector<vector<pair<double, int>>> min_dis(balls.size(), vector<pair<double, int>>(0));// 最小距离二维数组，[0]代表距当前元素的最短距离，[1]
        // 2. 计算距离每个球最近的球的距离和下标
        for (int i = 0; i < balls.size(); i++) {
            for (int j = 0; j < balls.size(); j++) {
                if (i != j) {
                    double dis = pow(balls[i].circle_x - balls[j].circle_x, 2) + pow(balls[i].circle_y - balls[j].circle_y, 2);
                    if (dis - 4 * COMMON_RADIUS * COMMON_RADIUS <= 0) {// 等于或小于阈值则发生碰撞（注4R^2是因为碰撞时两球之间的距离(2R)^2）
                        min_dis[i].push_back(pair<double, int>(dis, j));// 记录距i的距离超过阈值的球的距离dis和下标j
                    }
                }
            }
        }
        // 3. 计算新速度
        vector<mycircle> tmp_balls(balls);
        for (int i = 0; i < min_dis.size(); i++) {
            // 3.1 判断i球是否需要重置速度
            if (min_dis[i].size() == 0)
                continue;
            // 3.2 计算关于i球的所有碰撞球的合并速度，即将所有待碰撞小球合并成一个小球与当前球碰撞
            // 3.2.1 根据动量定理求出速度方向，根据动能定理求出速度大小
            double new_vx_dl = 0, new_vy_dl = 0, new_vx_dn = 0, new_vy_dn = 0;
            for (const pair<double, int>& e : min_dis[i]) {// 多球的完全弹性碰撞
                new_vx_dl += tmp_balls[e.second].velocity_x;
                new_vy_dl += tmp_balls[e.second].velocity_y;
                new_vx_dn += pow(tmp_balls[e.second].velocity_x, 2);
                new_vy_dn += pow(tmp_balls[e.second].velocity_y, 2);
            }
            // 3.2.2 交换速度大小和方向
            balls[i].velocity_x = ((new_vx_dl > 0) ? 1 : -1) * sqrt(new_vx_dn);// 置球的速度为合并球速度
            balls[i].velocity_y = ((new_vy_dl > 0) ? 1 : -1) * sqrt(new_vy_dn);
        }
        // 显示当前位置
        setcolor(BLACK);
        for (int i = 0; i < balls.size(); i++) {
            switch (i % 3) {
            case 0: setfillcolor(RGB(255, 0, 0)); break;
            case 1: setfillcolor(RGB(0, 255, 0)); break;
            case 2: setfillcolor(RGB(0, 0, 255)); break;
            }
            fillcircle(balls[i].circle_x, balls[i].circle_y, balls[i].radius);
        }
        FlushBatchDraw();// 立即绘图
        // 暂停
        Sleep(2);
    }
    EndBatchDraw();// 结束批量绘图
    _getch();
    closegraph();
    return 0;
}