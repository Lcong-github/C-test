#define _CRT_SECURE_NO_WARNINGS 1
////放在代码第一行
//#include  <stdio.h>
////age全局变量
//int age = 100;
//int main()
//{
//	//age局部变量
//	//当局部变量和全局变量冲突时局部变量优先
//	int age = 20;
//	age++;
//	printf("%d",age);
//	return 0;
//}
//


//
////写一个求和函数
////scanf函数是输入函数
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


//宏定义
//#include <stdio.h>
// #define URL "小甲鱼"
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
//	printf("请输入成绩：");
//	scanf("%d", &i);
//	if (i >= 90) 
//	{
//		printf("分数等级为A\n");
//	}
//	else if (i >= 80 && i < 90)
//	{
//		printf("分数等级为B\n");
//	}
//	else if (i >= 70 && i < 80)
//	{
//		printf("分数等级为C\n");
//	}
//	else if (i >= 60 && i < 70)
//	{
//		printf("分数等级为D\n");
//	}
//	else 
//	{
//		printf("成绩不合格\n");
//	
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char ch;
//	printf("请输入成绩等级\n");
//	scanf("%c", &ch);
//	switch (ch)
//	{
//		case 'A':printf("你的成绩在90分以上！\n");	break;		//必须要有break结束语句，不然报错
//		case 'B':printf("你的成绩在80到90之间！\n"); break;
//		case 'C':printf("你的成绩在70到80之间！\n"); break;
//		case 'D':printf("你的成绩在60到70之间！\n"); break;
//		case 'E':printf("你的成绩在60分以下！\n"); break;
//	
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b;
//	printf("请输入两个整数：");
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
//	printf("是否有空?(Y/N)\n");
//	scanf("%c", &isFree);
//
//	getchar();//忽略第一次输入后的回车键，否则第二次输入的将是回车键，必须要有
//	printf("是否下雨？(Y/N)\n");
//	scanf("%c", &isRain);
//
//	if (isFree == 'Y')
//	{
//		if (isRain == 'Y')
//		{
//			printf("记得带伞噢^_^\n");
//		}
//		else {
//			printf("玩的开心\n");
//		}
//
//	}
//	else
//	{
//		printf("女神没空|_|\n");
//	
//	}
//
//	return 0;
//}


//while循环语句
//#include <stdio.h>
//int main() 
//{
//	int i = 1, sum = 0;
//	while(i <= 100)
//	{
//		sum = sum + i;
//		i = i + 1;
//	}
//	printf("结果是：%d", sum);
//
//	return 0;
//}


//getchar(),统计输入英文句子的字符个数
//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//	printf("请输入英文句子！");
//	while (getchar() != '\n')	//如果getchar这个函数获得的值不是回车，就执行下面的语句
//	{
//		count = count + 1;
//	}
//	printf("您总共输入了%d个字符！\n", count);
//	return 0;
//}


//for循环
//判断一个数是否为素数
//#include <stdio.h>
//int main()
//{
//	int i, num;
//	_Bool flag = 1;
//	printf("请输入一个整数：\n");
//	scanf("%d", &num);
//	
//	for (i = 2; i < num / 2; i++)
//	{
//		if (num % i == 0)
//			//判断输入的输除以从2开始到一半是否等于0，如果是就复制flag=0
//		{
//			flag = 0;
//		}
//	}
//	if (flag)
//	{
//		printf("%d是一个素数！\n", num);
//	}
//	else
//	{
//		printf("%d不是一个素数！\n", num);
//	}
//	return 0;
//}


//打印99乘法表
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
//		putchar('\n');	//当前循环语句结束则换行
//	}
//
//	return 0;
//}


//break语句
//#include <stdio.h>
//int main()
//{
//	long long i, num;
//	_Bool flag = 1;
//	printf("请输入一个整数：\n");
//	scanf("%lld", &num);
//	
//	for (i = 2; i < num / 2; i++)
//	{
//		if (num % i == 0)
//			//判断输入的输除以从2开始到一半是否等于0，如果是就复制flag=0
//		{
//			flag = 0;
//			break;//使得程序效率提高，只运行一次便可知道该数不是素数
//		}
//	}
//	if (flag)
//	{
//		printf("%d是一个素数！\n", num);
//	}
//	else
//	{
//		printf("%d不是一个素数！\n", num);
//	}
//	printf("i=%lld", i);
//	return 0;
//}


