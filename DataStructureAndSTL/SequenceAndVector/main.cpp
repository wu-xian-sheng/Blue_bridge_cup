#include <iostream>
using namespace std;


//创建
const int N = 1e6 + 10; // 定义静态数组的最大长度
int a[N], n; // 直接创建一个大数组来实现顺序表， n 表示当前有多少个元素； 

//尾插
void push_back(int x)
{
	a[++n] = x;
 } 

//头插
void pop_front(int x)
{
	// 要把所有的元素全部右移一位，然后再放到头部位置
	for(int i = n; i >= 1; i--)
	{
		a[n + 1] = a[n];
	}
	a[1] = x; // 把 x 放在第一位
	n++; 
 } 


int main()
{
	
	return 0;
}
