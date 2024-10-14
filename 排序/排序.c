#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int bijiao(int x, int y)//函数
{
	int z;
	if (x <= y)
	{
		z = y;
	}
	else
	{
		z = x;
	}
	return z;
}
int main()
{
	int a, b, c;
	printf("请输入三个整数\n");
	scanf("%d%d%d", &a, &b, &c);
	int max1 = bijiao(a, b);
	int max = bijiao(max1, c);
	printf("最大的数字是%d\n", max);


	system("pause");
	return 0;
}