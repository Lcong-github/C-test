#define _CRT_SECURE_NO_WARNINGS 1
////���ڴ����һ��
//#include  <stdio.h>
////ageȫ�ֱ���
//int age = 100;
//int main()
//{
//	//age�ֲ�����
//	//���ֲ�������ȫ�ֱ�����ͻʱ�ֲ���������
//	int age = 20;
//	age++;
//	printf("%d",age);
//	return 0;
//}
//


//
////дһ����ͺ���
////scanf���������뺯��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf(" %d %d", &a, &b);
//	sum = a + b;
//	printf("%d + %d = %d", a,b,sum);
//}


//#include <stdio.h>
//int main()
//{
//    printf("\n\
//            **              *\n\
//        **********         **  \n\
//    *****************     ***\n\
//********@********************\n\
//    *****************     ***\n\
//        **********         **\n\
//            **              *");
//    return 0;
//}


//�궨��
//#include <stdio.h>
// #define URL "С����"
///*int main()
//{
//    short i;
//    unsigned short j;
//    i = 1;
//    j = -1;
//    printf("%d\n",i);
//    printf("%u\n", j);
//    return 0; 
//}*/ 
//
//#include <math.h>
//int main()
//{
//    char a =70;
//    printf("%c", a);
//    return 0;
//}


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i;
//
//	printf("������ɼ���");
//	scanf("%d", &i);
//	if (i >= 90) 
//	{
//		printf("�����ȼ�ΪA\n");
//	}
//	else if (i >= 80 && i < 90)
//	{
//		printf("�����ȼ�ΪB\n");
//	}
//	else if (i >= 70 && i < 80)
//	{
//		printf("�����ȼ�ΪC\n");
//	}
//	else if (i >= 60 && i < 70)
//	{
//		printf("�����ȼ�ΪD\n");
//	}
//	else 
//	{
//		printf("�ɼ����ϸ�\n");
//	
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char ch;
//	printf("������ɼ��ȼ�\n");
//	scanf("%c", &ch);
//	switch (ch)
//	{
//		case 'A':printf("��ĳɼ���90�����ϣ�\n");	break;		//����Ҫ��break������䣬��Ȼ����
//		case 'B':printf("��ĳɼ���80��90֮�䣡\n"); break;
//		case 'C':printf("��ĳɼ���70��80֮�䣡\n"); break;
//		case 'D':printf("��ĳɼ���60��70֮�䣡\n"); break;
//		case 'E':printf("��ĳɼ���60�����£�\n"); break;
//	
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b;
//	printf("����������������");
//	scanf("%d %d", &a, &b);
//
//	if (a != b) 
//	{
//		if (a > b)
//		{
//			printf("%d>%d", a, b);
//
//		}
//		else
//		{
//			printf("%d<%d", a, b);
//		}
//	}
//	else
//	{
//		printf("%d=%d", a, b);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char isRain, isFree;
//	printf("�Ƿ��п�?(Y/N)\n");
//	scanf("%c", &isFree);
//
//	getchar();//���Ե�һ�������Ļس���������ڶ�������Ľ��ǻس���������Ҫ��
//	printf("�Ƿ����ꣿ(Y/N)\n");
//	scanf("%c", &isRain);
//
//	if (isFree == 'Y')
//	{
//		if (isRain == 'Y')
//		{
//			printf("�ǵô�ɡ��^_^\n");
//		}
//		else {
//			printf("��Ŀ���\n");
//		}
//
//	}
//	else
//	{
//		printf("Ů��û��|_|\n");
//	
//	}
//
//	return 0;
//}


//whileѭ�����
//#include <stdio.h>
//int main() 
//{
//	int i = 1, sum = 0;
//	while(i <= 100)
//	{
//		sum = sum + i;
//		i = i + 1;
//	}
//	printf("����ǣ�%d", sum);
//
//	return 0;
//}


//getchar(),ͳ������Ӣ�ľ��ӵ��ַ�����
//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//	printf("������Ӣ�ľ��ӣ�");
//	while (getchar() != '\n')	//���getchar���������õ�ֵ���ǻس�����ִ����������
//	{
//		count = count + 1;
//	}
//	printf("���ܹ�������%d���ַ���\n", count);
//	return 0;
//}


