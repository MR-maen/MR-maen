#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int bijiao(int x, int y)//����
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
	printf("��������������\n");
	scanf("%d%d%d", &a, &b, &c);
	int max1 = bijiao(a, b);
	int max = bijiao(max1, c);
	printf("����������%d\n", max);


	system("pause");
	return 0;
}