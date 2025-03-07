

//ģ��

//P1067 [NOIP 2009 �ռ���] ����ʽ���

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int n; cin >> n;
//	for(int i = n; i >= 0; i--)
//	{
//		int a; cin >> a;
//		
//		if(a == 0) continue;
//		
//		//1.���� 
//		if(a < 0) cout << '-';
//		else 
//		{
//			if(i != n) cout << '+'; 
//		}
//		
//		//2.����
//		a = abs(a);
//		if(a != 1 || (a == 1 && i == 0)) cout << a;
//		
//		//3.����
//		if(i == 0) continue;
//		else if(i == 1) cout << 'x';
//		else cout << "x^" << i;
//	}
//	return 0;
//}



//P5731 �����5.ϰ6�����η���


//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//const int N = 15;
//
//int dx[] = {0, 1, 0, -1};
//int dy[] = {1, 0, -1, 0};
//
//int arr[N][N];
//
//int main()
//{
//	int n; cin >> n;
//	int x = 1, y = 1; //��ʼλ�� 
//	int cnt = 1; //Ҫ����� 
//	int pos = 0; //��ǰ�ķ���
//	
//	while(cnt <= n*n)
//	{
//		arr[x][y] = cnt;
//		
//		//������һ��λ��
//		int a = x + dx[pos];
//		int b = y + dy[pos];
//		
//		if(a > n|| b > n || a < 1|| b < 1 || arr[a][b])
//		{
//			//��������
//			pos = (pos + 1) % 4;
//			a = x + dx[pos];
//			b = y + dy[pos]; 
//		}
//		
//		x = a; y = b;
//		cnt++;
//	} 
//	
//	
//	//���
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= n;j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	 } 
//	
//	return 0;
//}



//P1098 [NOIP 2007 �����] �ַ�����չ��

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s;
string ret;0
int p1, p2, p3;
int n;


bool islet(char ch)
{
	return ch >= 'a' && ch <='z';
}

bool isdis(char ch)
{
	return ch >= '0' && ch <='9';
}

void add(char a, char b)
{
	string t = "";
	//�����м���ַ�
	for(char ch = a + 1; ch < b ; ch++)
	{
		char te = ch;
		if(p1 == 1);
		else if(p1 == 2 && islet(te)) te -= 32;
		else if(p1 == 3) te = '*';
		for(int i = 0; i < p2; i++) t += te;
	}
	
	
	if(p3 == 2) reverse(t.begin(), t.end());
	ret += t;
}


int main()
{
	cin >> p1 >> p2 >> p3;
	cin >> s;
	n = s.size();
	
	for(int i = 0; i < n; i++)
	{
		char ch = s[i];
		
		//����Ҫ���� 
		if(ch != '-'||i == 0 || i == n - 1) ret += ch;
		
		//����p2 
		else
		{
			char left = s[i - 1], right = s[i + 1];
			//�ж��Ƿ�չ��
			if(islet(left)&&islet(right) && left < right ||
			isdis(left) && isdis(right) && left < right)
			{
				//չ��
				add(left, right);
			 } 
			 else
			 {
			 	ret += ch;
			 }
		}
		
		
	}
	
	cout << ret << endl;
	return 0;
}



















