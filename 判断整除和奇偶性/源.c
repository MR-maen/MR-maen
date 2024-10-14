#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
	int m, n;
	  
	printf("请输入两个正整数\n");
	scanf_s("%d%d", &m, &n);
	if (0 == m % n)
	{
		printf("m是%d，n是%d", m, n);
	}
	else
	{
		if (m % 2 == 1)
		{
			printf("m是Odd\n");
		}
		if (m%2==0)
		{
			printf("m是Even\n");
		}
		if (n % 2 == 1)
		{
			printf("n是Odd\n");
		}
		if (n % 2 == 0)
		{
			printf("n是Even\n");
		}

	}
	return 0;
}
 