#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//��������������ָ��
//1.���ֳ���
//2.const���εĳ�����
// 3.define���峣��
// 4.ö�ٳ��� 
// 
// 
//
//int main()
//{
	//30;
	//3.14;
	//"w";
	//"abc";//���϶����ַ�����
	//const int a = 10;//��const֮��a�޷��ı�,��c������,const�����Ǳ��������޷���ֱ���޸�,�г��������ԡ�
	//a = 20;
	//printf("%d\n", a);

	//return 0;
//}


//#define STR "abcdef"
//#define MAX  100 //����һ������MAX,��ʶ����ֵ��100
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//
//
//}



//ö�ٳ���

enum Color//color��δ������ȡֵ
{
	RED,
	GREEN,
	BLUE 
};
int main()
{
	enum Color c = RED; 


	return 0;
}