#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
	int x;
	char flag = 'O';   /* 大写字母O,代表偶数的意思 */
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
