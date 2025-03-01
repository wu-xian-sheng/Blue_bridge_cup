

//堆的模拟实现

////向上调整算法 
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
////向下调整算法
//
//void down(int parent)
//{
//	int child = parent * 2;
//	//如果存在孩子
//	while(child <= n) 
//	{
//		//如果又右孩子节点存在而且比左孩子大，那么让child指向右孩子节点 
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
//	// 把该元素放在最后
//	heap[++n] = x;
//	// 执行一次向上调整算法
//	up(n);
//}
//
//
//void pop()
//{
//	// 把第1个元素与最后1个元素交换
//	swap(heap[1], heap[n]);
//	n--;
//	// 执行一次向下调整算法
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
//	//放入
//	for(int i = 0; i < 10; i++) 
//	{
//		push(a[i]);
//	}
//	
//	//升序
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
 	// // 以 b 为基准，定义?根堆
 	// bool operator < (const node& x) const
 	// {
 	// return b < x.b;
 	// }
 	// 以 b 为基准，定义?根堆
 	bool operator < (const node& x) const
 	{
 		return b > x.b;
 	}
};



void test1()
{
	
	//大根堆
	priority_queue<int> heap1; //默认是一个大根堆 
	//priority_queue<数据类型，存数据的结构，数据之间比较方式>  
	priority_queue <int, vector<int>, less<int>> heap2;
	
	//小根堆
	priority_queue <int, vector<int>, greater<int>> heap3;
	
	for(int i = 0;i < 10; i++)
	{
		heap2.push(a[i]);
		heap3.push(a[i]);
	}
	
	cout << "大根堆：";
	while(heap2.size())
	{
		cout << heap2.top() << " ";
		heap2.pop();
	} 
	 cout << endl;
	 
	 cout << "小根堆："; 
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

//	priority_queue<int> heap; //默认是一个大根堆 
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