//continue语句
//#include <stdio.h>
//int main()
//{
//	int ch;
//	while ((ch = getchar() )!= '\n')	//将键盘输入的值给到ch
//	{
//		if (ch == 'C')	//如果输入了C则执行continue,跳过剩下语句，进行下一次循环
//		{
//			continue;
//		}
//		putchar(ch);	//依次输出ch的内容
//	}
//	putchar('\n');
//	return 0;
//}


//goto语句,,尽量避免使用goto语句
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


//数组,存储一批同类型数据的地方
//计算10个同学的平均成绩
//#include <stdio.h>
//#define NUM 10//宏定义
//int main()
//{
//	int s[NUM];
//	int i, sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("请输入第%d位的成绩\n", i + 1);
//		scanf("%d", &s[i]);
//		sum += s[i];
//	}
//	printf("该次考试的平均分是%2f\n", (double)sum/NUM);
//	return 0;
//}


//数组的定义
//#include <stdio.h>
//int main()
//{
//	int a[10] ;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	printf("%d\n", sizeof(a));		//sizeof(a)计算数组a占用的空间大小
//	return 0;
//}


//数组定义错误示例
//#include <stdio.h>
//int main()
//{
//	int n, i;
//	printf("请输入字符个数：");
//	scanf("%d", &n);
//	char a[n + 1];	//输入完字符输入回车，多一个预留空间		“a”的大小未知
//	printf("请开始输入字符：");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%c", &a[i]);
//	}
//	a[n] = '\n';		//	输入结束
//	printf("您依次输入的字符是：%s\n", a);
//	return 0;
//}


//strcpy拷贝字符串
//#include <stdio.h>
//int main()
//{
//	char str1[] = "ranlinchong";
//	char str2[100];
//	strcpy(str2, str1);		//将str1的字符拷贝给str2
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return 0;
//}


//二维数组
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


//数组的转置
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
//			b[i][j] = a[j][i];				//转置
//			printf("%d\t", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//指针
//#include <stdio.h>
//int main()
//{
//	char a = 'F';
//	int f = 123;
//
//	char *pa = &a;	//定义字符型指针
//	int* pb = &f;	//定义整型指针
//	printf("a=%c\n", *pa);
//	printf("f=%d\n", *pb);
//
//	*pa = 'C';
//	*pb += 1;
//	printf("a=%c\n", *pa);
//	printf("f=%d\n", *pb);
//	printf("sizeof pa=%d\n", sizeof(pa));	//指针pa占用4个字节
//	printf("%p\n", pa);
//	return 0;
//}


//指针和数组
//#include <stdio.h>
//int main()
//{
//	char str[128];
//	printf("请输入：");
//	scanf("%s", str);
//	printf("%s\n", str);
//	printf("str地址是：%p\n", str);
//	printf("str地址是：%p\n", &str[0]);
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
//	char* target = str;	//数组名只是一个地址，而指针是一个左值
//	int count = 0;
//	while (*target++ != '\0')
//	{
//		count++;
//	}
//	printf("总共有%d\n", count);
//
//	return 0;
//}


//指针数组的定义
//#include <stdio.h>
//int main()
//{
//	char* p1[5] = { "只","能","是","你","啊" };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", p1[i]);
//	}
//	return 0;
//}
// 


////数组指针的定义错误案列与正确案列
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
//	int* p = temp;	//指针指向数组的第一个元素的地址
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}


//结论：*(array+i)==array[i]
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


//void指针,void指针可以转化为任何类型的指针
//#include<stdio.h>
//int main()
//{
//	int num = 128;
//	int* pi = &num;
//	char* ps = "FishC";
//	void* pv;
//	pv = pi;
//	printf("pi:%p \tpv:%p\n", pi, pv);
//	printf("*pv:%d\n", *(int*)pv);			//需要使用强制转换符
//	 
//	pv = ps;
//	printf("ps:%p \tpv:%p\n", ps, pv);
//	printf("*pv:%d\n", (char*)pv);
//	return 0;
//}


//NULL指针
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
//	const float pi = 3.14;	//const表示接下来定义的变量为只读，不可修改
//	printf("%f\n", pi);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 520;
//	const int cnum = 888;
//	int* const p = &num;//常量指针
//	//int const* b = &num;//指向常量的指针
//	*p = 1024;
//	printf("*p:%d\n", *p);
//	return 0;
//}


//函数
//#include<stdio.h>
//void Pr();	//声明函数
//void Pr()	//定义函数
//{
//	printf("CC\n");	//函数主体
//}
//int main()
//{
//	Pr();
//	return 0;
//}


