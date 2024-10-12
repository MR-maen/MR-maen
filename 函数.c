#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()//³¢ÊÔ#1
//{
//	int a, b, c,d;
//	scanf("%d%d%d", &a, &b, &c);
//	d = a + b + c;
//	printf("%d", d);
//
//
//
//	return 0;
//}
int Add(int x, int y)//º¯Êý
{
	int z = x + y;
	return z;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int sum = Add(a, b);
	printf("%d", sum);

	return 0;
}