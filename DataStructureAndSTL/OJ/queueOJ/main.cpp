//B3616 【模板】队列

//#include <iostream>
//using namespace std;
//
//const int N = 1e4 + 10;
//int h, t;
//int q[N];
//
//int main()
//{
//	int p;
//	cin >> p;
//	while(p--)
//	{
//		int op;
//		cin >> op;
//		if(op == 1)
//		{
//			int x;
//			cin >> x;
//			q[++t] = x;
//		}
//		else if(op == 2)
//		{
//			if(t == h)
//			{
//				cout << "ERR_CANNOT_POP" << endl;
//			}
//			else
//			{
//				h++;
//			}
//				
//			
//		}
//		else if(op == 3)
//		{
//			if(t == h)
//				cout << "ERR_CANNOT_QUERY" << endl;
//			else
//				cout << q[h + 1] << endl;
//			
//		}
//		else if(op == 4)
//		{
//			cout << t - h << endl;
//		}
//	}
//	return 0;
//}

//P1540 [NOIP 2010 提高组] 机器翻译

//#include <iostream>
//#include <queue>
//using namespace std;
//
//const int N = 1010;
//int m, n;
//queue<int> q;//内存 
//bool st[N];
//
//int main()
//{
//	
//
//	cin >> m >> n;
//	int cnt = 0;
//	for(int i = 0; i < n; i++)
//	{
//		int x; cin >> x;
//		if(st[x]) continue;
//		cnt++;
//		q.push(x);
//		st[x] = true;
//		if(q.size() > m) 
//		{
//			st[q.front()] = false;
//			q.pop();
//		}
//	}
//	cout << cnt << endl;
//	
//	return 0;
//}


//P2058 [NOIP 2016 普及组] 海港

#include <iostream>
#include <queue>
using namespace std;

typedef pair<int, int> PII;

const int N = 1e5 + 10;
queue<PII> q;
int n;
int cnt[N];//i国家一共有多少人 
int kinds;//统计国家种类 

int main()
{
	cin >> n;
	while(n--)
	{
		int t,k;
		cin >> t >> k;
		for(int i = 0; i < k; i++)
		{
			int g;
			cin >> g;
			q.push({t, g});
			if(cnt[g]++ == 0) 
			{
				kinds++;
			}
		}
		
		//让队列合法 
		while(q.size() && q.back().first - q.front().first >= 86400)
		{
			PII tem = q.front();
			q.pop();
			if(cnt[tem.second]-- == 1)
			{
				kinds--;
			}
		}
		
		cout << kinds << endl;
	} 
	return 0;
}