//使用函数计算1+2+...+n的值
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
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	result = sum(n);	//返回的结果存放到result里面
//	printf("1+2+...+(n-1)+n的结果是：%d\n", result);
//	return 0;
//}


//#include<stdio.h>
//int Max(int, int);	//声明函数
//int Max(int x, int y)//定义函数
//{
//	if (x > y)		//函数主体
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a, b, c;
//	printf("请输入两个整数：");
//	scanf("%d %d", &a, &b);
//	c = Max(a, b);	//函数返回的值存放在c中
//	printf("他们中较大的是：%d\n", c);
//	return 0;
//
//}


//使用指针改变形参的同时可以改变实参
//#include<stdio.h>
//void swp(int *x, int *y)
//{
//	int temp;
//	printf("swp互换前：x=%d\ty=%d\n", *x, *y);
//
//	temp = *x;
//	*x = *y;
//	*y = temp;
//	printf("swp互换后：x=%d\ty=%d\n", *x, *y);
//}
//int main()
//{
//	int x = 5, y = 3;
//	printf("main互换前：x=%d\ty=%d\n", x, y);
//
//	swp(&x, &y);
//	printf("main互换后：x=%d\ty=%d\n", x, y);
//	return 0;
//}


//传数组
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
//	printf("再打印一次\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("a[%d]=%d\n", i, a[i]);
//	}
//	return 0;
//}


//传给形参的只是一个地址
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


//可变参数
//#include<stdio.h>
//#include<stdarg.h>		//	可变参数
//int sum(int n, ...);	//...说明参数的个数不确定
//int sum(int n, ...)
//{
//	int i, sum = 0;
//	va_list vap;	//定义参数列表
//	va_start(vap, n);//初始化
//	for (i = 0; i < n; i++)
//	{
//		sum += va_arg(vap, int);	//va_arg获得每一个参数的值
//	}
//	va_end(vap);	//va_end关闭参数列表
//	return sum;
//}
//int main()
//{
//	int result;
//	result = sum(2, 3, 4, 2);
//	printf("result=%d\n", result);
//	return 0;
//}


//指针函数
//#include<stdio.h>
//char *getWord(char c)
//{
//	
//	switch (c)
//	{
//	case 'A':return "Apple";	//不能返回局部变量的指针
//	case 'B':return "Banana";
//	default:return "None";
//	}
//}
//int main()
//{
//	char input;
//	printf("请输入一个字母：");
//	scanf("%c", &input);
//	printf("%s\n", getWord(input));
//	return 0;
//}


//函数指针
//#include<stdio.h>
//int square(int num)
//{
//	return num * num;
//}
//int main()
//{
//	int num;
//	int (*fp)(int);	//定义函数指针，与函数int square等价
//	printf("请输入一个整数：");
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
//	printf("3+5=%d\n", calc(add, 3, 5));	//先调用calc函数再从calc中调用add函数
//	printf("3-5=%d\n", calc(sub, 3, 5));
//	return 0;
//}


//加减乘除算法
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
//	printf("请输入一个式子（如1+3）：");
//	scanf("%d%c%d", &num1, &op, &num2);
//
//	fp = select(op);
//	printf("%d %c %d = %d\n", num1, op, num2, calc(fp, num1, num2));
//	return 0;
//}


//全局变量和局部变量
//#include<stdio.h>
//int main()
//{
//	int i = 520;	//全局变量
//	printf("defore,i=%d\n", i);
//	for (int i = 0; i < 10; i++)//局部变量
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
//int count = 0;	//全局变量
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
//	printf("一共%d次\n", count);
//	return 0;
//}


//extern
//#include<stdio.h>
//void ARC()
//{
//	extern count;//告诉编译器变量定义在后边，可用于多文件同变量
//	count++;
//}
//int count = 0;
//int main()
//{
//	ARC();
//	printf("%d\n", count);
//	return 0;
//}


//代码块作用域
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


//文件作用域
//#include<stdio.h>
////函数在源文件2
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
//	printf("一共%d次！\n", count);
//	return 0;
//}


//
//#include<stdio.h>
//void func()
//{
//	static int count = 0;	//静态局部变量，结束后count的值不会被释放
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


//用循环实现求阶乘
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
//	printf("请输入一个正整数：");
//	scanf("%d", &num);
//	C = fact(num);
//	printf("%d的阶乘是:%d\n", num,C);
//	return 0;
//}


//递归实现求阶乘
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
//	printf("请输入一个正整数：");
//	scanf("%d", &num);
//	C = fact(num);
//	printf("%d的阶乘是:%d\n", num, C);
//	return 0;
//}


