#define _CRT_SECURE_NO_WARNINGS 1//���԰�ȫ���

#include <stdio.h>
#include <stdlib.h>
struct student
{
	char xm[10];
	int xh;
	float yy;
	float sx;
	float c;
};

int main()
{
	int n = 0;
	printf("�����м���ѧ����");
	scanf("%d", &n);
	//struct student a[100];
	//���嶯̬�ṹ�����

	//p = (int*)malloc(sizeof(int) * n);
	struct student* a = (struct student*)malloc(sizeof(struct student)* n);
	for (int i = 0; i < n; i++)
	{
		printf("�������%dλͬѧ����Ϣ.\n", i + 1);
		printf("������ѧ�š����ġ���ѧ��C���ԣ�");
		scanf("%s %d %f %f %f", a[i].xm, &a[i].xh, &a[i].yy, &a[i].sx, &a[i].c);
	}

	for (int i = 0; i < n; i++)
	{
		printf("�����%dλͬѧ��\n", i + 1);
		printf("%s\t%d\t%.2f\t%.2f\t%.2f\n", a[i].xm, a[i].xh, a[i].yy, a[i].sx, a[i].c);
	}
	return 0;
}