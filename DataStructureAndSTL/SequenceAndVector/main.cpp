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
//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//
//// 将顺序表的创建以及增删查改封装在?个类中
//
//class SqList 
//{
//  int a[N];
//  int n;
//
//public:
//  // 构造函数，初始化
//  SqList() 
//  { 
//      n = 0; 
//   }
//  // 尾插
//  void push_back(int x) 
//  { 
//      a[++n] = x; 
//   }
//  // 尾删
//  void pop_back() 
//  { 
//      n--; 
//   }
//  // 打印
//  void print() 
//  {
//    for (int i = 1; i <= n; i++) 
//    {
//      cout << a[i] << " ";
//    }
//    cout << endl;
//  }
//};
//
//
//int main() 
//{
//  SqList s1, s2; // 创建了两个顺序表
//  for (int i = 1; i <= 5; i++) 
//  {
//    // 直接调? s1 和 s2 ??的 push_back
//    s1.push_back(i);
//    s2.push_back(i * 2);
//  }
//  s1.print();
//  s2.print();
//  for (int i = 1; i <= 2; i++) 
//  {
//    s1.pop_back();
//    s2.pop_back();
//  }
//  s1.print();
//  s2.print();
//  return 0;
//}


//动态顺序表 - vector

//接下来就重点学习 vector 的使用





#include <vector>
#include <iostream>
using namespace std;
const int N = 20;

struct node
{
	int a, b, c;
};

//创建 vector
void init()
{
	
	vector<int> a1;// 创建一个空的可变长数组
	vector<int> a2(N);// 指定好了一个空间，大小为 N
	vector<int> a3(N,10);//创建一个大小为 N 的 vector，并且里面的所有元素都是 10
	vector<int> a4 = {1, 2, 3, 4, 5}; //使用列表初始化，创建一个vector
	
	// <> 里面可以放任意的类型，这就是模板的作用，也是模板强大的地方
	// 这样，vector 里面就可以放我们接触过的任意数据类型，甚至是 STL
	
	vector<string> a5; // 放字符串
	vector<node> a6; // 放一个结构体
	vector<vector<int>> a7;  // 甚至可以放一个自己，当成一个二维数组来使用。并且每一维都是可变的
	
	vector<int> a8[N]; // 创建 N 个 vector

}

//size / empty
void test_size()
{
	// 创建一个一维数组
 	vector<int> a1(6, 8);
 	int s = a1.size();//等于6 
 	cout << s << endl; 
}

void test_empty()
{
	vector<int> a1;
	vector<int> a2(3);
	cout << a1.empty() << endl; //1
	cout << a2.empty() << endl; //0
 } 

void print(vector<int>& a)
{
	for(int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

//begin / end
void test_it()
{
 	vector<int> a(10, 1);
 	// 迭代器的类型是 vector<int>::iterator，但是一般使用 auto 简化
 	for(auto it = a.begin(); it != a.end(); it++)
 	{
 		cout << *it << " ";
 	}
 	cout << endl << endl;
 	// 使用语法糖 - 范围 for 遍历
 	for(auto x : a)
 	{
 		cout << x << " ";
 	}
 	cout << endl << endl;

}

//push_back / pop_back
// 4. 添加和删除元素
void test_io()
{
 	vector<int> a;
 	// 尾插 1 2 3 4 5
 	a.push_back(1);
 	a.push_back(2);
 	a.push_back(3);
 	a.push_back(4);
 	a.push_back(5);
 	print(a);
 	// 尾删 3 次
 	a.pop_back();
 	a.pop_back();
 	a.pop_back();
 	print(a);
}


// 5. 首元素和尾元素
void test_fb()
{
 	vector<int> a(5);
 	for(int i = 0; i < 5; i++)
 	{
 		a[i] = i + 1;
 	}
 	cout << a.front() << " " << a.back() << endl;
}


// 6. resize
void test_resize()
{
 	vector<int> a(5, 1);
 	a.resize(10); // 扩大 
 	print(a);
 	a.resize(3); // 缩小 
 	print(a);
}


void test_clear()
{
	
	vector<int> a(5,1);
	cout << a.size() << endl;
	a.clear();
	cout << a.size() << endl;
}


int main()
{
//	vector<int> a1(5, 10);// 创建一个空的可变长数组
//	init();
//	test_size();
//	test_empty();
//	print(a1);
//	test_it(); 
//	test_io();
//	test_fb();
//	test_resize(); 
	test_clear();
	return 0;
}



























