

//��ͨö��


//�̵�̺ 
//#include <iostream> 
//using namespace std;
//const int N = 1e6 + 10;
//int  
//
//int main()
//{
//	
//	return 0;
//}


////��������
//
//#include <iostream>
//using namespace std;
//
//int x, y;
//int day[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//int main()
//{
//	cin >> x >> y;
//	int ret = 0;
//	for(int i = 1; i <= 12; i++)
//	{
//		for(int j = 1; j <= day[i]; j++)
//		{
//			int k;
//			k = j % 10 * 1000 + j / 10 * 100 + i % 10 * 10 + i / 10;
//			int num = k * 10000 + i * 100 + j;
//			if(x <= num && num <= y) ret++;
//		}
//	}
//	
//	cout << ret << endl;
//	return 0;
//} 



//ɨ��

//#include <iostream> 
//using namespace std;
//
//int n;
//const int N = 1e4 + 10;
//int a[N], b[N];
//
//int check1()
//{
//	a[1] = 1; 
//	for(int i = 2; i <= n + 1; i++)
//	{
//		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
//		if(a[i] < 0 || a[i] > 1) return 0;
//	}
//	if(a[n + 1] != 0) return 0;
//	return 1;
//	
//}
//
//int check2()
//{
//	a[1] = 0;
//	for(int i = 2; i <= n + 1; i++)
//	{
//		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
//		if(a[i] < 0 || a[i] > 1) return 0;
//	} 
//	if(a[n + 1] != 0) return 0;
//	return 1;
//} 
//
//
//int main()
//{
//	int ret = 0;
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> b[i];
//	
//	ret += check1(); //a[1]�ŵ��� 
//	ret += check2(); //a[1]���ŵ��� 
//	cout << ret;
//	return 0;
//}



//## ������ö��

//�Ӽ�

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
    }
}; 










































