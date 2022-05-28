
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int** Acc(int** acc, int n, int m)
{
    //定义动态二维数组
    int** p;  //定义二维指针。
    p = (int**)malloc(sizeof(int*) * m); //申请一组一维指针空间。
    for (int i = 0; i < m; i++)
    {
        p[i] = (int*)malloc(sizeof(int) * n);  //对于每个一维指针，申请一行数据的空间。
    }
    //将数组的值转置并赋值给动态数组
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
    n = sizeof(arr) / sizeof(arr[0]);//计算二维数组的行数
    m = sizeof(arr[0]) / sizeof(arr[0][0]);//计算二维数组的列数
    int** p = Acc(arr, n, m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
    //释放内存,必须要有
    for (int i = 0; i < m; i++)
        free(p[i]);
    free(p);
    return 0;
}
