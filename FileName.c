	//c���Դ�����һ��Ҫ��main����
//������
// 
// printf��һ���⺯��
// ר��������ӡ����
// 
//��׼������д��
#include <stdio.h>//��������ͷ�ļ� std-��׼ i-input���� o-output���
//int main()//main��c���Ե����
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
//	int age=20;//������4���ֽڴ��"20"�������
//	double price = 66.6;//double��8���ֽڣ������˰˸��ֽڵĿռ�������66.6�������
//	return 0;
//}


//�����ͳ����ĸ���
//������Ϊ:
//�ֲ�����-{}�ڲ�����ı���
//ȫ�ֱ���-{}�ⲿ����ı���
//int b = 20;//ȫ�ֱ���
//int main()
//{
//	/*short age = 18;
//	int high = 180;
//	float weight = 88.5;*/
//	int a = 10;//�ֲ�����
//
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	int a = 100;//�ᱨ��
//}



//int a = 100;
//int main()
//{
//	int a = 10;
//		printf("a=%d\n", a);//����ʹ�þֲ�����a=10
//		return 0;
//}




////дһ�����룬����2�������ĺ�
//#define _CRT_SECURE_NO_WARNINGS//ʹscanf������
//int main()
//{
//	int num1 = 0;//��ʼ��  ��Ȼ�ᱨ��   ���Ҳ���ʼ���ͻ������ֵ
//	int num2 = 0;
//
//	//������������
//	scanf("%d  %d", &num1, &num2);//%d  %d��˼�Ƕ�ȡ�����������������˼��&����ȷ����ַ
//		//���                      //scanf_sֻ��vs��������ʶ,����ʹ��scanf
//	int sum = num1 + num2;
//	//���
//	printf("%d\n", sum);
//	return 0;
//}


//������������
// 1.�ֲ�����
// 2.ȫ�ֱ���
// ������������:��������Խ�������ڿ�ʼ�����������������ڽ���
// 
// 
// 
// ���������ⲿ�ķ���
extern int a;//��˼����һ����������a

void test()
{
	printf("test-->%d\n", a);
}
//
int main()
{
	test();//����test����
	{
		
		printf("a=%d", a);

	}
	printf("a=%d\n", a);


	return 0;
}