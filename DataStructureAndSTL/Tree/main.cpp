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

#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int h[N], e[N*2], ne[N*2];
int id, n;

//bͷ�嵽a 
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
		//a��b֮����һ����
		add(a, b);
		add(b, a);
	}
	return 0;
}























