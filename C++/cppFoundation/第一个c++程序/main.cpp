#include <iostream>
using namespace std;

#include <math.h>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char** argv) {
////	printf("Hello world��");
//
//	cout << "Hello world!" << endl; 
//	cout << "like CPP" << endl;
//	return 0;
//}

//��ϰ1��Hello,World!

//int main()
//{
//	cout << "Hello,World!" << endl;
//	return 0;
//}


//��ϰ2����ӡ�ɻ�
//
//int main()
//{
//	cout << "     **     " << endl;
// 	cout << "     **     " << endl;
// 	cout << "************" << endl;
// 	cout << "************" << endl;
// 	cout << "    *  *    " << endl;
// 	cout << "    *  *    " << endl;
//
//	return 0;
//}

//��ϰ3����2������
//int main()
//{
//	int a,b;
//	cin >> a >> b;
//	cout << b << endl;
//	return 0;
// } 

//��ϰ4���ַ�������
//int main()
//{
//	char c;
//	cin >> c;
//	cout << "  " << c << endl;
//	cout << " " << c << c << c << endl;
//	cout << c << c << c << c << c<< endl;
//	
//	return 0;
// } 
 
// int main()
// {
// 	char c1 = 'Q';
// 	cout << c1 << endl;
// 	char c2 = 81;
// 	cout << c2 << endl;
// 	return 0;
// }


//int main()
//{
//	char c = 'a';
//	short s = -10;
//	int i = -10;
//	long l = 34;
//	long long ll = 345;
//	float f = 1.334f;
//	double d = 3.14;
//	long double = 123.514;
//	
//	return 0;
//}
////�ַ���
//char
//signed char //�з��ŵ��ַ�����
//unsigned char //?���ŵ��ַ�����
////������
//short [int]
//[signed] short [int] //�з��ŵĶ�����
//unsigned short [int] //?���ŵĶ�����
////����
//int
//[signed] int //�з��ŵ�����
//unsigned [int] //?���ŵ�����
//
////������
//long [int] 
//[signed] long [int] //�з��ŵ�?����
//unsigned long [int] //?���ŵ�?����
////����������
//long long [int]
//[signed] long long [int] //�з��ŵ�

//unsigned long long [int] //?���ŵ�
//3.6 �������ͳ��� 
//sizeof ������
// int main()
//{
// int a = 10;
// cout << sizeof(a) << endl;
// cout << sizeof a << endl; //a�Ǳ��������֣�����ʡ�Ե�sizeof��ߵ�()����������ȥ��
// cout << sizeof(int) << endl;
// return 0;
//}




//�����ķ���
//int global = 2023; //ȫ�ֱ���
//int main()
//{
// int local = 2018; //�ֲ�����
// cout << local << endl;
// cout << global << endl;
// return 0;
//}

//����ֲ���ȫ�ֱ�����������ͬ�أ�

//int n = 1000;
//int main()
//{
// int n = 10;
// cout << n << endl; //��ӡ�Ľ���Ƕ����أ�
// return 0;
//}

//δ��ʼ���ľֲ�����

//int main()
//{
// //�ֲ�����
// int a;
// char c;
// float f;
// double d;
// 
// cout << "int:" << a << endl;
// cout << "char:" << c << endl;
// cout << "float:" << f << endl;
// cout << "double:" << d << endl;
// return 0;
//}
//
////δ��ʼ����ȫ�ֱ���
//
////ȫ�ֱ���
//int a;
//char c;
//float f;
//double d;
//int main()
//{
// cout << "int:" << a << endl;
// cout << "char:" << c << endl;
// cout << "float:" << f << endl;
// cout << "double:" << d << endl;
// return 0;
//}


//���������
//int main()
//{
// int a = 7 + 2; //�ӷ�����
// int b = 7 - 2; //��������
// int c = 7 * 2; //�˷�����
// int d = 7 / 2; //�������㣬�õ��������������
// int e = 7 % 2; //ȡ�����㣬�õ����������������
// 
// cout << a << endl;
// cout << b << endl;
// cout << c << endl;
// cout << d << endl;
// cout << e << end1; 
// 
// return 0;
//}
 

//int main()
//{
//	int a = 1;
//	int b = 0;
//	int c = a / b;  //���� 
//	
//	cout << c << end;
//	float d = 6.0;
//	float e = d % 3;  // ���� 
//	
//	
//	return 0;
//}



//�������ĳ���
//int main()
//{
// float x = 6 / 4;
// cout << x << endl; // 1
// float y = 6.0 / 4; // 6/4.0�����?����
// cout << y << endl; // 1.5
// return 0;
//}


//����ȡģ
//#include <iostream>
//using namespace std;
//int main()
//{
// cout << 11 % -5 << endl; // 1
// cout << -11 % -5 << endl; // -1
// cout << -11 % 5 << endl; // -1
// return 0;
//}


//��ֵ��� 
//int main()
//{
// char a = 'Z';
// char b = a + 'Z';
// cout << b << endl; // ����˲���?������
// 
// //printf�Ǹ�ʽ������������½ڻὲ�������ݲ�������
// printf("%d", b); // -76��char��?��������
// return 0;
//}


#include <iostream>
using namespace std;
int time;
 
int main() 
{
    cin >> time;
    cout << time / 60 / 60 << " " << time / 60 % 60 << " " << time % 60 << endl; 
    return 0;
}










