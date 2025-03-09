

//## 高精度加法

//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//const int N = 1e5 + 10;
//string x, y;
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//
//void add(int a[], int b[], int c[])
//{
//	for(int i = 0; i < lc; i++)
//	{
//		c[i] += a[i] + b[i];//对应位相加，再加上进位 
//		c[i + 1] = c[i] / 10; //进位 
//		c[i] = c[i] % 10; //更新余数 
//	} 
//	if(c[lc]) lc++;
//}
//
//
//
//int main()
//{
//	cin >> x >> y;
//	la = x.size();
//	lb = y.size();
//	lc = max(la, lb);
//	
//	for(int i = 0; i < la;i++) a[la - 1 - i] = x[i] - '0';
//	for(int i = 0; i < lb;i++) b[lb - 1 - i] = y[i] - '0';
//	
//	//模拟加法
//	add(a, b, c);
//	
//	for(int i = lc - 1;i >= 0; i--) cout << c[i] ;
//	
//	return 0;
//}



////高精度减法
//
//#include <iostream>
//using namespace std;
//
//
//const int N = 1e5 + 10;
//
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//
//bool cmp(string& x, string& y)
//{
//	//先比较长度 
//	if(x.size() != y.size()) return x.size() < y.size();
//	
//	//长度相等 ，比较字典 
//	return x < y;
//}
//
//void sub(int a[], int b[], int c[])
//{
//	for(int i = 0; i < lc; i++)
//	{
//		c[i] += a[i] - b[i];//对应相减，处理借位
//		
//		if(c[i] < 0) 
//		{
//			c[i + 1] -= 1;//向高位结位
//			c[i] += 10; //接受借位 
//		}
//	}
//	
//	//边界情况，处理前导零 
//	while(c[lc - 1] == 0 && lc > 1) lc--;
// } 
//
//int main()
//{
//	string x, y;
//	cin >> x >> y;
//	
//	//比大小
//	if(cmp(x,y))
//	{
//		swap(x, y);
//		cout << '-';
//	}
//	la = x.size(); lb = y.size(); lc = max(la, lb);
//	for(int i = 0; i < x.size(); i++) a[la - 1 - i] = x[i] - '0';
//	for(int i = 0; i < y.size(); i++) b[lb - 1 - i] = y[i] - '0';
//	
//	
//	sub(a, b, c);
//	
//	//输出结果
//	for(int i = lc - 1; i >= 0; i--) cout << c[i]; 
//	
//	
//	return 0;
//} 

//高精度乘法


//#include <iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//void mul(int a[], int b[], int c[])
//{
//	for(int i = 0; i < la; i++)
//	{
//		for(int j = 0; j < lb; j++)
//		{
//			c[i + j] += a[i] * b[j];
//		}
//	}
//	
//	//处理进位
//	for(int i = 0; i < lc; i++)
//	{
//		c[i + 1] += c[i] / 10;
//		c[i] %= 10;
//	}
//	 
//	while(lc > 1 && c[lc - 1] == 0) lc--;
//	
//}
//
//int main()
//{
//	string x, y;
//	cin >> x >> y;
//	
//	//拆分 放在逆序放在数组中
//	la = x.size(); lb = y.size(); lc = la + lb; 
//	for(int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//	for(int i = 0; i < lb; i++) b[lb - 1 - i] = y[i] - '0';
//	
//	//模拟乘法过程
//	mul(a, b, c);
//	
//	//输出
//	for(int i = lc - 1; i >= 0; i--) cout << c[i];
//	
//	return 0;
//}





//高精度除法

#include <iostream>
using namespace std;
typedef long long LL;

const int N = 1e6 + 10;
int a[N], c[N];
int b;
int la, lc;

void sub(int a[], int b, int c[])
{
	LL t = 0; //统计余数 
	for(int i = la - 1; i >= 0; i--)
	{
		t = t * 10 + a[i];
		c[i] = t / b;
		t %= b;
	}
	
	//处理前导0
	while(lc > 1 && c[lc - 1] == 0) lc--; 
}

int main()
{
	string x;
	cin >> x >> b;
	la = x.size();
	lc = la;
	for(int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
	
	sub(a, b, c);
	
	
	for(int i = lc - 1; i >= 0; i--) cout << c[i];
	
	return 0;
} 































