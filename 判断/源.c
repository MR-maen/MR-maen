#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
	int x;
	char flag = 'O';   /* ��д��ĸO,����ż������˼ */
	scanf("%d", &x);
	if ((x >= 0)&&(x%2==1))
	{
		flag = 'J';
	}
	if (x < 0)
	{
		flag = 'F';
	}
		printf("%d: %c\n", x, flag);
}
