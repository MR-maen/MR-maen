#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char x;
	printf("ÊäÈëÒ»¸ö×ÖÄ¸");
	scanf("%c", &x);
	if (('E' <= x && x <= 'V') || ('e' <= x && x <= 'v'))
	{
		char x1 = x + 4;/////////////////
		printf("%c\n", x1);
	}
	else
	{
		printf("%d\n", x);
	}

	system("pause");
	return 0;
}