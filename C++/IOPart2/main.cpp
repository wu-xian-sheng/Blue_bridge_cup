#include <iostream>
using namespace std; 

//1. OJ（online judge）题目输入情况汇总


//1.1 单组测试用例

//计算 (a+b)/c 的值

//#include <iostream>
//using namespace std;
//int main()
//{
// 	int a, b, c;
// 	cin >> a >> b >> c;
// 	cout << (a + b) / c << endl;
//	return 0;
//}


//练习2：与 7 无关的数  
//#include <iostream>
//using namespace std;
//int main()
//{
// 	int n = 0;
// 	cin >> n;
// 	int i = 1;
// 	int sum = 0;
// 	while (i <= n)
// 	{
// 		if (i % 7 != 0 && i / 10 != 7 && i % 10 != 7)
// 			sum += (i * i);
// 		i++;
// 	}
// 	cout << sum << endl;
// 	return 0;
//}



//1.2 多组测试用例  


//		1.2.1 测试数据组数已知  

//练习1：多组输入a+b II


//#include <iostream>
//using namespace std;
//int main()
//{
//    int n = 0;
//    int a, b;
//    cin >> n;
//    while(n--)
//    {
//        cin >> a >> b;
//        cout << a + b << endl;
//    }
//    return 0;
//}


//练习2：斐波那契数列 


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


//练习3：制糊串  


//#include <iostream>
//using namespace std;
//#include <string>
//int main()
//{
//	string s,q,ans1, ans2;
//	cin >> s >> q;
//	int n = 0;
//	int r1, l1, r2, l2;
//	cin >> n;
//	while(n--)
//	{
//		cin >> l1 >> r1 >> l2 >> r2;
//		ans1 = s.substr(l1 - 1, r1 - l1 + 1);
//		ans2 = q.substr(l2 - 1, r2 - l2 + 1);
//		if(ans1 == ans2)
//		{
//			cout << "ovo" << endl;
//		}
//		else if(ans1 < ans2)
//			cout << "yifusuyi" << endl;
//		else
//			cout << "erfusuer" << endl;
//	}
//	return 0;
//}


//			1.2.2 测试数据组数未知  



//练习1：多组输入a+b 

//#include <iostream>
//using namespace std;
//int a, b;
//int main()
//{
//    while (cin >> a >> b)
//    {
//        cout << a + b << endl;
//    }
//    return 0;
//}



//练习2：数字三角形打印 


//#include <iostream>
//using namespace std;
//int main()
//{
//    int n = 0;
//    while(cin >> n)
//    {
//        for(int i = 1; i <= n; i++)
//        {
//            for(int j = 1; j <= i; j++)
//                cout << j << ' ';;
//            cout << endl; 
//        }
//    }
// return 0;
//}


//练习3：定位查找  



//#include <iostream>
//using namespace std;
//
//const int N = 25;
//int arr[N];
//int n, m;
//int main()
//{
//	int i = 0;
//	while(cin >> n)
//	{
//		//存放数组 
//		for(i = 0; i < n; i++)
//		{
//			cin >>  arr[i];
//		}
//		//输入m
//		cin >> m;
//		 for(i = 0; i < n; i++)
//		{
//			if(arr[i] == m)
//			{
//				cout << i << endl;
//				break;
//			 } 
//		}
//		//找不到
//		if(i == n)
//			cout << "No" << endl; 
//	}
//	return 0;
//}



//		1.2.3 特殊值结束测试数据  


//练习1：字符统计 



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char ch;
//	int let = 0;
//	int dig = 0;
//	int oth = 0;
//	while((ch = getchar()) != '?')
//	{
//		if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//		{
//			let++;
//		}
//		else if(ch >= '0' && ch <= '9')
//		{
//			dig++;
//		}
//		else
//		{
//			oth++;
//		}
//	}
//	cout << "Letters=" << let << endl;
//	cout << "Digits=" << dig << endl;
//	cout << "Others=" << oth << endl;
//	
//	return 0;
//}

//也可以拓展学习： isalpha 、 isdigit 函数。

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char ch;
//	int let = 0;
//	int dig = 0;
//	int oth = 0;
//	while((ch = getchar()) != '?')
//	{
//		if(isalpha(ch))
//		{
//			let++;
//		}
//		else if(isdigit(ch))
//		{
//			dig++;
//		}
//		else
//		{
//			oth++;
//		}
//	}
//	cout << "Letters=" << let << endl;
//	cout << "Digits=" << dig << endl;
//	cout << "Others=" << oth << endl;
//	
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
// 	string s;
// 	int Letters = 0;
// 	int Digits = 0;
// 	int Others = 0;
// 	getline(cin, s);
// 	s.pop_back(); //去掉?
// 	for (auto ch : s)
// 	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
// 			Letters++;
// 		else if (ch >= '0' && ch <= '9')
// 			Digits++;
// 		else
// 			Others++;
// 	}
// 	cout << "Letters=" << Letters << endl;
// 	cout << "Digits=" << Digits << endl;
// 	cout << "Others=" << Others << endl;
// 	return 0;
//}



//练习2：多组数据a+b III  

//#include <iostream>
//using namespace std;
//int main()
//{
// 	int a = 0, b = 0;
// 	while (cin >> a >> b, a && b)
// 	{
// 		cout << a + b << endl;
// 	}
// 	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
// 	int a = 0, b = 0;
// 	while (cin >> a >> b)
// 	{
// 		if(a = 0 && b = 0)
// 			break;
// 		cout << a + b << endl;
// 	}
// 	return 0;
//}



//2. 输入时特殊技巧 

//		2.1 技巧1：含空格字符串的特殊处理方式

//练习： 统计数字字符个数  

//解法1：读取整个带空格的字符串分析

//#include <iostream>
//using namespace std;
//#include <string>
//
//int main()
//{
//	string s;
//	int cnt = 0;
//	getline(cin, s);
//	for(auto ch: s)
//	{
//		if(isdigit(ch))
//			cnt++;
//	}
//	cout << cnt << endl;
//	return 0;
//}

		//2.2 技巧2：数字的特殊处理?式


//练习： 小乐乐改数字

//#include <iostream>
//using namespace std;
//#include <string>
//#include <cmath>
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	int i = 0;
//	cin >> n;
//	while(n)
//	{
//		if(n % 10 % 2)
//			ret += 1 * pow(10, i);
//		else
//			ret += 0 * pow(10, i);
//		n /= 10;
//		i++;
//	}
//	cout << ret << endl;
//	return 0;
//}


// 解法2：当做字符串处理 

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
// 	string s;
// 	cin >> s;
// 	for (int i = 0; i < s.size(); i++) // 数字字符与对应的数的奇偶?致
// 	{
// 		if (s[i] % 2)
// 		{
// 			s[i] = '1';
// 		}
// 		else
// 		{
// 			s[i] = '0';
// 		}
// 	}
// 	cout << stoi(s) << endl; // 转换成数字输出
// 	return 0;
//}




//3. scanf/printf 和 cin/cout的对比  

//		3.1 格式控制差异 


//#include <cstdio>
//#include <iostream>
//
//using namespace std;
//int main()
//{
// 	float a = 3.50;
// 	double d = 16.50;
// 
//	cout << "cout: " <<a << " "<< d <<endl;
// 	printf("printf: %f %lf\n", a, d);
// 	return 0;
//}



//			3.2 性能差异

//					3.2.1 案例演示  


//案例1：数字游戏 





