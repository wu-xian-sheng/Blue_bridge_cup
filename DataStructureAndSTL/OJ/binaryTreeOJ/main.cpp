
//�¶�����

//#include <iostream>
//using namespace std;
//const int N = 300;
//char l[N], r[N];
//int n;
//char root;
//
//void dfs(char root)
//{
//	if(root == '*') return;
//	cout << root;
//	dfs(l[root]);
//	dfs(r[root]);
//} 
//
//int main()
//{
//	cin >> n;
//	
//	//�����¼���ڵ� 
//	cin >> root;
//	cin >> l[root] >> r[root];
//	
//	//���������ڵ� 
//	for(int i = 1; i < n; i++)
//	{
//		char t;
//		cin >> t;
//		cin >> l[t] >> r[t];
//	}	
//	
//	//������ȱ��� 
//	dfs(root);
//	return 0;
// } 


////B3642 �������ı���
//
//#include <iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int l[N], r[N];
//int n;
//
//void dfs1(int u)
//{
//	if(!u) return;
//	cout << u << " "; 
//	dfs1(l[u]);
//	dfs1(r[u]);
//}
//
//void dfs2(int u)
//{
//	if(!u) return;
//	dfs2(l[u]);
//	cout << u <<" ";
//	dfs2(r[u]); 
//}
//
//void dfs3(int u)
//{
//	if(!u) return;
//	dfs3(l[u]);
//	dfs3(r[u]);
//	cout << u <<" ";
//}
//
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

////P4913 �����16.��3�����������
//
//#include <iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int l[N], r[N];
//int n;
//
//int dfs(int root)
//{
//	int a, b;
//	if(!root) return 0;
//	a = dfs(l[root]);
//	b = dfs(r[root]);
//	return max(a, b) + 1;
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
//	int ret = dfs(1);
//	cout << ret << endl;
//	
//	return 0;
//}


////P1030 [NOIP 2001 �ռ���] ����������
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//string a, b;
//
//
//void dfs(int r1, int l1, int r2, int l2)
//{
//	if(r1 > l1) return;
//	cout << b[l2];
//	
//	int p = r1;
//	while(a[p] != b[l2]) p++;
//	
//	dfs(r1, p-1, r2, r2 + p - r1 - 1);
//	dfs(p + 1, l1, r2 + p - r1, l2 - 1);
//	
//}
//
//int main()
//{
//	cin >> a >> b;
//	
//	dfs(0, a.size() - 1, 0, b.size() - 1);
//	return 0;
//}


//P1827 [USACO3.4] ����Ѫͳ American Heritage

//#include <iostream>
//#include <string>
//using namespace std;
//
//string a, b;
//
//void dfs(int r1, int l1, int r2, int l2)
//{
//	if(r1 > l1) return;
//	
//	
//	int p = r1;
//	while(a[p] != b[r2]) p++;
//	
//	dfs(r1, p - 1, r2 + 1, r2 + p - r1);
//	dfs(p + 1, l1, r2 + p - r1 + 1, l2);
//	cout << b[r2];
//	
//}
//
//int main()
//{
//	cin >> a >> b;
//	
//	dfs(0, a.size() - 1, 0, b.size() - 1);
//	return 0;
//}




//P3884 [JLOI2009] ����������


#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int N = 1e5 + 10;
int n;
vector<int> edges[N];//���� 

int fa[N], dist[N]; 

//���
int dfs(int root)
{
	if(!root) return 0;
	int ret = 0;
	for(auto v: edges[root])
	{
		ret = max(ret, dfs(v));
	}
	return ret + 1;
} 

int bfs()
{
	queue<int> q;
	q.push(1);
	int ret = 0;
	
	while(q.size())
	{
		int sz = q.size();
		ret = max(ret, sz);
		
		while(sz--)
		{
			int u = q.front();
			q.pop();
			
			for(auto v: edges[u])
			{
				q.push(v);
			}
		}
	}
	
	return ret;
	
}
 
int main()
{
	cin >> n;
	for(int i =  1; i < n; i++)
	{
		//u->v;
		int u, v; cin >> u >> v;
		edges[u].push_back(v);
		fa[v] = u;
	 } 
	 
	 //��� 
	 cout << dfs(1) << endl;
	 
	 //���
	 cout << bfs() << endl;
	 
	 //��x��y�ľ���
	 int x, y; cin >> x >> y;
	 //x�����ڵ� 
	 while(x != 1)
	 {
	 	dist[fa[x]] = dist[x] + 1;
	 	x = fa[x];
	 }
	 
	 //y��ָ��λ��
	 int len = 0;
	 while(y != 1 && dist[y] == 0) 
	 {
	 	len++;
	 	y = fa[y];
	 }
	 
	 cout << dist[y] * 2 + len << endl;
	 	 
	return 0;
 } 


















































 
