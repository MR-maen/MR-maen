	//c语言代码中一定要有main函数
//主函数
// 
// printf是一个库函数
// 专门用来打印数据
// 
//标准主函数写法
#include <stdio.h>//用来引入头文件 std-标准 i-input输入 o-output输出
//int main()//main是c语言的入口
//{
//	printf("Hello,World\n");
//	return 0;
//}

//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));	
//	printf("%zu\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int age=20;//申请了4个字节存放"20"这个数据
//	double price = 66.6;//double是8个字节，及用了八个字节的空间来储存66.6这个数据
//	return 0;
//}


//变量和常量的概念
//变量分为:
//局部变量-{}内部定义的变量
//全局变量-{}外部定义的变量
//int b = 20;//全局变量
//int main()
//{
//	/*short age = 18;
//	int high = 180;
//	float weight = 88.5;*/
//	int a = 10;//局部变量
//
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	int a = 100;//会报错
//}



//int a = 100;
//int main()
//{
//	int a = 10;
//		printf("a=%d\n", a);//优先使用局部变量a=10
//		return 0;
//}




////写一个代码，计算2个整数的和
//#define _CRT_SECURE_NO_WARNINGS//使scanf不报错
//int main()
//{
//	int num1 = 0;//初始化  不然会报错   而且不初始化就会是随机值
//	int num2 = 0;
//
//	//输入两个整数
//	scanf("%d  %d", &num1, &num2);//%d  %d意思是读取两个整数，后面的意思是&用于确定地址
//		//求和                      //scanf_s只有vs编译器认识,建议使用scanf
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n", sum);
//	return 0;
//}


//变量的作用域
// 1.局部变量
// 2.全局变量
// 变量生命周期:进入作用越生命周期开始，出作用域生命周期结束
// 
// 
// 
// 声明来自外部的符号
extern int a;//意思是有一个变量来自a

void test()
{
	printf("test-->%d\n", a);
}
//
int main()
{
	test();//引用test函数
	{
		
		printf("a=%d", a);

	}
	printf("a=%d\n", a);


	return 0;
}