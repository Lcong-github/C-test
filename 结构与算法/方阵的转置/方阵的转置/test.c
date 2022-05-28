
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int** Acc(int** acc, int n, int m)
{
    //���嶯̬��ά����
    int** p;  //�����άָ�롣
    p = (int**)malloc(sizeof(int*) * m); //����һ��һάָ��ռ䡣
    for (int i = 0; i < m; i++)
    {
        p[i] = (int*)malloc(sizeof(int) * n);  //����ÿ��һάָ�룬����һ�����ݵĿռ䡣
    }
    //�������ֵת�ò���ֵ����̬����
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            p[i][j] = *((int*)acc + j * m + i);
        }
    }

    return p;
}
int main()
{
    int arr[2][3] = { {1,2,3},{4,5,6} };

    int n = 0, m = 0;
    n = sizeof(arr) / sizeof(arr[0]);//�����ά���������
    m = sizeof(arr[0]) / sizeof(arr[0][0]);//�����ά���������
    int** p = Acc(arr, n, m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
    //�ͷ��ڴ�,����Ҫ��
    for (int i = 0; i < m; i++)
        free(p[i]);
    free(p);
    return 0;
}
