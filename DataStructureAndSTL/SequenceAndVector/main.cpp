#include <iostream>
using namespace std;


//����
const int N = 1e6 + 10; // ���徲̬�������󳤶�
int a[N], n; // ֱ�Ӵ���һ����������ʵ��˳��� n ��ʾ��ǰ�ж��ٸ�Ԫ�أ� 

//β��
void push_back(int x)
{
	a[++n] = x;
 } 

//ͷ��
void pop_front(int x)
{
	// Ҫ�����е�Ԫ��ȫ������һλ��Ȼ���ٷŵ�ͷ��λ��
	for(int i = n; i >= 1; i--)
	{
		a[n + 1] = a[n];
	}
	a[1] = x; // �� x ���ڵ�һλ
	n++; 
 } 


int main()
{
	
	return 0;
}