//forѭ��
//�ж�һ�����Ƿ�Ϊ����
//#include <stdio.h>
//int main()
//{
//	int i, num;
//	_Bool flag = 1;
//	printf("������һ��������\n");
//	scanf("%d", &num);
//	
//	for (i = 2; i < num / 2; i++)
//	{
//		if (num % i == 0)
//			//�ж����������Դ�2��ʼ��һ���Ƿ����0������Ǿ͸���flag=0
//		{
//			flag = 0;
//		}
//	}
//	if (flag)
//	{
//		printf("%d��һ��������\n", num);
//	}
//	else
//	{
//		printf("%d����һ��������\n", num);
//	}
//	return 0;
//}


//��ӡ99�˷���
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		putchar('\n');	//��ǰѭ������������
//	}
//
//	return 0;
//}


//break���
//#include <stdio.h>
//int main()
//{
//	long long i, num;
//	_Bool flag = 1;
//	printf("������һ��������\n");
//	scanf("%lld", &num);
//	
//	for (i = 2; i < num / 2; i++)
//	{
//		if (num % i == 0)
//			//�ж����������Դ�2��ʼ��һ���Ƿ����0������Ǿ͸���flag=0
//		{
//			flag = 0;
//			break;//ʹ�ó���Ч����ߣ�ֻ����һ�α��֪��������������
//		}
//	}
//	if (flag)
//	{
//		printf("%d��һ��������\n", num);
//	}
//	else
//	{
//		printf("%d����һ��������\n", num);
//	}
//	printf("i=%lld", i);
//	return 0;
//}


//continue���
//#include <stdio.h>
//int main()
//{
//	int ch;
//	while ((ch = getchar() )!= '\n')	//�����������ֵ����ch
//	{
//		if (ch == 'C')	//���������C��ִ��continue,����ʣ����䣬������һ��ѭ��
//		{
//			continue;
//		}
//		putchar(ch);	//�������ch������
//	}
//	putchar('\n');
//	return 0;
//}


//goto���,,��������ʹ��goto���
//#include <stdio.h>
//int main()
//{
//	int i = 5;
//	while (i++)
//	{
//		if(i > 10)
//		{
//			goto A;
//		}
//	}
//A:	printf("Here,i=%d\n", i);
//	return 0;
//}


//����,�洢һ��ͬ�������ݵĵط�
//����10��ͬѧ��ƽ���ɼ�
//#include <stdio.h>
//#define NUM 10//�궨��
//int main()
//{
//	int s[NUM];
//	int i, sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("�������%dλ�ĳɼ�\n", i + 1);
//		scanf("%d", &s[i]);
//		sum += s[i];
//	}
//	printf("�ôο��Ե�ƽ������%2f\n", (double)sum/NUM);
//	return 0;
//}


//����Ķ���
//#include <stdio.h>
//int main()
//{
//	int a[10] ;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	printf("%d\n", sizeof(a));		//sizeof(a)��������aռ�õĿռ��С
//	return 0;
//}


//���鶨�����ʾ��
//#include <stdio.h>
//int main()
//{
//	int n, i;
//	printf("�������ַ�������");
//	scanf("%d", &n);
//	char a[n + 1];	//�������ַ�����س�����һ��Ԥ���ռ�		��a���Ĵ�Сδ֪
//	printf("�뿪ʼ�����ַ���");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%c", &a[i]);
//	}
//	a[n] = '\n';		//	�������
//	printf("������������ַ��ǣ�%s\n", a);
//	return 0;
//}


//strcpy�����ַ���
//#include <stdio.h>
//int main()
//{
//	char str1[] = "ranlinchong";
//	char str2[100];
//	strcpy(str2, str1);		//��str1���ַ�������str2
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return 0;
//}


//��ά����
//#include <stdio.h>
//int main()
//{
//	int a[3][4]= { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//�����ת��
//#include <stdio.h>
//int main()
//{
//	int a[4][5] =
//	{
//		{80,50,32,64,45},
//		{45,45,87,78,98},
//		{98,89,56,45,87},
//		{87,45,32,65,45}
//	};
//	int b[5][4];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			b[i][j] = a[j][i];				//ת��
//			printf("%d\t", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ָ��
//#include <stdio.h>
//int main()
//{
//	char a = 'F';
//	int f = 123;
//
//	char *pa = &a;	//�����ַ���ָ��
//	int* pb = &f;	//��������ָ��
//	printf("a=%c\n", *pa);
//	printf("f=%d\n", *pb);
//
//	*pa = 'C';
//	*pb += 1;
//	printf("a=%c\n", *pa);
//	printf("f=%d\n", *pb);
//	printf("sizeof pa=%d\n", sizeof(pa));	//ָ��paռ��4���ֽ�
//	printf("%p\n", pa);
//	return 0;
//}


