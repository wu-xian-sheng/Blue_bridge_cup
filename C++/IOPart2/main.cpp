#include <iostream>
using namespace std; 

//1. OJ��online judge����Ŀ�����������


//1.1 �����������

//���� (a+b)/c ��ֵ

//#include <iostream>
//using namespace std;
//int main()
//{
// 	int a, b, c;
// 	cin >> a >> b >> c;
// 	cout << (a + b) / c << endl;
//	return 0;
//}


//��ϰ2���� 7 �޹ص���  
//#include <iostream>
//using namespace std;
//int main()
//{
// 	int n = 0;
// 	cin >> n;
// 	int i = 1;
// 	int sum = 0;
// 	while (i <= n)
// 	{
// 		if (i % 7 != 0 && i / 10 != 7 && i % 10 != 7)
// 			sum += (i * i);
// 		i++;
// 	}
// 	cout << sum << endl;
// 	return 0;
//}



//1.2 �����������  


//		1.2.1 ��������������֪  

//��ϰ1����������a+b II


//#include <iostream>
//using namespace std;
//int main()
//{
//    int n = 0;
//    int a, b;
//    cin >> n;
//    while(n--)
//    {
//        cin >> a >> b;
//        cout << a + b << endl;
//    }
//    return 0;
//}


//��ϰ2��쳲��������� 


//#include <iostream>
//using namespace std;
//int main()
//{
//    int n = 0;
//    cin >> n;
//    for(int i = 0;i < n; i++)
//    {
//        int a1 = 1;
//        int a2 = 1;
//        int a3 = 1;
//        int k;
//        cin >> k;
//        while(k > 2)
//        {
//            a3 = a1 + a2;
//            a1 = a2;
//            a2 = a3;
//            k--;
//        }
//        cout << a3 << endl;
//    }
//    return 0;
//}


//��ϰ3���ƺ���  


//#include <iostream>
//using namespace std;
//#include <string>
//int main()
//{
//	string s,q,ans1, ans2;
//	cin >> s >> q;
//	int n = 0;
//	int r1, l1, r2, l2;
//	cin >> n;
//	while(n--)
//	{
//		cin >> l1 >> r1 >> l2 >> r2;
//		ans1 = s.substr(l1 - 1, r1 - l1 + 1);
//		ans2 = q.substr(l2 - 1, r2 - l2 + 1);
//		if(ans1 == ans2)
//		{
//			cout << "ovo" << endl;
//		}
//		else if(ans1 < ans2)
//			cout << "yifusuyi" << endl;
//		else
//			cout << "erfusuer" << endl;
//	}
//	return 0;
//}


//			1.2.2 ������������δ֪  



//��ϰ1����������a+b 

//#include <iostream>
//using namespace std;
//int a, b;
//int main()
//{
//    while (cin >> a >> b)
//    {
//        cout << a + b << endl;
//    }
//    return 0;
//}



//��ϰ2�����������δ�ӡ 


//#include <iostream>
//using namespace std;
//int main()
//{
//    int n = 0;
//    while(cin >> n)
//    {
//        for(int i = 1; i <= n; i++)
//        {
//            for(int j = 1; j <= i; j++)
//                cout << j << ' ';;
//            cout << endl; 
//        }
//    }
// return 0;
//}


//��ϰ3����λ����  



//#include <iostream>
//using namespace std;
//
//const int N = 25;
//int arr[N];
//int n, m;
//int main()
//{
//	int i = 0;
//	while(cin >> n)
//	{
//		//������� 
//		for(i = 0; i < n; i++)
//		{
//			cin >>  arr[i];
//		}
//		//����m
//		cin >> m;
//		 for(i = 0; i < n; i++)
//		{
//			if(arr[i] == m)
//			{
//				cout << i << endl;
//				break;
//			 } 
//		}
//		//�Ҳ���
//		if(i == n)
//			cout << "No" << endl; 
//	}
//	return 0;
//}



//		1.2.3 ����ֵ������������  


