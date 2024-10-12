#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//引用输入和输出的指令
//1.数字常量
//2.const修饰的常变量
// 3.define定义常量
// 4.枚举常量 
// 
// 
//
//int main()
//{
	//30;
	//3.14;
	//"w";
	//"abc";//以上都是字符常量
	//const int a = 10;//有const之后a无法改变,在c语言中,const本质是变量但是无法被直接修改,有常量的属性。
	//a = 20;
	//printf("%d\n", a);

	//return 0;
//}


//#define STR "abcdef"
//#define MAX  100 //定义一个符号MAX,标识符，值是100
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



//枚举常量

enum Color//color的未来可能取值
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