//ָ�������
//#include <stdio.h>
//int main()
//{
//	char str[128];
//	printf("�����룺");
//	scanf("%s", str);
//	printf("%s\n", str);
//	printf("str��ַ�ǣ�%p\n", str);
//	printf("str��ַ�ǣ�%p\n", &str[0]);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a[] = "FishC";
//	char* p = a;
//	printf("*p=%c\t*(p+1)=%c\t*(p+2)=%c\n)", *p, *(p + 1), *(p + 2));
//	printf("a[0]->%p\ta[1]->%p\ta[2]->%p\n", &a[0], &a[1], &a[2]);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* str = "I Love you";
//	int i ,lenth;
//	lenth = strlen(str);
//	for (i = 0; i < lenth; i++)
//	{
//		printf("%c", str[i]);
//	}
//	printf("\n");
//	return 0;
//
//}


//#include <stdio.h>
//int main()
//{
//	char str[] = "I Love you";
//	char* target = str;	//������ֻ��һ����ַ����ָ����һ����ֵ
//	int count = 0;
//	while (*target++ != '\0')
//	{
//		count++;
//	}
//	printf("�ܹ���%d\n", count);
//
//	return 0;
//}


//ָ������Ķ���
//#include <stdio.h>
//int main()
//{
//	char* p1[5] = { "ֻ","��","��","��","��" };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", p1[i]);
//	}
//	return 0;
//}
// 


////����ָ��Ķ������������ȷ����
//#include<stdio.h>
//int main()
//{
//	int temp[5] = { 1,2,3,4,5 };
//	int(*p2)[5] = temp;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(p2 + i));
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int temp[5] = { 1,2,3,4,5 };
//	int(*p2)[5] = &temp;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(*p2 + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int temp[5] = { 1,2,3,4,5 };
//	int* p = temp;	//ָ��ָ������ĵ�һ��Ԫ�صĵ�ַ
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}


//���ۣ�*(array+i)==array[i]
//#include<stdio.h>
//int main()
//{
//	int array[4][5] = { 0 };
//	int i, j, k=0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			array[i][j] = k++;
//		}
//	}
//	printf("*(array+1):%p\n", *(array+1));
//	printf("array[1]:%p\n",array[1]);
//	printf("&array[1][0]:%p\n",&array[1][0]);
//	printf("**(array+1):%d\n", **(array + 1));
//	return 0;
//}


//voidָ��,voidָ�����ת��Ϊ�κ����͵�ָ��
//#include<stdio.h>
//int main()
//{
//	int num = 128;
//	int* pi = &num;
//	char* ps = "FishC";
//	void* pv;
//	pv = pi;
//	printf("pi:%p \tpv:%p\n", pi, pv);
//	printf("*pv:%d\n", *(int*)pv);			//��Ҫʹ��ǿ��ת����
//	 
//	pv = ps;
//	printf("ps:%p \tpv:%p\n", ps, pv);
//	printf("*pv:%d\n", (char*)pv);
//	return 0;
//}


//NULLָ��
//#include<stdio.h>
//int  main()
//{
//	int* p1;
//	int* p2 = NULL;
//	printf("%d\n", *p1);
//	printf("%d\n", *p2);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	const float pi = 3.14;	//const��ʾ����������ı���Ϊֻ���������޸�
//	printf("%f\n", pi);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 520;
//	const int cnum = 888;
//	int* const p = &num;//����ָ��
//	//int const* b = &num;//ָ������ָ��
//	*p = 1024;
//	printf("*p:%d\n", *p);
//	return 0;
//}


//����
//#include<stdio.h>
//void Pr();	//��������
//void Pr()	//���庯��
//{
//	printf("CC\n");	//��������
//}
//int main()
//{
//	Pr();
//	return 0;
//}


//ʹ�ú�������1+2+...+n��ֵ
//#include<stdio.h>
//int sum(int n);
//int sum(int n)
//{
//	int result = 0;
//	do
//	{
//		result += n;
//
//	} while (n-- > 0);
//	return result;
//}
//int main()
//{
//	int n, result;
//	printf("������n��ֵ��");
//	scanf("%d", &n);
//	result = sum(n);	//���صĽ����ŵ�result����
//	printf("1+2+...+(n-1)+n�Ľ���ǣ�%d\n", result);
//	return 0;
//}


//#include<stdio.h>
//int Max(int, int);	//��������
//int Max(int x, int y)//���庯��
//{
//	if (x > y)		//��������
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a, b, c;
//	printf("����������������");
//	scanf("%d %d", &a, &b);
//	c = Max(a, b);	//�������ص�ֵ�����c��
//	printf("�����нϴ���ǣ�%d\n", c);
//	return 0;
//
//}


