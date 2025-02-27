
//�������Ĵ洢


//��ʽ�洢

//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int l[N], r[N];
//int n;
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	return 0;
//} 


//�������ı��� 

//������ȱ���
 

//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int l[N], r[N];
//int n;
//
//
//void dfs1(int u)
//{
//	if(u == 0) return;
//	cout << u << " ";
//	dfs1(l[u]);
//	dfs1(r[u]);
//}
//
//void dfs2(int u)
//{
//	if(u == 0) return;
//	dfs2(l[u]);
//	cout << u << " ";
//	dfs2(r[u]);
//}
//
//void dfs3(int u)
//{
//	if(u == 0) return;
//	dfs3(l[u]);
//	dfs3(r[u]);
//	cout << u << " ";
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	
//	dfs1(1);
//	cout << endl;
//	dfs2(1);
//	cout << endl;
//	dfs3(1);
//	cout << endl;
//	return 0;
//} 



//������ȱ���

#include <iostream>
#include <queue> 
using namespace std;
const int N = 1e5 + 10;
int l[N], r[N];
int n;

void bfs()
{
	queue<int> q;
	q.push(1);
	
	while(q.size())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		
		if(l[u]) q.push(l[u]);
		if(r[u]) q.push(r[u]);
	 } 
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> l[i] >> r[i];
	}
	
	bfs();
	return 0;
}














