

//�ѵ�ģ��ʵ��

////���ϵ����㷨 
//
//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int n;
//int heap[N];
//
//void up(int child)
//{
//	int parent = child/2;
//	while(parent >= 1 && heap[child] > heap[parent])
//	{
//		swap(heap[child], heap[parent]);
//		
//		child = parent;
//		parent = child/2;
//	}
//	
//}
//
////���µ����㷨
//
//void down(int parent)
//{
//	int child = parent * 2;
//	//������ں���
//	while(child <= n) 
//	{
//		//������Һ��ӽڵ���ڶ��ұ����Ӵ���ô��childָ���Һ��ӽڵ� 
//		if(child + 1 <= n && heap[child] < heap[child + 1]) child++;
//		if(heap[parent] >= heap[child]) return;
//		swap(heap[parent] , heap[child]);
//		parent = child;
//		child = parent * 2;
//	}
//	 
//} 
//
//void push(int x)
//{
//	// �Ѹ�Ԫ�ط������
//	heap[++n] = x;
//	// ִ��һ�����ϵ����㷨
//	up(n);
//}
//
//
//void pop()
//{
//	// �ѵ�1��Ԫ�������1��Ԫ�ؽ���
//	swap(heap[1], heap[n]);
//	n--;
//	// ִ��һ�����µ����㷨
//	down(1);
//} 
//
//int top()
//{
//	return heap[1];
//}
//
//int size()
//{
//	return n;
//}
//
//int main()
//{
//	int a[10] = {1, 41, 23, 10, 11, 2, -1, 99, 14, 0};
//	
//	//����
//	for(int i = 0; i < 10; i++) 
//	{
//		push(a[i]);
//	}
//	
//	//����
//	while(size())
//	{
//		cout << top() << endl;
//		pop();
//	}
//	return 0;
//}



#include <iostream>
using namespace std;
#include <queue>

int a[10] = {1, 41, 23, 10, 11, 2, -1, 99, 14, 0};

struct node
{
 	int a, b, c;
 	// // �� b Ϊ��׼������?����
 	// bool operator < (const node& x) const
 	// {
 	// return b < x.b;
 	// }
 	// �� b Ϊ��׼������?����
 	bool operator < (const node& x) const
 	{
 		return b > x.b;
 	}
};



void test1()
{
	
	//�����
	priority_queue<int> heap1; //Ĭ����һ������� 
	//priority_queue<�������ͣ������ݵĽṹ������֮��ȽϷ�ʽ>  
	priority_queue <int, vector<int>, less<int>> heap2;
	
	//С����
	priority_queue <int, vector<int>, greater<int>> heap3;
	
	for(int i = 0;i < 10; i++)
	{
		heap2.push(a[i]);
		heap3.push(a[i]);
	}
	
	cout << "����ѣ�";
	while(heap2.size())
	{
		cout << heap2.top() << " ";
		heap2.pop();
	} 
	 cout << endl;
	 
	 cout << "С���ѣ�"; 
	 while(heap3.size())
	{
	 	cout << heap3.top() << " ";
	 	heap3.pop();
	}
	 
}

void test2()
{
	priority_queue<node> heap;
 	for(int i = 1; i <= 10; i++)
 	{
 		heap.push({-i, i + 1, i + 2});
 	}
 	while(heap.size())
 	{
 		node t = heap.top();
 		heap.pop();
 		cout << t.a << " " << t.b << " " << t.c << endl;
 	}
}


int main()
{
//	test1();
	test2();

//	priority_queue<int> heap; //Ĭ����һ������� 
//	
//	for(int i = 0;i < 10; i++)
//	{
//		heap.push(a[i]);
//	}
//	while(heap.size())
//	{
//		cout << heap.top() << endl; 
//		heap.pop();
//	}
	return 0;
}