//ʹ��ָ��ı��βε�ͬʱ���Ըı�ʵ��
//#include<stdio.h>
//void swp(int *x, int *y)
//{
//	int temp;
//	printf("swp����ǰ��x=%d\ty=%d\n", *x, *y);
//
//	temp = *x;
//	*x = *y;
//	*y = temp;
//	printf("swp������x=%d\ty=%d\n", *x, *y);
//}
//int main()
//{
//	int x = 5, y = 3;
//	printf("main����ǰ��x=%d\ty=%d\n", x, y);
//
//	swp(&x, &y);
//	printf("main������x=%d\ty=%d\n", x, y);
//	return 0;
//}


//������
//#include <stdio.h>
//void get_array(int a[10])
//{
//	a[5] = 520;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("a[%d]=%d\n", i, a[i]);
//	}
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	get_array(a);
//	printf("�ٴ�ӡһ��\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("a[%d]=%d\n", i, a[i]);
//	}
//	return 0;
//}


//�����βε�ֻ��һ����ַ
//#include<stdio.h>
//void get_array(int b[10])
//{
//	printf("sizeof a:%d\n", sizeof(b));
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("sizeof a:%d\n", sizeof(a));
//	get_array(a);
//	return 0;
//}


//�ɱ����
//#include<stdio.h>
//#include<stdarg.h>		//	�ɱ����
//int sum(int n, ...);	//...˵�������ĸ�����ȷ��
//int sum(int n, ...)
//{
//	int i, sum = 0;
//	va_list vap;	//��������б�
//	va_start(vap, n);//��ʼ��
//	for (i = 0; i < n; i++)
//	{
//		sum += va_arg(vap, int);	//va_arg���ÿһ��������ֵ
//	}
//	va_end(vap);	//va_end�رղ����б�
//	return sum;
//}
//int main()
//{
//	int result;
//	result = sum(2, 3, 4, 2);
//	printf("result=%d\n", result);
//	return 0;
//}


//ָ�뺯��
//#include<stdio.h>
//char *getWord(char c)
//{
//	
//	switch (c)
//	{
//	case 'A':return "Apple";	//���ܷ��ؾֲ�������ָ��
//	case 'B':return "Banana";
//	default:return "None";
//	}
//}
//int main()
//{
//	char input;
//	printf("������һ����ĸ��");
//	scanf("%c", &input);
//	printf("%s\n", getWord(input));
//	return 0;
//}


//����ָ��
//#include<stdio.h>
//int square(int num)
//{
//	return num * num;
//}
//int main()
//{
//	int num;
//	int (*fp)(int);	//���庯��ָ�룬�뺯��int square�ȼ�
//	printf("������һ��������");
//	scanf("%d", &num);
//	fp = square;
//	printf("%d*%d=%d",num, num, (*fp)(num));
//	return 0;
//}


//#include<stdio.h>
//int add(int, int);
//int sub(int, int);
//int calc(int(*fp)(int, int), int, int);
//int add(int num1, int num2)
//{
//	return  num1 + num2;
// }
//int sub(int num1, int num2)
//{
//	return num1 - num2;
//}
//int calc(int(*fp)(int, int), int num1, int num2)
//{
//	return (*fp)(num1, num2);
//}
//int main()
//{
//	printf("3+5=%d\n", calc(add, 3, 5));	//�ȵ���calc�����ٴ�calc�е���add����
//	printf("3-5=%d\n", calc(sub, 3, 5));
//	return 0;
//}


//�Ӽ��˳��㷨
//#include<stdio.h>
//int add(int, int);
//int sub(int, int);
//int ride(int, int);
//int div(int, int);
//int calc(int(*fp)(int, int), int, int);
//int (*select(char))(int, int);
//int add(int num1, int num2)
//{
//	return  num1 + num2;
// }
//int sub(int num1, int num2)
//{
//	return num1 - num2;
//}
//int ride(int num1, int num2)
//{
//	return num1 * num2;
//}
//int div(int num1, int num2)
//{
//	return num1 / num2;
//}
//int calc(int (*fp)(int, int), int num1, int num2)
//{
//	return (*fp)(num1, num2);
//}
//int (*select(char op))(int, int)
//{
//	switch (op)
//	{
//	case '+':return add;
//	case '-':return sub;
//	case '*':return ride;
//	case '/':return div;
//	}
//}
//int main()
//{
//	int num1, num2;
//	char op;
//	int (*fp)(int, int);
//	printf("������һ��ʽ�ӣ���1+3����");
//	scanf("%d%c%d", &num1, &op, &num2);
//
//	fp = select(op);
//	printf("%d %c %d = %d\n", num1, op, num2, calc(fp, num1, num2));
//	return 0;
//}


