//孩子表示法 


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
//		//a和b之间有一条边 
//		edge[a].push(b);
//		edge[b].push(a);
//	}
//	return 0;
// } 
 
 
// 实现方式2：链式前向星

#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int h[N], e[N*2], ne[N*2];
int id, n;

//b头插到a 
void add(int a, int b)
{
	id++;
	e[id] = b;
	ne[id] = h[a];
	h[a] = id;
}

int main()
{
	cin >> n;
	while(n--)
	{
		int a, b;
		cin >> a >> b;
		//a和b之间有一条边
		add(a, b);
		add(b, a);
	}
	return 0;
}























