#include <iostream>
using namespace std;
// 练习1：闰年的判断 

//代码1
//#include <iostream>
//using namespace std;
//int main()
//{
// 	int year = 0;
// 	cin >> year;
// 	if (year % 4 == 0 && year % 100 != 0)
// 		cout << "1" << endl;
// 	else if (year % 400 == 0)
// 		cout << "1" << endl;
// 	else
// 		cout << "0" << endl; 
// 	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
// 	int year = 0;
// 	cin >> year;
// 	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
// 		cout << "1" << endl;
// 	else
// 		cout << "0" << endl;
// 	return 0;
//}


//练习2：晶晶赴约会  


//#include <iostream>
//using namespace std;
//int main()
//{
// 	int d = 0;
// 	cin >> d;
// 	if (d == 1 || d == 3 || d == 5)
// 		cout << "NO" << endl;
// 	else
// 		cout << "YES" << endl;
// 	return 0;
//}



//三角形的判断 
//#include <iostream>
//using namespace std;
//int main()
//{
// 	int a, b, c;
// 	cin >> a >> b >> c;
// 	if (a + b > c && a + c > b && b + c > a)
// 		cout << 1 << endl;
// 	else
// 		cout << 0 << endl;
// 	return 0;
//}


//判断能否被 3，5，7 整除
//#include <iostream>
//using namespace std;
//int main()
//{
// 	int n = 0;
// 	cin >> n;
// 	if (n % 3 == 0)
// 	{
// 		cout << 3 << " ";
// 	}
// 	if (n % 5 == 0)
// 	{
// 		cout << 5 << " ";
// 	}
//	if (n % 7 == 0)
// 	{
// 		cout << 7 << " " << endl;
// 	}
// 	if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
// 		cout << "n" << endl;
// 	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
// 	int x = 0;
// 	cin >> x;
// 	//同时满足的情况
// 	if (x % 2 == 0 && (x > 4 && x <= 12))
// 		cout << 1;
// 	else
// 		cout << 0;
// 	//至少满足1种情况
// 	if (x % 2 == 0 || (x > 4 && x <= 12))
// 		cout << " " << 1;
// 	else
// 		cout << " " << 0;
// 	//只满足1种情况
// 	if ((x % 2 == 0) + (x > 4 && x <= 12) == 1)
// 		cout << " " << 1;
// 	else
// 	cout << " " << 0;
// 	//2种情况都不满足 
// 	if ((x % 2 == 0) + (x > 4 && x <= 12) == 0)
// 		cout << " " << 1;
// 	else
// 		cout << " " << 0;
// 	return 0;
//}


//#include <cstdio>
//int main()
//{
// 	int day = 0;
// 	cin >> day;
// 	switch (day)
// 	{
// 	case 1:
// 		cout << "Monday" << endl;
// 		break;
// 	case 2:
// 		cout << "Tuesday" << endl;
// 		break;
// 	case 3:
// 		cout << "Wednesday" << endl;
// 		break;
// 	case 4:
// 		cout << "Thursday" << endl;
// 		break;
// 	case 5:
// 		cout << "Friday" << endl;
// 		break;
// 	case 6:
// 		cout << "Saturday" << endl;
// 		break;
// 	case 7:
// 		cout << "Sunday" << endl;
// 		break;
// }
//	return 0;
//}


//#include <cstdio>
//int main()
//{
// int day = 0;
// cin >> day;
// switch (day)
// {
// 	case 1:
// 	case 2:
// 	case 3:
// 	case 4:
// 	case 5:
// 		cout << "Workday" << endl;
// 		break;
// 	case 6:
// 	case 7:
// 		cout << "Weekend" << endl;
// 		break;
// }
// 	return 0;
//}


//版本1
//输入的格式使用C语言的scanf的方式
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
// 	int year = 0, month = 0;
// 	scanf("%4d%2d", &year, &month);
// 	switch (month)
// 	{
// 	case 3:
// 	case 4:
// 	case 5:
// 		cout << "spring" << endl;
// 		break;
// 	case 6:
// 	case 7:
// 	case 8:
// 		cout << "summer" << endl;
// 		break;
// 	case 9:
// 	case 10:
// 	case 11:
// 		cout << "autumn" << endl;
// 		break;
// 	case 12:
// 	case 1:
// 	case 2:
// 		cout << "winter" << endl;
// 		break;
// 	}
// 	return 0;
//}


//版本2
//输入的方式使用C++中的cin
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
// 	int n = 0, month = 0;
// 	cin >> n; //?次性读取到的事6位整数
// 	month = n % 100; //获取最低2位，就是?份
// 	switch (month)
// 	{
// 	case 3:
// 	case 4:
// 	case 5:
// 		cout << "spring" << endl;
// 		break;
// 	case 6:
// 	case 7:
// 	case 8:
// 		cout << "summer" << endl;
// 		break;
// 	case 9:
//	case 10:
// 	case 11:
// 		cout << "autumn" << endl;
// 		break;
// 	case 12:
// 	case 1:
// 	case 2:
// 		cout << "winter" << endl;
// 		break;
// 	}
// 	return 0;
//}

//简单计算器

//#include <iostream>
//using namespace std;
//int main()
//{
// 	int n1, n2;
// 	char c;
// 	cin >> n1 >> n2 >> c;
// 	if (n2 == 0 && c == '/')
// 		cout << "Divided by zero!" << endl;
// 	else
// 	{
// 		switch (c)
// 		{
// 		case '+':
// 			cout << n1 + n2 << endl;
// 			break;
// 		case '-':
// 			cout << n1 - n2 << endl;
// 			break;
// 		case '*':
// 			cout << n1 * n2 << endl;
// 			break;
// 		case '/':
// 			cout << n1 / n2 << endl;
// 			break;
// 		default:
// 			cout << "Invalid operator!" << endl;
// 			break;
// 		}
// 	}
// return 0;
//}


