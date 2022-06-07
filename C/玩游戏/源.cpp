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
    // ��뾶
    int radius;
    // ��λ��
    int circle_x;// x, ��
    int circle_y;// y, ��
    // ���ٶ�
    int velocity_x;// x�ٶ�
    int velocity_y;// y�ٶ�

    mycircle(int x = Width / 2, int y = Height / 2, int r = COMMON_RADIUS, int v_x = 1, int v_y = 1) {
        circle_x = x;
        circle_y = y;
        radius = r;
        velocity_x = (rand() % 2 == 0) ? v_x : -v_x;
        velocity_y = (rand() % 2 == 0) ? v_y : -v_y;
    }

    void move() {
        // ���ص���������
        if (circle_x < radius) circle_x = radius;
        if (circle_x > (Width - radius)) circle_x = Width - radius;
        if (circle_y < radius) circle_y = radius;
        if (circle_y > (Height - radius)) circle_y = Height - radius;

        /*����һ
        int new_circle_x = min(max(0 + radius, circle_x + velocity_x), Width - radius);
        int new_circle_y = min(max(0 + radius, circle_y + velocity_y), Height - radius);
        // �жϷ������
        if ((velocity_x < 0 && new_circle_x >= circle_x) || // ����ײǽ
            (velocity_x > 0 && new_circle_x <= circle_x)) {// ����ײǽ
            velocity_x = -velocity_x;
        }
        if (velocity_y < 0 && new_circle_y >= circle_y || // ����ײǽ
            velocity_y > 0 && new_circle_y <= circle_y) {// ����ײǽ
            velocity_y = -velocity_y;
        }
        circle_x = new_circle_x;
        circle_y = new_circle_y;
        */
        /*������*/
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

    BeginBatchDraw();// ��ʼ������ͼ���ݲ��������Ļ
    while (true) {
        // �����ǰλ��
        setcolor(WHITE);
        setfillcolor(WHITE);
        for (int i = 0; i < balls.size(); i++) {
            fillcircle(balls[i].circle_x, balls[i].circle_y, balls[i].radius);
        }

        // ����С���ƶ�
        for (int i = 0; i < balls.size(); i++) {
            balls[i].move();
        }
        // �ж���ײ
        // 1. ��ʼ����ά����
        vector<vector<pair<double, int>>> min_dis(balls.size(), vector<pair<double, int>>(0));// ��С�����ά���飬[0]����൱ǰԪ�ص���̾��룬[1]
        // 2. �������ÿ�����������ľ�����±�
        for (int i = 0; i < balls.size(); i++) {
            for (int j = 0; j < balls.size(); j++) {
                if (i != j) {
                    double dis = pow(balls[i].circle_x - balls[j].circle_x, 2) + pow(balls[i].circle_y - balls[j].circle_y, 2);
                    if (dis - 4 * COMMON_RADIUS * COMMON_RADIUS <= 0) {// ���ڻ�С����ֵ������ײ��ע4R^2����Ϊ��ײʱ����֮��ľ���(2R)^2��
                        min_dis[i].push_back(pair<double, int>(dis, j));// ��¼��i�ľ��볬����ֵ����ľ���dis���±�j
                    }
                }
            }
        }
        // 3. �������ٶ�
        vector<mycircle> tmp_balls(balls);
        for (int i = 0; i < min_dis.size(); i++) {
            // 3.1 �ж�i���Ƿ���Ҫ�����ٶ�
            if (min_dis[i].size() == 0)
                continue;
            // 3.2 �������i���������ײ��ĺϲ��ٶȣ��������д���ײС��ϲ���һ��С���뵱ǰ����ײ
            // 3.2.1 ���ݶ�����������ٶȷ��򣬸��ݶ��ܶ�������ٶȴ�С
            double new_vx_dl = 0, new_vy_dl = 0, new_vx_dn = 0, new_vy_dn = 0;
            for (const pair<double, int>& e : min_dis[i]) {// �������ȫ������ײ
                new_vx_dl += tmp_balls[e.second].velocity_x;
                new_vy_dl += tmp_balls[e.second].velocity_y;
                new_vx_dn += pow(tmp_balls[e.second].velocity_x, 2);
                new_vy_dn += pow(tmp_balls[e.second].velocity_y, 2);
            }
            // 3.2.2 �����ٶȴ�С�ͷ���
            balls[i].velocity_x = ((new_vx_dl > 0) ? 1 : -1) * sqrt(new_vx_dn);// ������ٶ�Ϊ�ϲ����ٶ�
            balls[i].velocity_y = ((new_vy_dl > 0) ? 1 : -1) * sqrt(new_vy_dn);
        }
        // ��ʾ��ǰλ��
        setcolor(BLACK);
        for (int i = 0; i < balls.size(); i++) {
            switch (i % 3) {
            case 0: setfillcolor(RGB(255, 0, 0)); break;
            case 1: setfillcolor(RGB(0, 255, 0)); break;
            case 2: setfillcolor(RGB(0, 0, 255)); break;
            }
            fillcircle(balls[i].circle_x, balls[i].circle_y, balls[i].radius);
        }
        FlushBatchDraw();// ������ͼ
        // ��ͣ
        Sleep(2);
    }
    EndBatchDraw();// ����������ͼ
    _getch();
    closegraph();
    return 0;
}