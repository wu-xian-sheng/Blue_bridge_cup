

//## �߾��ȼӷ�

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int N = 1e5 + 10;
string x, y;
int a[N], b[N], c[N];
int la, lb, lc;


void add(int a[], int b[], int c[])
{
	for(int i = 0; i < lc; i++)
	{
		c[i] += a[i] + b[i];//��Ӧλ��ӣ��ټ��Ͻ�λ 
		c[i + 1] = c[i] / 10; //��λ 
		c[i] = c[i] % 10; //�������� 
	} 
	if(c[lc]) lc++;
}



int main()
{
	cin >> x >> y;
	la = x.size();
	lb = y.size();
	lc = max(la, lb);
	
	for(int i = 0; i < la;i++) a[la - 1 - i] = x[i] - '0';
	for(int i = 0; i < lb;i++) b[lb - 1 - i] = y[i] - '0';
	
	//ģ��ӷ�
	add(a, b, c);
	
	for(int i = lc - 1;i >= 0; i--) cout << c[i] ;
	
	return 0;
}
