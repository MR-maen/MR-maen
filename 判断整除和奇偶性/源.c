#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
	int m, n;
	  
	printf("����������������\n");
	scanf_s("%d%d", &m, &n);
	if (0 == m % n)
	{
		printf("m��%d��n��%d", m, n);
	}
	else
	{
		if (m % 2 == 1)
		{
			printf("m��Odd\n");
		}
		if (m%2==0)
		{
			printf("m��Even\n");
		}
		if (n % 2 == 1)
		{
			printf("n��Odd\n");
		}
		if (n % 2 == 0)
		{
			printf("n��Even\n");
		}

	}
	return 0;
}
 