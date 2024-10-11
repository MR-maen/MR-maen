#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("abc\n");
//	printf("abc\0def");//只会打印\0之前的字符
//
//
//
//
//	return 0;
//}

//转义字符
//三字母词
//??)-->]
//??(-->[
// 
// %d-打印整形
// %c-打印字符
// %s-打印字符串
// %f-打印float类型的数据
// %lf-打印double类型的数据
// %zu-打印sizeof的返回值
//
//#include <string.h>
//int main()
//{
//	//printf("%s\n", "(are you ok??)");//后面??)可能打印为]
//
//	//printf("%c\n", '\'');//让'只是'
//	//printf("\a\a\a\a\a\a\a\a\a\a\a");
//
//	printf("%c\n", '\130');//代表8进制的130转换为10进制的X  88和ASCLL编码有关
//	printf("%c\n", '\x60');//96作为ASCLL值  16进制
//
//	printf("%d\n", strlen("qwer t"));//6个长度
//	printf("%d\n", strlen("c:\test\628\test.c"));//14个字符
//
//	return 0;
//}