//ȫ�ֱ����;ֲ�����
//#include<stdio.h>
//int main()
//{
//	int i = 520;	//ȫ�ֱ���
//	printf("defore,i=%d\n", i);
//	for (int i = 0; i < 10; i++)//�ֲ�����
//	{
//		printf("i=%d\n", i);
//	}
//	printf("after i=%d\n", i);
//	return 0;
//}


//#include<stdio.h>
//void a();
//void b();
//void c();
//int count = 0;	//ȫ�ֱ���
//void a()
//{
//	count++;
//}
//void b()
//{
//	count++;
//}
//void c()
//{
//	count++;
//}
//int main()
//{
//	a();
//	b();
//	c();
//	b();
//	printf("һ��%d��\n", count);
//	return 0;
//}


//extern
//#include<stdio.h>
//void ARC()
//{
//	extern count;//���߱��������������ں�ߣ������ڶ��ļ�ͬ����
//	count++;
//}
//int count = 0;
//int main()
//{
//	ARC();
//	printf("%d\n", count);
//	return 0;
//}


//�����������
//#include<stdio.h>
//int main()
//{
//	int i = 100;	//i1
//	{
//		int i = 110;//i2
//		{
//			int i = 120;//i2
//			printf("i2=%d\n", i);
//		}
//		//i=110
//		{
//			printf("i=%d\n", i);
//			int i = 130;//i4
//			printf("i4=%d\n", i);
//		}
//		printf("i2=%d\n", i);
//	}
//	printf("i1=%d\n", i);
//}


//�ļ�������
//#include<stdio.h>
////������Դ�ļ�2
//void a();
//void b();
//void c();
//void d();
//int count = 0;
//
//int main()
//{
//	a();
//	b();
//	c();
//	b();
//	printf("һ��%d�Σ�\n", count);
//	return 0;
//}


//
//#include<stdio.h>
//void func()
//{
//	static int count = 0;	//��̬�ֲ�������������count��ֵ���ᱻ�ͷ�
//	printf("count=%d\n", count);
//	count++;
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		func();
//	}
//}


//��ѭ��ʵ����׳�
//#include<stdio.h>
//long fact(int n);
//long fact(int n)
//{
//	long result;
//	for (result = 1; n > 1; n--)
//	{
//		result *= n;
//	}
//	return result;
//}
//int main()
//{
//	int num, C;
//	printf("������һ����������");
//	scanf("%d", &num);
//	C = fact(num);
//	printf("%d�Ľ׳���:%d\n", num,C);
//	return 0;
//}


//�ݹ�ʵ����׳�
//#include<stdio.h>
//long fact(int n);
//long fact(int n)
//{
//	long result;
//	if (n > 0)
//	{
//		result = n * fact(n - 1);
//	}
//	else
//	{
//		result = 1;
//	}
//	return result;
//}
//int main()
//{
//	int num, C;
//	printf("������һ����������");
//	scanf("%d", &num);
//	C = fact(num);
//	printf("%d�Ľ׳���:%d\n", num, C);
//	return 0;
//}


//�ݹ麺ŵ��
//#include<stdio.h>
//void hanoi(int n, char x, char y, char z);
//void hanoi(int n, char x, char y, char z)
//{
//	if (n == 1)
//	{
//		printf("%c-->%c\n", x, z);
//	}
//	else
//	{
//		hanoi(n - 1, x, z, y);
//		printf("%c-->%c\n", x, z);
//		hanoi(n - 1, y, x, z);
//	}
//}
//int main()
//{
//	int n;
//	printf("�����뺺ŵ���Ĳ�����");
//	scanf("%d", &n);
//	hanoi(n, 'x', 'y', 'z');
//	return 0;
//}