//递归汉诺塔
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
//	printf("请输入汉诺塔的层数：");
//	scanf("%d", &n);
//	hanoi(n, 'x', 'y', 'z');
//	return 0;
//}


//递归实现快速排序
//#include <stdio.h>
//void quick_sort(int array[], int left, int right)
//{
//	int i = left, j = right;
//	int temp;
//	int pivot;
//	pivot = array[(left + right) / 2];
//	while (i <= j)
//	{
//		//从左往右找到大于等于基准点的元素
//		while (array[i] < pivot)
//		{
//			i++;
//		}
//		//从右往左找到小于等于基准点的元素
//		while (array[j] > pivot)
//		{
//			j--;
//		}
//		//如果i<=j则互换
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
//	lenth = sizeof(array) / sizeof(array[0]);//整个数组的宽度除每个元素的宽度就等于整个数组的个数
//	quick_sort(array,0,lenth-1);
//	printf("排序后：");
//	for (i = 0; i < lenth; i++)
//	{
//		printf("%d  ", array[i]);
//
//	}
//	putchar('\n');
//	return 0;
//}


//malloc：申请动态内存,free:释放动态空间
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* ptr;
//	ptr = (int*)malloc(sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("分配内存失败！\n");
//		exit(1);//退出程序，return也可以
//	}
//	printf("请输入一个整数：");
//	scanf("%d", ptr);
//	printf("您输入的整数是：%d\n", *ptr);
//	free(ptr);
//	printf("您输入的整数是：%d\n", *ptr);
//	return 0;
//}


////申请一块任意尺寸的内存空间    
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int *ptr = NULL;
//	int num, i;
//	printf("请输入待录入整数个数：");
//	scanf("%d", &num);
//	ptr = (int*)malloc(num * sizeof(int));
//	for (i = 0; i < num; i++) 
//	{
//		printf("请输入第%d个整数：", i + 1);
//		scanf("%d", &ptr[i]);
//	}
//	printf("你输入的整数是：");
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
//	//第一次申请内存空间
//	ptr1 = (int*)malloc(10 * sizeof(int));
//	//进行若干操作发现ptr1内存空间不够用！！！
//	//进行第二次内存空间申请
//	ptr2= (int*)malloc(20 * sizeof(int));
//	//将ptr1的数据拷贝到ptr2中
//	memcpy(ptr2, ptr1, 10);
//	free(ptr1);
//	//对ptr2进行若干操作
//	free(ptr2);
//	return 0;
//}


//realloc:重新分配内存空间
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int i, num;
//	int count=0;
//	int* ptr = NULL;//这里必须初始化为NULL
//	do
//	{
//		printf("请输入一个整数（输入-1表示结束）：");
//		scanf("%d", &num);
//		count++;
//		ptr = (int*)realloc(ptr, count * sizeof(int));//根据输入的内容自动拓宽内存
//		if (ptr == NULL)
//		{
//			exit(1);
//		}
//		ptr[count - 1] = num;
//	}
//	while (num != -1);
//	printf("输入的整数分别是：");
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


//高级宏定义：不带参数数宏定义
//#include<stdio.h>
//#define R 6371
//#define PI 3.14
//#define V PI*R*R*R*4/3
//int main()
//{
//	int r;
//	float s;
//	printf("请输入圆的半径：");
//
//	scanf("%d", &r);
//	s = PI * r * r;
//	printf("圆的面积为：%2f\n", s);
////#undef PI	//终止宏定义
//	printf("地球的体积为：%2f\n",V);
//	return 0;
//}


//带参数的宏定义
//#include<stdio.h>
//#define MAX(x,y) (((x)>(y))?(x):(y))
//int main()
//{
//	int x, y;
//	printf("请输入两个整数：");
//	scanf("%d%d", &x, &y);
//	printf("%d是较大的", MAX(x, y));
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


//结构体
//#include<stdio.h>
//struct Book		//结构体的声明与定义
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
//	printf("请输入书名：");
//	scanf("%s",book.title);
//	printf("请输入作者：");
//	scanf("%s",book.author);
//	printf("请输入售价 ：");
//	scanf("%f",&book.price);
//	printf("请输入出版日期：");
//	scanf("%d",&book.date);
//	printf("请输入出版社：");
//	scanf("%s",book.publisher);
//
//	printf("\n=====数据录入完毕=====\n\n");
//
//	printf("书名：%s\n", book.title);
//	printf("作者：%s\n", book.author);
//	printf("售价：%.2f\n", book.price);
//	printf("出版日期：%d\n", book.date);
//	printf("出版社：%s\n", book.publisher);
//	return 0;
//}


