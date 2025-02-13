//#include <iostream>
//using namespace std;
//
//
////创建
//const int N = 1e6 + 10; // 定义静态数组的最大长度
//int a[N], n; // 直接创建一个大数组来实现顺序表， n 表示当前有多少个元素； 
//
////打印
//void print()
//{
//	for(int i = 1; i <= n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
// } 
//
////尾插
//void push_back(int x)
//{
//	a[++n] = x;
// } 
//
////头插
//void push_front(int x)
//{
//	// 要把所有的元素全部右移一位，然后再放到头部位置
//	for(int i = n; i >= 1; i--)//从后到前往后挪一位 
//	{
//		a[i + 1] = a[i];
//	}
//	a[1] = x; // 把 x 放在第一位
//	n++;  // 不要忘记总个数 +1
//
// } 
//
////任意位置插入
//void insert(int p, int x)
//{
//	for(int i = n; i >= p; i--)
//	{
//		a[i + 1] = a[i];
//	}
//	a[p] = x;
//	n++;
// } 
//
////尾删
//void pop_back()
//{
//   n--;
//}
//
//
////头删
//void pop_front() 
//{
//  // 把所有元素向前移动?位
//  for (int i = 2; i <= n; i++) // 顺序是否能颠倒？
//  {
//    a[i - 1] = a[i];
//  }
//  n--; // 总个数 -1
//}
//
//// 任意位置删除
//void erase(int p) 
//{
//  for (int i = p + 1; i <= n; i++) 
//  {
//    a[i - 1] = a[i];
//  }
//  n--; // 总个数 -1
//}
//
//
////按值查找
//
//// 查找这个数第1次出现的位置，找不到返回 0
//int find(int x) 
//{
//  for (int i = 1; i <= n; i++) 
//  {
//    if (a[i] == x)
//      return i;
//  }
//  return 0;
//}
//
//
//
////按位查找
//
//// 返回 p 位置的数
//int at(int p) 
//{ 
//  return a[p]; 
//}
//
//
////修改元素 
//// 把 p 位置的数修改成 x
//void change(int p, int x)
//{
//   a[p] = x;
//}
//
//
//// 清空顺序表
//void clear()
//{
//   n = 0;
//}
//
//int main()
//{
//	push_back(1);
//	print();
//	push_back(2);
//	print();
//	push_back(3);
//	print();
//	
//	push_front(1);
//	print();
//	
//	insert(2,0);
//	print();
//	
//	pop_back();
//	print();
//	return 0;
//	
//}




//封装静态顺序表
#include <iostream>
using namespace std;
const int N = 1e5 + 10;

// 将顺序表的创建以及增删查改封装在?个类中

class SqList 
{
  int a[N];
  int n;

public:
  // 构造函数，初始化
  SqList() 
  { 
      n = 0; 
   }
  // 尾插
  void push_back(int x) 
  { 
      a[++n] = x; 
   }
  // 尾删
  void pop_back() 
  { 
      n--; 
   }
  // 打印
  void print() 
  {
    for (int i = 1; i <= n; i++) 
    {
      cout << a[i] << " ";
    }
    cout << endl;
  }
};


int main() 
{
  SqList s1, s2; // 创建了两个顺序表
  for (int i = 1; i <= 5; i++) 
  {
    // 直接调? s1 和 s2 ??的 push_back
    s1.push_back(i);
    s2.push_back(i * 2);
  }
  s1.print();
  s2.print();
  for (int i = 1; i <= 2; i++) 
  {
    s1.pop_back();
    s2.pop_back();
  }
  s1.print();
  s2.print();
  return 0;
}