//�ݹ�ʵ�ֿ�������
//#include <stdio.h>
//void quick_sort(int array[], int left, int right)
//{
//	int i = left, j = right;
//	int temp;
//	int pivot;
//	pivot = array[(left + right) / 2];
//	while (i <= j)
//	{
//		//���������ҵ����ڵ��ڻ�׼���Ԫ��
//		while (array[i] < pivot)
//		{
//			i++;
//		}
//		//���������ҵ�С�ڵ��ڻ�׼���Ԫ��
//		while (array[j] > pivot)
//		{
//			j--;
//		}
//		//���i<=j�򻥻�
//		if (i <= j)
//		{
//			temp = array[i];
//			array[i] = array[j];
//			array[j] = temp;
//			i++;
//			j++;
//		}
//
//	}
//	if (left < j)
//	{
//		quick_sort(array, left, j);
//	}
//	if (i < right)
//	{
//		quick_sort(array, i, right);
//	}
//
//}
//int main()
//{
//	int array[] = { 4,2,5,7,3,9 ,456};
//	int i,  lenth;
//	lenth = sizeof(array) / sizeof(array[0]);//��������Ŀ�ȳ�ÿ��Ԫ�صĿ�Ⱦ͵�����������ĸ���
//	quick_sort(array,0,lenth-1);
//	printf("�����");
//	for (i = 0; i < lenth; i++)
//	{
//		printf("%d  ", array[i]);
//
//	}
//	putchar('\n');
//	return 0;
//}


//malloc�����붯̬�ڴ�,free:�ͷŶ�̬�ռ�
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* ptr;
//	ptr = (int*)malloc(sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("�����ڴ�ʧ�ܣ�\n");
//		exit(1);//�˳�����returnҲ����
//	}
//	printf("������һ��������");
//	scanf("%d", ptr);
//	printf("������������ǣ�%d\n", *ptr);
//	free(ptr);
//	printf("������������ǣ�%d\n", *ptr);
//	return 0;
//}


////����һ������ߴ���ڴ�ռ�    
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int *ptr = NULL;
//	int num, i;
//	printf("�������¼������������");
//	scanf("%d", &num);
//	ptr = (int*)malloc(num * sizeof(int));
//	for (i = 0; i < num; i++) 
//	{
//		printf("�������%d��������", i + 1);
//		scanf("%d", &ptr[i]);
//	}
//	printf("������������ǣ�");
//	for (i = 0; i < num; i++)
//	{
//		printf("%d\t", ptr[i]);
//	}
//	putchar('\n');
//	free(ptr);
//	return 0;
//}


//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string>
//#define N 10
//int main()
//{
//	int *ptr = NULL;
//	int i;
//	ptr = (int*)malloc(N * sizeof(int));
//	if (ptr == NULL)
//	{
//		exit(1);
//	}
//	memset(ptr, 0, N * sizeof(int));
//	for (i = 0; i < N; i++)
//	{
//		printf("%d", ptr[i]);
//	}
//	putchar('\n');
//	free(ptr);
//	return 0;
//}


//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int* ptr1 = NULL;
//	int* ptr2 = NULL;
//	//��һ�������ڴ�ռ�
//	ptr1 = (int*)malloc(10 * sizeof(int));
//	//�������ɲ�������ptr1�ڴ�ռ䲻���ã�����
//	//���еڶ����ڴ�ռ�����
//	ptr2= (int*)malloc(20 * sizeof(int));
//	//��ptr1�����ݿ�����ptr2��
//	memcpy(ptr2, ptr1, 10);
//	free(ptr1);
//	//��ptr2�������ɲ���
//	free(ptr2);
//	return 0;
//}


//realloc:���·����ڴ�ռ�
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int i, num;
//	int count=0;
//	int* ptr = NULL;//��������ʼ��ΪNULL
//	do
//	{
//		printf("������һ������������-1��ʾ��������");
//		scanf("%d", &num);
//		count++;
//		ptr = (int*)realloc(ptr, count * sizeof(int));//��������������Զ��ؿ��ڴ�
//		if (ptr == NULL)
//		{
//			exit(1);
//		}
//		ptr[count - 1] = num;
//	}
//	while (num != -1);
//	printf("����������ֱ��ǣ�");
//	for (i = 0; i < count; i++)
//	{
//		printf("%d\t", ptr[i]);
//	}
//	putchar('\n');
//	free(ptr);
//	return 0;
//}