//计算多项式的值
//#include <cmath>
//#include <cstdio>
//int main()
//{
//	float x;
//	int n;
//	double sum = 1;
//	cin >> x >> n;
//	
//	while(n)
//	{
//		sum += pow(x,n);
//		n--;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}


//循环 :打印乘法表

//#include <cstdio>
//int main()
//{
//	for(int i = 1; i <= 9; i++)
//	{
//    	//打印一行的内容
// 		for(int j = 1; j <= i; j++)
// 		{
// 			printf("%d*%d=%2d ", j, i, j * i);
// 		}
// 		printf("\n");
//	} 
//	return 0;
// } 



//裴波拉切数列
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n = 0; 
//    cin >> n;
//    for(int i = 0;i < n; i++)
//    {
//        int a1 = 1;
//        int a2 = 1;
//        int a3 = 1;
//        int k;
//        cin >> k;
//        while(k > 2)
//        {
//            a3 = a1 + a2;
//            a1 = a2;
//            a2 = a3;
//            k--;
//        }
//        cout << a3 << endl;
//    }
//    return 0;
//} 



//三角形

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
// 	int n = 0;
// 	cin >> n;
// 	for(int i = 1; i <= n; i++)
// 	{
// 		for(int j = 1; j <= i; j++)
// 		cout << "*";
// 	cout << endl; 
// 	}
// 	return 0;
//}


//画矩形
//int main()
//{
//	int a, b, c;
//	char d;
//	cin >> a >> b >> d >> c;
//	if(c == 1)
//	{
//		for(int i = 0; i < a; i++)
//		{
//			int j = b;
//			while(j--)
//			{
//				cout << d;	
//			}
//			cout << endl;	
//		}
//	}
//	else
//	{
//		for(int i = 0; i < a ; i++)
//		{
//			
//			for(int j = 0; j < b; j++)
//			{
//				if(i == 0 || i == a - 1 || j == 0 || j == b - 1)
//				{
//					cout << d;
//				}
//				else
//				{
//					cout << ' ';
//				}
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}


//救援

//在直角坐标系的原点是大本营，救生船每次从大本营出发，救了人之后将人送回大本营。坐标系中的点代表屋顶，
//每个屋顶由其位置坐标和其上的人数表示。救生船每次从大本营出发，以速度 50 米 / 分钟驶向下一个屋顶，
//达到一个屋顶后，救下其上的所有人，每人上船 1 分钟，船原路返回，达到大本营，每人下船 0.5 分钟。
//假设原点与任意一个屋顶的连线不穿过其它屋顶。


//#include <cmath>
//
//int main()
//{
//	int n, p;
//	cin >> n;
//	double a, b, t;
//	
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a >> b >> p;
//		double s = sqrt(a*a + b*b);
//		t += s / 50 + p * 1.0 + p * 0.5 + s / 50;
//	}
//	cout << (int)ceil(t) << endl;
//	return 0;
//}


//练习7：求分数序列和 

//#include <iomanip>
//int main()
//{
//	int n;
//	cin >> n;
//	double count = 0;
//	int flag = 1;
//	for(int i = 1 ; i <= n; i++)
//	{
//		count += 1.0 / i * flag;
//		flag = -flag;
//	}
//	cout << fixed << setprecision(4) <<count << endl;
//	return 0;
//}



//求分数序列和

//#include <iomanip>
//int main()
//{
//	double q1 = 2.0;
//	double p1 = 1.0;
//	int n;
//	cin >> n;
//	double count = 0;
//	for(int i = 1 ; i <= n; i++)
//	{
//		count += q1 / p1;
//		q1 = q1 + p1;
//		p1 = q1 - p1;
//	}
//	cout << fixed << setprecision(4) << count << endl;
//	return 0;
//}


//练习2：球弹跳高度的计算


//int main()
//{
//	double h = 0;
//	double total = 0;//总 
//	cin >> h;
//	total += h;
//	
//	int i = 1;
//	do
//	{
//		h /= 2;
//		total += h * 2;
//		i++;
//	}
//	while(i <= 9);
//	
//	cout << total << endl;
//	cout << h/2 << endl;
//	return 0;
//}


//练习6：第 n 小的质数
//输入一个正整数 n，求正整数范围中第 n小的质数。
//int main()
//{
//	int n;
//	cin >> n;
//	int i = 2;
//	int cnt = 0;//计数
//	
//	while(1)
//	{
//		//判断是否为素数
//		int flag = 1; //假设i是素数 
//		for(int j = 2; j <= i-1; j++)
//		{
//			if(i % j == 0)
//			{
//				flag = 0; 
//				break;
//			}
//			
//		 } 
//		 if(flag == 1)
//		 {
//		 	cnt++;
//		 }
//		 
//		 if (cnt == n)
//		 {
//		 	break;
//		 }
//		 i++;
//	 } 
//	 cout << i << endl;
//	return 0;
//}

//优化
#include <cmath>
int main()
{
	int n;
	cin >> n;
	int i = 2;
	int cnt = 0;//计数
	
	while(1)
	{
		//判断是否为素数
		int flag = 1; //假设i是素数 
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0)
			{
				flag = 0; 
				break;
			}
			
		 } 
		 if(flag == 1)
		 {
		 	cnt++;
		 }
		 
		 if (cnt == n)
		 {
		 	break;
		 }
		 i++;
	 } 
	 cout << i << endl;
	return 0;
} 

