#include <iostream>
using namespace std;

#include <math.h>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char** argv) {
////	printf("Hello world！");
//
//	cout << "Hello world!" << endl; 
//	cout << "like CPP" << endl;
//	return 0;
//}

//练习1：Hello,World!

//int main()
//{
//	cout << "Hello,World!" << endl;
//	return 0;
//}


//练习2：打印飞机
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

//练习3：第2个整数
//int main()
//{
//	int a,b;
//	cin >> a >> b;
//	cout << b << endl;
//	return 0;
// } 

//练习4：字符三角形
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
////字符型
//char
//signed char //有符号的字符类型
//unsigned char //?符号的字符类型
////短整型
//short [int]
//[signed] short [int] //有符号的短整型
//unsigned short [int] //?符号的短整型
////整型
//int
//[signed] int //有符号的整型
//unsigned [int] //?符号的整型
//
////长整型
//long [int] 
//[signed] long [int] //有符号的?整型
//unsigned long [int] //?符号的?整型
////更长的整型
//long long [int]
//[signed] long long [int] //有符号的

//unsigned long long [int] //?符号的
//3.6 数据类型长度 
//sizeof 操作符
// int main()
//{
// int a = 10;
// cout << sizeof(a) << endl;
// cout << sizeof a << endl; //a是变量的名字，可以省略掉sizeof后边的()，但不建议去掉
// cout << sizeof(int) << endl;
// return 0;
//}




//变量的分类
//int global = 2023; //全局变量
//int main()
//{
// int local = 2018; //局部变量
// cout << local << endl;
// cout << global << endl;
// return 0;
//}

//如果局部和全局变量，名字相同呢？

//int n = 1000;
//int main()
//{
// int n = 10;
// cout << n << endl; //打印的结果是多少呢？
// return 0;
//}

//未初始化的局部变量

//int main()
//{
// //局部变量
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
////未初始化的全局变量
//
////全局变量
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


//算术运算符
//int main()
//{
// int a = 7 + 2; //加法运算
// int b = 7 - 2; //减法运算
// int c = 7 * 2; //乘法运算
// int d = 7 / 2; //除法运算，得到的是整除后的商
// int e = 7 % 2; //取余运算，得到的是整除后的余数
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
//	int c = a / b;  //报错 
//	
//	cout << c << end;
//	float d = 6.0;
//	float e = d % 3;  // 报错 
//	
//	
//	return 0;
//}



//浮点数的除法
//int main()
//{
// float x = 6 / 4;
// cout << x << endl; // 1
// float y = 6.0 / 4; // 6/4.0结果是?样的
// cout << y << endl; // 1.5
// return 0;
//}


//负数取模
//#include <iostream>
//using namespace std;
//int main()
//{
// cout << 11 % -5 << endl; // 1
// cout << -11 % -5 << endl; // -1
// cout << -11 % 5 << endl; // -1
// return 0;
//}


//数值溢出 
//int main()
//{
// char a = 'Z';
// char b = a + 'Z';
// cout << b << endl; // 输出了不显?的内容
// 
// //printf是格式化输出，后面章节会讲，这章暂不做讲解
// printf("%d", b); // -76，char的?进制内容
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










