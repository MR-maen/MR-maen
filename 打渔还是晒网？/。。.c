#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x;
	printf("��������");
	scanf("%d",& x);
	int n = x % 5;
	switch (n)
	{
	case 0:
		printf("����");
		break;
	case 1:
		printf("����");
		break;
	case 2:
		printf("����");
		break;
	case 3:
		printf("ɹ��");
		break;
	case 4:
		printf("ɹ��");
		break;
	default:
		break;
	}

	return 0;
}