#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <graphics.h>			// ����ͼ�ο�ͷ�ļ�
#include <conio.h>
#include <iostream>
using namespace std;


float wxl, wxr, wyb, wyt;//����ȫ�ֱ��������������ʹ��


int cohensutherland(int d[], float& x, float& y, float k)//ֱ�߶μ��ú��������ݴ�����Ķ˵��б���ҵ��߶��봰�ڱ߽�Ľ���
{
    if (d[0] == 1)//����˵�����ࣨ1001��0001��0101��������
    {
        y = k * (wxl - x) + y;
        x = wxl;//�ҵ��߶κ�x=wxl�Ľ���
    }
    if (d[1] == 1)//����˵����Ҳࣨ1010��0010��0110��������
    {
        y = k * (wxr - x) + y;
        x = wxr;//�ҵ��߶κ�x=wxr�Ľ���
    }
    if ((d[2] == 1) && (d[0] == 0) && (d[1] == 0) && (d[3] == 0))//����˵����²ࣨ0100һ������
    {
        x = (wyb - y) / k + x;
        y = wyb;//����߶κʹ����²�߽�Ľ���
    }
    if ((d[3] == 1) && (d[0] == 0) && (d[1] == 0) && (d[2] == 0))//����˵����ϲࣨ1000һ������
    {
        x = (wyt - y) / k + x;
        y = wyt;//����߶κʹ����ϲ�߽�Ľ���
    }
    return 0;
}


int code(int a[], float x, float y)//�����˵��������
{
    if (x < wxl) a[0] = 1;
    else a[0] = 0;
    if (x > wxr) a[1] = 1;
    else a[1] = 0;
    if (y < wyb) a[2] = 1;
    else a[2] = 0;
    if (y > wyt) a[3] = 1;
    else a[3] = 0;
    return 0;
}


void Acd(float x1,float y1,float x2,float y2,float wxl,float wxr,float wyb,float wyt)
{
    setcolor(RED);
    line(x1, y1, x2, y2);
    setcolor(BLACK);
    line(wxl, wyt, wxl, wyb);
    line(wxl, wyb, wxr, wyb);
    line(wxr, wyb, wxr, wyt);
    line(wxr, wyt, wxl, wyt);
    Sleep(5000);//ͣ��
    cleardevice();//�����Ļ
}
int main()
{
        int d1[4] = { 0,0,0,0 };
        int d2[4] = { 0,0,0,0 };//�˵��������룬����������ʾ
        float x1, y1, x2, y2;
       cout << "�ֱ�������������ʹ��ڵ������߽����꣺";
       cout << endl << "x1=";
       cin >> x1;
       cout << "y1=";
       cin >> y1;
       cout << "x2=";
       cin >> x2;
       cout << "y2=";
       cin >> y2;
       cout << "wxl=";
       cin >> wxl;
       cout << "wxr=";
       cin >> wxr;
       cout << "wyb=";
       cin >> wyb;
       cout << "wyt=";
       cin >> wyt;
    initgraph(800, 700);
    // ���ñ���ɫΪ��ɫ
    setbkcolor(GREEN);
    // �ñ���ɫ�����Ļ
    cleardevice();
    setorigin(320, 240);//��������ԭ��
    setaspectratio(1, -1); //��ʹ y ������Ϊ��
    Acd(x1, y1, x2, y2, wxl, wxr, wyb, wyt);
    while (1)
    {
        code(d1, x1, y1);//�Զ˵�p1�����������
        code(d2, x2, y2);//�Զ˵�p2�����������
        if ((d1[0] == 0) && (d1[1] == 0) && (d1[2] == 0) && (d1[3] == 0) && (d2[0] == 0) && (d2[1] == 0) && (d2[2] == 0) && (d2[3] == 0))//code1|code2=0
        {
           
            cout << "�ڴ����ڵ��������꣺" << "(" << x1 << "," << y1 << ")" << "(" << x2 << "," << y2 << ")";

            Acd(x1, y1, x2, y2, wxl, wxr, wyb, wyt);
            break;
        }
        else if ((d1[0] & d2[0]) | (d1[1] & d2[1]) | (d1[2] & d2[2]) | (d1[3] & d1[3]))//code1&code2=1
        {
            closegraph();			// �ر�ͼ�ν���
            cout << "ֱ�߶��ڴ�����"; break;
        }
        else//�ͱ߽��н��㣨ʵ������齻�㣩
        {
            float k = (y2 - y1) / (x2 - x1);
            if (!(d1[0] | d1[1] | d1[2] | d1[3]))//p1���ڴ����ڣ��򽻻�p1��p2������ֵ�ͱ���ֵ
            {
                float x, y;
                int t, i;
                x = x2; x2 = x1; x1 = x;
                y = y2; y2 = y1; y1 = y;
                for (i = 0; i <= 3; i++)
                {
                    t = d2[i];
                    d2[i] = d1[i];
                    d1[i] = t;
                }
            }
            cohensutherland(d1, x1, y1, k);//��p1���вü�
        }
    }

    return 0;
}
