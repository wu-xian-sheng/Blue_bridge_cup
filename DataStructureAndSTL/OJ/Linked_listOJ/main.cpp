//1.排队顺序
//#include <iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int h, n;
//int ne[N];
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> ne[i];
//	}
//	cin >> h;
//	for(int i = h; i; i = ne[i])
//		cout << i << " ";
//	return 0;
//}



//2.单向链表

//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//const int M = 1e6 + 10; 
//int q, op;
//int x, y;
//
//int id, h;
//int e[N], ne[N], mp[M];
//
//void insert(int p, int y)
//{
//	id++;
//	e[id] = y;
//	mp[y] = id; 
//	ne[id] = ne[p];
//	ne[p] = id;
//}
//
//
//int main()
//{
//	cin >> q;
//	//初始化 
//	id++;
//	e[id] = 1;
//	ne[id] = 0;
//	mp[1] = id;
//	
//	while(q--)
//	{
//		cin >> op >> x;
//		int p = mp[x];
//		if(op == 1)
//		{
//			cin >> y;
//			insert(p, y);
//			
//		}
//		else if(op == 2)
//		{
//			int t = ne[mp[x]];
//			cout << e[t] << endl;
//		}
//		else
//		{
//			int p = mp[x];
//			mp[e[ne[p]]] = 0;
//			ne[p] = ne[ne[p]];
//		}	 
//	}
//	return 0;
// } 
 
// 队列安排

//#include <iostream>
//using namespace std;
//int id,h;
//const int N = 1e5 + 10;
//const int M = 1e5 + 10;
//int pre[N], ne[N], e[N], mp[M];
//bool sd[N];
//
//
//void insert_left(int p, int x)
//{
//	id++;
//	e[id] = x; 
//	mp[x] = id;
//	
//	ne[id] = p;
//	pre[id] = pre[p];
//	ne[pre[p]] = id;
//	pre[p] = id;
//}
//
//void insert_right(int p, int x)
//{
//	id++;
//	mp[x] = id;
//	e[id] = x;
//	
//	ne[id] = ne[p];
//	pre[id] = p;
//	pre[ne[p]] = id;
//	ne[p] = id;
//}
//
//int main()
//{
//	//初始化
//	id++;
//	e[id] = 1;
//	mp[1] = id;
//	
//	int q, x, y;
//	cin >> q;
//	
//	 
//	for(int i = 2; i <= q; i++)
//	{
//		cin >> x >> y;
//		int p1 = mp[x];  //找到x的位置
//		if(y == 0)
//		{
//			insert_left(p1, i);
//		}
//		else
//		{
//			insert_right(p1, i);
//		}
//	}
//	int m;
//	cin >> m;
//	int p2, k;
//	while(m--)
//	{
//		
//		cin >> k;
//		if(sd[k])
//			continue;
//		p2 = mp[k];
//		pre[ne[p2]] = pre[p2];
//		ne[pre[p2]] = ne[p2];
//		sd[k] = true;
//	}
//	
//	for(int i = ne[h]; i; i = ne[i])
//		cout << e[i] << " ";
//	 
//	return 0;
//}


//约瑟夫问题
 
#include <iostream>
using namespace std;

int h, id;
const int N = 110; 
int ne[N], pre[N];

int main()
{
	int n, m;
	cin >> n >> m;
	//创建循环链表； 
	for(int i = 1; i <= n; i++)
	{
		ne[i] = i + 1;
	 } 
	 ne[n] = 1;//最后一个节点指向第一个节点1；
	 
	 //模拟
	 int t = n;
	for(int i = 0; i < n; i++)
	{
	  	for(int j = 0; j < m-1; j++)
	   {
	  	t = ne[t]; 
	   }
	   cout << ne[t] << " ";
	   ne[t] = ne[ne[t]];
	} 
	return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