//
//#include<stdio.h>
//#include<stdlib.h>
//int global_nuinit_var;
//int global_init_var1 = 520;
//int global_init_var2 = 880;
//void func(void);
//void func(void)
//{
//}
//int main()
//{
//
//	int local_var1;
//	int local_var2;
//	static int static_uninit_var;
//	static int static_init_var = 456;
//	char* str1 = "I love you!";
//	char* str2 = "You are right!";
//	int* malloc_var = (int*)malloc(sizeof(int));
//	printf("addr of func->%p\n", func);
//	printf("addr of str1->%p\n", str1);
//	printf("addr of str2->%p\n", str2);
//	printf("addr of global_init_var1->%p\n", &global_init_var1);
//	printf("addr of global_init_var2->%p\n", &global_init_var2);
//	printf("addr of static_init_var->%p\n", &static_init_var);
//	printf("addr of static_uninit_var->%p\n", &static_uninit_var);
//	printf("addr of global_uninit_var->%p\n", &global_nuinit_var);
//	printf("addr of malloc_var->%p\n", malloc_var);
//	printf("addr of local_var1->%p\n", &local_var1);
//	printf("addr of local_var2->%p\n", &local_var2);
//	return 0;
//}


//�߼��궨�壺�����������궨��
//#include<stdio.h>
//#define R 6371
//#define PI 3.14
//#define V PI*R*R*R*4/3
//int main()
//{
//	int r;
//	float s;
//	printf("������Բ�İ뾶��");
//
//	scanf("%d", &r);
//	s = PI * r * r;
//	printf("Բ�����Ϊ��%2f\n", s);
////#undef PI	//��ֹ�궨��
//	printf("��������Ϊ��%2f\n",V);
//	return 0;
//}


//�������ĺ궨��
//#include<stdio.h>
//#define MAX(x,y) (((x)>(y))?(x):(y))
//int main()
//{
//	int x, y;
//	printf("����������������");
//	scanf("%d%d", &x, &y);
//	printf("%d�ǽϴ��", MAX(x, y));
//
//	return 0;
//}


//#include<stdio.h>
//
//#define PRINT(format,...) printf(# format,##__VA_ARGS__)
//int main()
//{
//	PRINT(num = % d\n, 520);
//	PRINT(Hello FishC!\n);
//	return 0;
//}


//�ṹ��
//#include<stdio.h>
//struct Book		//�ṹ��������붨��
//{
//	char title[128];
//	char author[40];
//	float price;
//	unsigned int date;
//	char publisher[40];
//
//} ;
//int  main()
//{
//	struct Book book;
//	printf("������������");
//	scanf("%s",book.title);
//	printf("���������ߣ�");
//	scanf("%s",book.author);
//	printf("�������ۼ� ��");
//	scanf("%f",&book.price);
//	printf("������������ڣ�");
//	scanf("%d",&book.date);
//	printf("����������磺");
//	scanf("%s",book.publisher);
//
//	printf("\n=====����¼�����=====\n\n");
//
//	printf("������%s\n", book.title);
//	printf("���ߣ�%s\n", book.author);
//	printf("�ۼۣ�%.2f\n", book.price);
//	printf("�������ڣ�%d\n", book.date);
//	printf("�����磺%s\n", book.publisher);
//	return 0;
//}


//�ڴ����
//#include<stdio.h>
//int main()
//{
//	struct A
//	{
//		char a;
//		int b;
//		char c;
//	}N = {'X',520,'0'};
//	printf("sizeof a=%d\n", sizeof(N));
//	return 0;
//}


//�ṹ���Ƕ��
//#include<stdio.h>
//struct Date
//{
//	int year;
//	int month;
//	int day;
//};
//struct Book		//�ṹ��������붨��
//{
//	char title[128];
//	char author[40];
//	float price;
//	struct Date date;
//	char publisher[40];
//
//} book = {
//	"������ѧC����ɡ�",
//	"С����",
//	48.8,
//	{2022,4,16},
//	"�廪��ѧ������"
//};
//int  main()
//{
//	printf("������%s\n", book.title);
//	printf("���ߣ�%s\n", book.author);
//	printf("�ۼۣ�%.2f\n", book.price);
//	printf("�������ڣ�%d-%d-%d\n", book.date.year, book.date.month, book.date.day);
//	printf("�����磺%s\n", book.publisher);
//	return 0;
//}


