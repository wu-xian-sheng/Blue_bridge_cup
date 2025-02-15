
//# 1  [询问学号]
//#include <iostream>
//#include <vector>
//using namespace std;
//const int N = 2e6 + 10;
//int main()
//{
//	int n,m;
//	vector<int> a(N);
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	while(m--)
//	{
//		int x;
//		cin >> x;
//		cout << a[x] << endl;
//		
//	}	
//	return 0;
//}

//2.寄包柜
#include <iostream>
#include <vector>
using namespace std;
int n,q;
const int N = 1e5 + 10;
vector<int> a[N];//创建N个顺序表 

int main()
{
	cin >> n >> q;
	while(q--)
	{
		int op, i, j, k;
		cin >> op >> i >> j;
		if(op == 1)//存放 
		{
			if(a[i].size() <= j)
			{
				a[i].resize(j+1);
			}
			cin >> k;
			a[i][j] = k;
		}
		else//查看 
		{
			cout << a[i][j] << endl; 
		}
	 }
	return 0;
}



