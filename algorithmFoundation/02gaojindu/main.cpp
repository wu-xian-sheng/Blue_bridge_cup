

//## �߾��ȼӷ�

//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//const int N = 1e5 + 10;
//string x, y;
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//
//void add(int a[], int b[], int c[])
//{
//	for(int i = 0; i < lc; i++)
//	{
//		c[i] += a[i] + b[i];//��Ӧλ��ӣ��ټ��Ͻ�λ 
//		c[i + 1] = c[i] / 10; //��λ 
//		c[i] = c[i] % 10; //�������� 
//	} 
//	if(c[lc]) lc++;
//}
//
//
//
//int main()
//{
//	cin >> x >> y;
//	la = x.size();
//	lb = y.size();
//	lc = max(la, lb);
//	
//	for(int i = 0; i < la;i++) a[la - 1 - i] = x[i] - '0';
//	for(int i = 0; i < lb;i++) b[lb - 1 - i] = y[i] - '0';
//	
//	//ģ��ӷ�
//	add(a, b, c);
//	
//	for(int i = lc - 1;i >= 0; i--) cout << c[i] ;
//	
//	return 0;
//}



////�߾��ȼ���
//
//#include <iostream>
//using namespace std;
//
//
//const int N = 1e5 + 10;
//
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//
//bool cmp(string& x, string& y)
//{
//	//�ȱȽϳ��� 
//	if(x.size() != y.size()) return x.size() < y.size();
//	
//	//������� ���Ƚ��ֵ� 
//	return x < y;
//}
//
//void sub(int a[], int b[], int c[])
//{
//	for(int i = 0; i < lc; i++)
//	{
//		c[i] += a[i] - b[i];//��Ӧ����������λ
//		
//		if(c[i] < 0) 
//		{
//			c[i + 1] -= 1;//���λ��λ
//			c[i] += 10; //���ܽ�λ 
//		}
//	}
//	
//	//�߽����������ǰ���� 
//	while(c[lc - 1] == 0 && lc > 1) lc--;
// } 
//
//int main()
//{
//	string x, y;
//	cin >> x >> y;
//	
//	//�ȴ�С
//	if(cmp(x,y))
//	{
//		swap(x, y);
//		cout << '-';
//	}
//	la = x.size(); lb = y.size(); lc = max(la, lb);
//	for(int i = 0; i < x.size(); i++) a[la - 1 - i] = x[i] - '0';
//	for(int i = 0; i < y.size(); i++) b[lb - 1 - i] = y[i] - '0';
//	
//	
//	sub(a, b, c);
//	
//	//������
//	for(int i = lc - 1; i >= 0; i--) cout << c[i]; 
//	
//	
//	return 0;
//} 

//�߾��ȳ˷�


//#include <iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//void mul(int a[], int b[], int c[])
//{
//	for(int i = 0; i < la; i++)
//	{
//		for(int j = 0; j < lb; j++)
//		{
//			c[i + j] += a[i] * b[j];
//		}
//	}
//	
//	//�����λ
//	for(int i = 0; i < lc; i++)
//	{
//		c[i + 1] += c[i] / 10;
//		c[i] %= 10;
//	}
//	 
//	while(lc > 1 && c[lc - 1] == 0) lc--;
//	
//}
//
//int main()
//{
//	string x, y;
//	cin >> x >> y;
//	
//	//��� �����������������
//	la = x.size(); lb = y.size(); lc = la + lb; 
//	for(int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//	for(int i = 0; i < lb; i++) b[lb - 1 - i] = y[i] - '0';
//	
//	//ģ��˷�����
//	mul(a, b, c);
//	
//	//���
//	for(int i = lc - 1; i >= 0; i--) cout << c[i];
//	
//	return 0;
//}





//�߾��ȳ���

#include <iostream>
using namespace std;
typedef long long LL;

const int N = 1e6 + 10;
int a[N], c[N];
int b;
int la, lc;

void sub(int a[], int b, int c[])
{
	LL t = 0; //ͳ������ 
	for(int i = la - 1; i >= 0; i--)
	{
		t = t * 10 + a[i];
		c[i] = t / b;
		t %= b;
	}
	
	//����ǰ��0
	while(lc > 1 && c[lc - 1] == 0) lc--; 
}

int main()
{
	string x;
	cin >> x >> b;
	la = x.size();
	lc = la;
	for(int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
	
	sub(a, b, c);
	
	
	for(int i = lc - 1; i >= 0; i--) cout << c[i];
	
	return 0;
} 