//内存对齐
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


//结构体的嵌套
//#include<stdio.h>
//struct Date
//{
//	int year;
//	int month;
//	int day;
//};
//struct Book		//结构体的声明与定义
//{
//	char title[128];
//	char author[40];
//	float price;
//	struct Date date;
//	char publisher[40];
//
//} book = {
//	"《带你学C带你飞》",
//	"小甲鱼",
//	48.8,
//	{2022,4,16},
//	"清华大学出版社"
//};
//int  main()
//{
//	printf("书名：%s\n", book.title);
//	printf("作者：%s\n", book.author);
//	printf("售价：%.2f\n", book.price);
//	printf("出版日期：%d-%d-%d\n", book.date.year, book.date.month, book.date.day);
//	printf("出版社：%s\n", book.publisher);
//	return 0;
//}


//传递结构体变量
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
//	printf("请输入书名：");
//	scanf("%s", book->title);
//	printf("请输入作者：");
//	scanf("%s", book->author);
//	printf("请输入售价：");
//	scanf("%d", &book->price);
//	printf("请输入出版日期：");
//	scanf("%d-%d-%d", &book->date.year, &book->date.month, &book->date.day);
//	printf("请输入出版社：");
//	scanf("%s", book->publisher);
//
//}
//void printBook(struct Book *book)
//{
//	printf("书名：%s\n", book->title);
//	printf("作者：%s\n", book->author);
//	printf("售价：%d\n", book->price);
//	printf("出版日期：%d-%d-%d\n", book->date.year, book->date.month, book->date.day);
//	printf("出版社：%s\n", book->publisher);
//}
//int main()
//{
//	struct Book b1,b2;
//	printf("请录入第一本书的信息...\n");
//	getInput(&b1);
//	putchar('\n');
//	printf("请录入第二本书的信息...\n");
//	getInput(&b2);
//
//	printf("\n\n=====录入完毕=====\n\n");
//	putchar('\n');
//	printf("打印第一本书的信息...\n");
//	printBook(&b1);
//	putchar('\n');
//	printf("打印第二本书的信息...\n");
//	printBook(&b2);
//
//	//使用动态结构体
//	/*struct Book *b1, *b2;
//	b1 = (struct Book*)malloc(sizeof(struct Book));
//	b2 = (struct Book*)malloc(sizeof(struct Book));
//	if (b1 == NULL || b2 == NULL)
//	{
//		printf("内存分配失败！\n");
//		exit(1);
//	}
//	printf("请录入第一本书的信息...\n");
//	getInput(b1);
//	putchar('\n');
//	printf("请录入第二本书的信息...\n");
//	getInput(b2);
//
//	printf("\n\n=====录入完毕=====\n\n");
//	putchar('\n');
//	printf("打印第一本书的信息...\n");
//	printBook(b1);
//	putchar('\n');
//	printf("打印第二本书的信息...\n");
//	printBook(b2);
//	free(b1);*/
//	/*free(b2);*/
//	return 0;
//}



//单链表头插法
//#include<stdio.h>
//#include<stdlib.h>
//
//struct Book
//{
//	char title[128];
//	char author[40];
//	struct Book* next;	//指向下一个Book结构体
//};
//void getInput(struct Book* book);
//void addBook(struct Book** libaray);
//void printLibaray(struct Book* libaray);
//void releaseLibaray(struct Book** libaray);
//void getInput(struct Book* book)
//{
//	printf("请输入书名：");
//	scanf("%s", book->title);
//	printf("请输入作者：");
//	scanf("%s", book->author);
//}
//void addBook(struct Book **libaray)
//{
//	struct Book* book,*temp;
//	book = (struct Book*)malloc(sizeof(struct Book));
//	if (book == NULL)
//	{
//		printf("内存分配失败！");
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
//		printf("书名：%s\t", book->title);
//		printf("作者：%s\n", book->author);
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
//	struct Book* libaray = NULL;//这是一个空的单链表
//	int ch;
//	while (1)
//	{
//		printf("请问是否需要输入书籍信息（Y/N）：");
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
//	printf("请问是否需要打印信息（Y/N）:");
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


//文件读取
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	int ch;
	if ((fp = fopen("hello.txt", "w")) == NULL)
	{
		printf("打开文件失败！\n");
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	return 0;
 }