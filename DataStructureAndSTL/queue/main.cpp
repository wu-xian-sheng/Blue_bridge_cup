//#include <iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int h, t; // 队头指针，队尾指针
//int q[N]; // 队列
//
//
//// 入队
//void push(int x)
//{
// 	q[++t] = x;
//}
//
////出队
//void pop()
//{
//	h++;
// } 
//
//
//
////查询对头元素 
//int front()
//{
//	return q[h + 1];
// } 
//
////查询队尾元素
//int  back()
//{
//	return q[t];
//}
//
//// 队列是否为空
//bool empty()
//{
// 	return t == h;
//}
//
//// 队列的大小 
//int size()
//{
// 	return t - h;
//}
//
//
////打印 
//void print()
//{
//	for(int i = h + 1; i <= t; i++)
//	{
//		cout << q[i] << " ";
//	}
//	cout << endl;
// } 
//
//int main()
//{
//	// 测试
// 	for(int i = 1; i <= 10; i++)
// 	{
// 		push(i);
// 	}
//	print();
//	for(int i = 1; i <= 5; i++)
// 	{
// 		pop();
// 	}
//	print();
//	return 0;
//} 


//queue测试代码

#include <iostream>
#include <queue>
using namespace std;

typedef pair<int, int> PII;
 
 int main()
 {
 	queue<PII> q;
 	
 	for(int i = 1; i <= 10; i++)
 	{
 		q.push({i, i * 10});
	 }
	 
	while(q.size())
	{
		
		auto t = q.front();
		q.pop();
		
		cout << t.first << " " << t.second << endl;
	 } 
 	return 0;
  } 


