//���ݽṹ�����
//#include<stdio.h>
//#include<stdlib.h>
//struct Date
//{
//	int year;
//	int month;
//	int day;
//};
//struct Book
//{
//	char title[128];
//	char author[40];
//	float price;
//	struct Date date;
//	char publisher[40];
//};
//void getInput(struct Book *book);
//void getInput(struct Book *book)
//{
//	printf("������������");
//	scanf("%s", book->title);
//	printf("���������ߣ�");
//	scanf("%s", book->author);
//	printf("�������ۼۣ�");
//	scanf("%d", &book->price);
//	printf("������������ڣ�");
//	scanf("%d-%d-%d", &book->date.year, &book->date.month, &book->date.day);
//	printf("����������磺");
//	scanf("%s", book->publisher);
//
//}
//void printBook(struct Book *book)
//{
//	printf("������%s\n", book->title);
//	printf("���ߣ�%s\n", book->author);
//	printf("�ۼۣ�%d\n", book->price);
//	printf("�������ڣ�%d-%d-%d\n", book->date.year, book->date.month, book->date.day);
//	printf("�����磺%s\n", book->publisher);
//}
//int main()
//{
//	struct Book b1,b2;
//	printf("��¼���һ�������Ϣ...\n");
//	getInput(&b1);
//	putchar('\n');
//	printf("��¼��ڶ��������Ϣ...\n");
//	getInput(&b2);
//
//	printf("\n\n=====¼�����=====\n\n");
//	putchar('\n');
//	printf("��ӡ��һ�������Ϣ...\n");
//	printBook(&b1);
//	putchar('\n');
//	printf("��ӡ�ڶ��������Ϣ...\n");
//	printBook(&b2);
//
//	//ʹ�ö�̬�ṹ��
//	/*struct Book *b1, *b2;
//	b1 = (struct Book*)malloc(sizeof(struct Book));
//	b2 = (struct Book*)malloc(sizeof(struct Book));
//	if (b1 == NULL || b2 == NULL)
//	{
//		printf("�ڴ����ʧ�ܣ�\n");
//		exit(1);
//	}
//	printf("��¼���һ�������Ϣ...\n");
//	getInput(b1);
//	putchar('\n');
//	printf("��¼��ڶ��������Ϣ...\n");
//	getInput(b2);
//
//	printf("\n\n=====¼�����=====\n\n");
//	putchar('\n');
//	printf("��ӡ��һ�������Ϣ...\n");
//	printBook(b1);
//	putchar('\n');
//	printf("��ӡ�ڶ��������Ϣ...\n");
//	printBook(b2);
//	free(b1);*/
//	/*free(b2);*/
//	return 0;
//}



//������ͷ�巨
//#include<stdio.h>
//#include<stdlib.h>
//
//struct Book
//{
//	char title[128];
//	char author[40];
//	struct Book* next;	//ָ����һ��Book�ṹ��
//};
//void getInput(struct Book* book);
//void addBook(struct Book** libaray);
//void printLibaray(struct Book* libaray);
//void releaseLibaray(struct Book** libaray);
//void getInput(struct Book* book)
//{
//	printf("������������");
//	scanf("%s", book->title);
//	printf("���������ߣ�");
//	scanf("%s", book->author);
//}
//void addBook(struct Book **libaray)
//{
//	struct Book* book,*temp;
//	book = (struct Book*)malloc(sizeof(struct Book));
//	if (book == NULL)
//	{
//		printf("�ڴ����ʧ�ܣ�");
//		exit(1);
//	}
//	getInput(book);
//	if (*libaray != NULL)
//	{
//		temp = *libaray;
//		*libaray = book;
//		book->next = temp;
//	}
//	else
//	{
//		*libaray = book;
//		book->next = NULL;
//	}
//}
//
//void printLibaray(struct Book* libaray)
//{
//	struct Book* book;
//	int count = 1;
//	book = libaray;
//	while (book != NULL)
//	{
//		printf("Book%d:", count);
//		printf("������%s\t", book->title);
//		printf("���ߣ�%s\n", book->author);
//		book = book->next;
//		count++;
//	}
//}
//void releaseLibaray(struct Book** libaray)
//{
//	struct Book* temp;
//	while (*libaray != NULL)
//	{
//		temp = *libaray;
//		*libaray = (*libaray)->next;
//		free(temp);
//	}
//}
//int main()
//{
//	struct Book* libaray = NULL;//����һ���յĵ�����
//	int ch;
//	while (1)
//	{
//		printf("�����Ƿ���Ҫ�����鼮��Ϣ��Y/N����");
//		do
//		{
//			ch = getchar();
//		} while (ch != 'Y' && ch != 'N');
//		if (ch == 'Y')
//		{
//			addBook(&libaray);
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("�����Ƿ���Ҫ��ӡ��Ϣ��Y/N��:");
//	do
//	{
//		ch = getchar();
//	} while (ch != 'Y' && ch != 'N');
//	if (ch == 'Y')
//	{
//		printLibaray(libaray);
//	}
//	releaseLibaray(&libaray);
//	return 0;
//}


//�ļ���ȡ
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	int ch;
	if ((fp = fopen("hello.txt", "w")) == NULL)
	{
		printf("���ļ�ʧ�ܣ�\n");
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	return 0;
 }