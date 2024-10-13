#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x;
	printf("输入天数");
	scanf("%d",& x);
	int n = x % 5;
	switch (n)
	{
	case 0:
		printf("打渔");
		break;
	case 1:
		printf("打渔");
		break;
	case 2:
		printf("打渔");
		break;
	case 3:
		printf("晒网");
		break;
	case 4:
		printf("晒网");
		break;
	default:
		break;
	}

	return 0;
}