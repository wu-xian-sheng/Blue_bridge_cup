


//【模版】堆


#include <iostream>
using namespace std;

const int N = 1e6 + 10;
int heap[N];
int n;
int m = 0;

void up(int child)
{
	int parent = child / 2;
	
	while(parent >= 1 && heap[child] < heap[parent])
	{
		swap(heap[child], heap[parent]);
		child = parent;
		parent = child / 2;
	}
}


void down(int parent)
{
	int child = parent * 2;
	//左孩子合法 
	while(child <= m)
	{
		if(child + 1 <= m && heap[child] > heap[child + 1]) child++;
		if(heap[child] >= heap[parent]) return;
		swap(heap[child], heap[parent]);
		parent = child;
		child = parent * 2; 
	}
}

void push(int x)
{
	m++;
	heap[m] = x;
	up(m);
}


void pop()
{
	swap(heap[1], heap[m]);
	m--;
	down(1);
}

int main()
{
	cin >> n;
	while(n--)
	{
		int a, b;
		cin >> a;
		if(a == 1)
		{
			cin >> b;
			push(b);
		}
		
		else if(a == 2)
		{
			cout << heap[1] << endl;
		}
		
		else
		{
			pop();
		}
	}
	return 0;
}