//��ϰ1���ַ�ͳ�� 



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char ch;
//	int let = 0;
//	int dig = 0;
//	int oth = 0;
//	while((ch = getchar()) != '?')
//	{
//		if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//		{
//			let++;
//		}
//		else if(ch >= '0' && ch <= '9')
//		{
//			dig++;
//		}
//		else
//		{
//			oth++;
//		}
//	}
//	cout << "Letters=" << let << endl;
//	cout << "Digits=" << dig << endl;
//	cout << "Others=" << oth << endl;
//	
//	return 0;
//}

//Ҳ������չѧϰ�� isalpha �� isdigit ������

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char ch;
//	int let = 0;
//	int dig = 0;
//	int oth = 0;
//	while((ch = getchar()) != '?')
//	{
//		if(isalpha(ch))
//		{
//			let++;
//		}
//		else if(isdigit(ch))
//		{
//			dig++;
//		}
//		else
//		{
//			oth++;
//		}
//	}
//	cout << "Letters=" << let << endl;
//	cout << "Digits=" << dig << endl;
//	cout << "Others=" << oth << endl;
//	
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
// 	string s;
// 	int Letters = 0;
// 	int Digits = 0;
// 	int Others = 0;
// 	getline(cin, s);
// 	s.pop_back(); //ȥ��?
// 	for (auto ch : s)
// 	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
// 			Letters++;
// 		else if (ch >= '0' && ch <= '9')
// 			Digits++;
// 		else
// 			Others++;
// 	}
// 	cout << "Letters=" << Letters << endl;
// 	cout << "Digits=" << Digits << endl;
// 	cout << "Others=" << Others << endl;
// 	return 0;
//}



//��ϰ2����������a+b III  

//#include <iostream>
//using namespace std;
//int main()
//{
// 	int a = 0, b = 0;
// 	while (cin >> a >> b, a && b)
// 	{
// 		cout << a + b << endl;
// 	}
// 	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
// 	int a = 0, b = 0;
// 	while (cin >> a >> b)
// 	{
// 		if(a = 0 && b = 0)
// 			break;
// 		cout << a + b << endl;
// 	}
// 	return 0;
//}



//2. ����ʱ���⼼�� 

//		2.1 ����1�����ո��ַ��������⴦��ʽ

//��ϰ�� ͳ�������ַ�����  

//�ⷨ1����ȡ�������ո���ַ�������

//#include <iostream>
//using namespace std;
//#include <string>
//
//int main()
//{
//	string s;
//	int cnt = 0;
//	getline(cin, s);
//	for(auto ch: s)
//	{
//		if(isdigit(ch))
//			cnt++;
//	}
//	cout << cnt << endl;
//	return 0;
//}

		//2.2 ����2�����ֵ����⴦��?ʽ


//��ϰ�� С���ָ�����

//#include <iostream>
//using namespace std;
//#include <string>
//#include <cmath>
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	int i = 0;
//	cin >> n;
//	while(n)
//	{
//		if(n % 10 % 2)
//			ret += 1 * pow(10, i);
//		else
//			ret += 0 * pow(10, i);
//		n /= 10;
//		i++;
//	}
//	cout << ret << endl;
//	return 0;
//}


// �ⷨ2�������ַ������� 

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
// 	string s;
// 	cin >> s;
// 	for (int i = 0; i < s.size(); i++) // �����ַ����Ӧ��������ż?��
// 	{
// 		if (s[i] % 2)
// 		{
// 			s[i] = '1';
// 		}
// 		else
// 		{
// 			s[i] = '0';
// 		}
// 	}
// 	cout << stoi(s) << endl; // ת�����������
// 	return 0;
//}




//3. scanf/printf �� cin/cout�ĶԱ�  

//		3.1 ��ʽ���Ʋ��� 


//#include <cstdio>
//#include <iostream>
//
//using namespace std;
//int main()
//{
// 	float a = 3.50;
// 	double d = 16.50;
// 
//	cout << "cout: " <<a << " "<< d <<endl;
// 	printf("printf: %f %lf\n", a, d);
// 	return 0;
//}



//			3.2 ���ܲ���

//					3.2.1 ������ʾ  


//����1��������Ϸ 





