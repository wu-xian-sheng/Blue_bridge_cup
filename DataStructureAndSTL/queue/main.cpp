//#include <iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int h, t; // ��ͷָ�룬��βָ��
//int q[N]; // ����
//
//
//// ���
//void push(int x)
//{
// 	q[++t] = x;
//}
//
////����
//void pop()
//{
//	h++;
// } 
//
//
//
////��ѯ��ͷԪ�� 
//int front()
//{
//	return q[h + 1];
// } 
//
////��ѯ��βԪ��
//int  back()
//{
//	return q[t];
//}
//
//// �����Ƿ�Ϊ��
//bool empty()
//{
// 	return t == h;
//}
//
//// ���еĴ�С 
//int size()
//{
// 	return t - h;
//}
//
//
////��ӡ 
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
//	// ����
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


//queue���Դ���

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


























