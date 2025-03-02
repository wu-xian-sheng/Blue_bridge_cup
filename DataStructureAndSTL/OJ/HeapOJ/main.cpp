


////��ģ�桿��
//
//
//#include <iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int heap[N];
//int n;
//int m = 0;
//
//void up(int child)
//{
//	int parent = child / 2;
//	
//	while(parent >= 1 && heap[child] < heap[parent])
//	{
//		swap(heap[child], heap[parent]);
//		child = parent;
//		parent = child / 2;
//	}
//}
//
//
//void down(int parent)
//{
//	int child = parent * 2;
//	//���ӺϷ� 
//	while(child <= m)
//	{
//		if(child + 1 <= m && heap[child] > heap[child + 1]) child++;
//		if(heap[child] >= heap[parent]) return;
//		swap(heap[child], heap[parent]);
//		parent = child;
//		child = parent * 2; 
//	}
//}
//
//void push(int x)
//{
//	m++;
//	heap[m] = x;
//	up(m);
//}
//
//
//void pop()
//{
//	swap(heap[1], heap[m]);
//	m--;
//	down(1);
//}
//
//int main()
//{
//	cin >> n;
//	while(n--)
//	{
//		int a, b;
//		cin >> a;
//		if(a == 1)
//		{
//			cin >> b;
//			push(b);
//		}
//		
//		else if(a == 2)
//		{
//			cout << heap[1] << endl;
//		}
//		
//		else
//		{
//			pop();
//		}
//	}
//	return 0;
//}


//�� k С

//#include <iostream>
//using namespace std;
//#include <queue>
//
//int n, m, k;
//priority_queue<int> heap;
//
//
//int main()
//{
//	cin >> n >> m >> k;
//	for(int i = 1; i <= n; i++)
//	{
//		int a; cin >> a;
//		heap.push(a);
//		if(heap.size() > k)
//		{
//			heap.pop();
//		}
//	}
//	
//	while(m--)
//	{
//		int op; cin >> op;
//		if(op == 1)
//		{
//			int x; cin >> x;
//			heap.push(x);
//			if(heap.size() > k) heap.pop();
//		}
//		else if(op == 2)
//		{
//			if(heap.size() == k) cout << heap.top() << endl;
//			else cout << -1 << endl;
//		}
//	}
//	
//	return 0;
//}

////��2��
//
//#include <iostream>
//using namespace std;
//#include <queue>
//
//priority_queue<int> heap;
//int n, k;
//typedef long long LL;
//LL sum;
//
//int main()
//{
//	cin >> n >> k;
//	for(int i = 1; i <= n; i++)
//	{
//		int x; cin >> x;
//		if(x%2 == 0) heap.push(x);
//		sum += x;
//	}
//	
//	while(k-- && heap.size())
//	{
//		int t = heap.top() / 2;
//		heap.pop();
//		if(t%2 == 0) heap.push(t);
//		sum -= t;
//	}
//	cout << sum << endl;
//	return 0;
//}





//���кϲ�

//#include <iostream>
//#include <queue>
//using namespace std;
//
//const int N = 100100;
//
//typedef long long LL;
//struct node
//{
//	LL f; //����ֵ(�����׼) 
//	LL i; //������� 
//	LL x; //x��ֵ
//	bool operator < (const node& x) const
//	{
//		//С���� 
//		return f > x.f;
//	}
//};
//
//LL a[N], b[N], c[N];
//int n, m;
//
//priority_queue<node> heap;
//
//
//LL calc(int i, int x)
//{
//	return a[i] * x * x + b[i] * x + c[i];
//}
//int main()
//{
//	cin >> n >> m;
//	for(int i = 1; i <= n ;i++)
//	{
//		cin >> a[i] >> b[i] >> c[i];
//	}
//	
//	//��x = 1 ��ֵ������У�
//	for(int i = 1; i <= n; i++)
//	{
//		heap.push({calc(i, 1), i, 1});
//	} 
//	 
//	 //�ó�m��ֵ
//	while(m--)
//	{
//	 	auto t = heap.top(); heap.pop();
//	 	LL f = t.f, i = t.i, x = t.x;
//	 	cout << f << " ";
//	 	
//	 	heap.push({calc(i, x + 1), i , x + 1});
//	} 
//	
//	return 0;
//}


//���кϲ�

#include <iostream>
#include <queue>
using namespace std;

const int N = 1e5 + 10;
int a[N], b[N];

int n;

struct node
{
	int sum;
	int i, j;
	
	bool operator < (const node& x) const
	{
		//С���� 
		return sum > x.sum;
	}	

};

priority_queue<node> heap; 

int main()
{
	cin >> n;
	//���������� 
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) cin >> b[i];
	
	
	//��a[i] + b[1] ����� 
	for(int i = 1; i <= n; i++)
	{
		heap.push({a[i] + b[1], i, 1});
	}
	
	while(n--)
	{
		auto t = heap.top(); heap.pop();
		int sum = t.sum, i = t.i, j = t.j;
		cout << sum << " ";
		heap.push({a[i] + b[j + 1] ,i ,j + 1});
	}
	
	return 0;
}






















