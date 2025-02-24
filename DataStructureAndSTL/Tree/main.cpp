//���ӱ�ʾ�� 


//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n;
//vector<int> edge[N];
//
//
//
//
//int main()
//{
//	cin >> n;
//	while(n--)
//	{
//		int a, b;
//		cin >> a >> b;
//		//a��b֮����һ���� 
//		edge[a].push(b);
//		edge[b].push(a);
//	}
//	return 0;
// } 
 
 
// ʵ�ַ�ʽ2����ʽǰ����

//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int h[N], e[N*2], ne[N*2];
//int id, n;
//
////bͷ�嵽a 
//void add(int a, int b)
//{
//	id++;
//	e[id] = b;
//	ne[id] = h[a];
//	h[a] = id;
//}
//
//int main()
//{
//	cin >> n;
//	while(n--)
//	{
//		int a, b;
//		cin >> a >> b;
//		//a��b֮����һ����
//		add(a, b);
//		add(b, a);
//	}
//	return 0;
//}

//������ȱ��� - DFS

//## 2.2 ʵ�ַ�ʽ1���� vector ����ʵ�� 


//#include <iostream>
//using namespace std;
//#include <vector>
//
//const int N = 1e5 + 10;
//
//int n;
//vector<int> edge[N];
//bool st[N];  //������Ľڵ��Ƿ��Ѿ�������
//
//void dfs(int u)
//{
//	cout << u << " ";
//	st[u] = true;
//	
//	for(auto v: edge[u])
//	{
//		if(!st[v]) dfs(v);
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 0; i < n-1; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		edge[a].push_back(b);
//		edge[b].push_back(a);
//	}
//	
//	dfs(1);
//	return 0; 
//}
 




//## 2.2 ʵ�ַ�ʽ2����ʽ��ǰ�Ǵ洢

//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int h[N], e[2 * N], ne[2*N];
//int id, n;
//bool st[N];
//
//void add(int a, int b)
//{
//	id++;
//	e[id] = b;
//	ne[id] = h[a];
//	h[a] = id;
// } 
// 
// void dfs(int u)
// {
// 	cout << u << " ";
// 	st[u] = true;
// 	
// 	for(int i = h[u]; i ; i = ne[i])
// 	{
// 		int v = e[i];
// 		if(!st[v]) dfs(v);
//	 }
// 	
// }
// 
//
//int main()
//{
//	cin >> n;
//	for(int i = 0; i < n - 1; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		
//		add(a, b);
//		add(b, a);
//	}
//	
//	dfs(1);
//	return 0;
//}



//## 3.2 ������ȱ��� - BFS

////### 3.2.1 ��vector ����洢
//
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//const int N = 1e5 + 10;
//vector<int> edge[N];
//int n;
//bool st[N];
//
//void bfs()
//{
//	queue <int> q;
//	q.push(1);
//	st[1] = true;
//	
//	
//	while(q.size())
//	{
//		auto u = q.front();
//		q.pop();
//		
//		cout << u << " ";
//		
//		//�������
//		for(auto v : edge[u])
//		{
//			if(!st[v])
//			{
//				q.push(v);
//				st[v] = true;
//			}
//		 } 
//	}
//} 
//
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i < n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		edge[a].push_back(b);
//		edge[b].push_back(a); 
//	}
//	
//	bfs();
//	return 0;
//}



//### 3.2.2 ��ʽ��ǰ�Ǵ洢

//#include <iostream>
//using namespace std;
//#include <queue>
//int n;
//const int N = 1e5 + 10;
//int h[N], e[2*N], ne[2*N];
//int id;
//bool st[N];
//
//
//void add(int a, int b)
//{
//	id++;
//	e[id] = b;
//	
//	ne[id] = h[a];
//	h[a] = id;
//}
//
//void bfs()
//{
//	queue<int> q;
//	q.push(1);
//	st[1] = true;
//	
//	while(q.size())
//	{
//		auto u = q.front();
//		q.pop();
//		cout << u << " ";
//		
//		for(int i = h[u]; i; i = ne[i])
//		{
//			int v = e[i];
//			if(!st[v])
//			{
//				q.push(v);
//				st[v] = true;
//			}
//		}
//		
//	}
//		
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i < n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		add(a, b);
//		add(b, a);
//	}
//	
//	bfs();
//	return 0;
//}


#include <iostream>
#include <queue>
using namespace std;
const int N = 1e5 + 10; 

int id, n;
int h[N], e[2*N], ne[2*N];
bool st[N];

void add(int a, int b)
{
	id++;
	e[id] = b;
	ne[id] = h[a];
	h[a] = id;
}

void bfs()
{
	queue<int> q;
	q.push(1);
	st[1] = true;
	
	while(q.size())
	{
		auto v = q.front();
		q.pop();
		cout << v << " ";
		
		//�ֽڵ���Ӳ���� 
		for(int i = h[v]; i; i = ne[i])
		{
			auto u = e[i];
			if(!st[u])
			{
				q.push(u);
				st[u] = true;
			}
		}
	}
	
}

int main()
{
	cin >> n;
	for(int i = 1; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
		add(b, a);
	}
	bfs();
	return 0;
}











