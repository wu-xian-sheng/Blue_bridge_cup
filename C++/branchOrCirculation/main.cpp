#include <iostream>
using namespace std;
// ��ϰ1��������ж� 

//����1
//#include <iostream>
//using namespace std;
//int main()
//{
// 	int year = 0;
// 	cin >> year;
// 	if (year % 4 == 0 && year % 100 != 0)
// 		cout << "1" << endl;
// 	else if (year % 400 == 0)
// 		cout << "1" << endl;
// 	else
// 		cout << "0" << endl; 
// 	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
// 	int year = 0;
// 	cin >> year;
// 	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
// 		cout << "1" << endl;
// 	else
// 		cout << "0" << endl;
// 	return 0;
//}


//��ϰ2��������Լ��  


//#include <iostream>
//using namespace std;
//int main()
//{
// 	int d = 0;
// 	cin >> d;
// 	if (d == 1 || d == 3 || d == 5)
// 		cout << "NO" << endl;
// 	else
// 		cout << "YES" << endl;
// 	return 0;
//}



//�����ε��ж� 
//#include <iostream>
//using namespace std;
//int main()
//{
// 	int a, b, c;
// 	cin >> a >> b >> c;
// 	if (a + b > c && a + c > b && b + c > a)
// 		cout << 1 << endl;
// 	else
// 		cout << 0 << endl;
// 	return 0;
//}


//�ж��ܷ� 3��5��7 ����
//#include <iostream>
//using namespace std;
//int main()
//{
// 	int n = 0;
// 	cin >> n;
// 	if (n % 3 == 0)
// 	{
// 		cout << 3 << " ";
// 	}
// 	if (n % 5 == 0)
// 	{
// 		cout << 5 << " ";
// 	}
//	if (n % 7 == 0)
// 	{
// 		cout << 7 << " " << endl;
// 	}
// 	if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
// 		cout << "n" << endl;
// 	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
// 	int x = 0;
// 	cin >> x;
// 	//ͬʱ��������
// 	if (x % 2 == 0 && (x > 4 && x <= 12))
// 		cout << 1;
// 	else
// 		cout << 0;
// 	//��������1�����
// 	if (x % 2 == 0 || (x > 4 && x <= 12))
// 		cout << " " << 1;
// 	else
// 		cout << " " << 0;
// 	//ֻ����1�����
// 	if ((x % 2 == 0) + (x > 4 && x <= 12) == 1)
// 		cout << " " << 1;
// 	else
// 	cout << " " << 0;
// 	//2������������� 
// 	if ((x % 2 == 0) + (x > 4 && x <= 12) == 0)
// 		cout << " " << 1;
// 	else
// 		cout << " " << 0;
// 	return 0;
//}


//#include <cstdio>
//int main()
//{
// 	int day = 0;
// 	cin >> day;
// 	switch (day)
// 	{
// 	case 1:
// 		cout << "Monday" << endl;
// 		break;
// 	case 2:
// 		cout << "Tuesday" << endl;
// 		break;
// 	case 3:
// 		cout << "Wednesday" << endl;
// 		break;
// 	case 4:
// 		cout << "Thursday" << endl;
// 		break;
// 	case 5:
// 		cout << "Friday" << endl;
// 		break;
// 	case 6:
// 		cout << "Saturday" << endl;
// 		break;
// 	case 7:
// 		cout << "Sunday" << endl;
// 		break;
// }
//	return 0;
//}


//#include <cstdio>
//int main()
//{
// int day = 0;
// cin >> day;
// switch (day)
// {
// 	case 1:
// 	case 2:
// 	case 3:
// 	case 4:
// 	case 5:
// 		cout << "Workday" << endl;
// 		break;
// 	case 6:
// 	case 7:
// 		cout << "Weekend" << endl;
// 		break;
// }
// 	return 0;
//}


//�汾1
//����ĸ�ʽʹ��C���Ե�scanf�ķ�ʽ
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
// 	int year = 0, month = 0;
// 	scanf("%4d%2d", &year, &month);
// 	switch (month)
// 	{
// 	case 3:
// 	case 4:
// 	case 5:
// 		cout << "spring" << endl;
// 		break;
// 	case 6:
// 	case 7:
// 	case 8:
// 		cout << "summer" << endl;
// 		break;
// 	case 9:
// 	case 10:
// 	case 11:
// 		cout << "autumn" << endl;
// 		break;
// 	case 12:
// 	case 1:
// 	case 2:
// 		cout << "winter" << endl;
// 		break;
// 	}
// 	return 0;
//}


//�汾2
//����ķ�ʽʹ��C++�е�cin
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
// 	int n = 0, month = 0;
// 	cin >> n; //?���Զ�ȡ������6λ����
// 	month = n % 100; //��ȡ���2λ������?��
// 	switch (month)
// 	{
// 	case 3:
// 	case 4:
// 	case 5:
// 		cout << "spring" << endl;
// 		break;
// 	case 6:
// 	case 7:
// 	case 8:
// 		cout << "summer" << endl;
// 		break;
// 	case 9:
//	case 10:
// 	case 11:
// 		cout << "autumn" << endl;
// 		break;
// 	case 12:
// 	case 1:
// 	case 2:
// 		cout << "winter" << endl;
// 		break;
// 	}
// 	return 0;
//}

//�򵥼�����

//#include <iostream>
//using namespace std;
//int main()
//{
// 	int n1, n2;
// 	char c;
// 	cin >> n1 >> n2 >> c;
// 	if (n2 == 0 && c == '/')
// 		cout << "Divided by zero!" << endl;
// 	else
// 	{
// 		switch (c)
// 		{
// 		case '+':
// 			cout << n1 + n2 << endl;
// 			break;
// 		case '-':
// 			cout << n1 - n2 << endl;
// 			break;
// 		case '*':
// 			cout << n1 * n2 << endl;
// 			break;
// 		case '/':
// 			cout << n1 / n2 << endl;
// 			break;
// 		default:
// 			cout << "Invalid operator!" << endl;
// 			break;
// 		}
// 	}
// return 0;
//}


//�������ʽ��ֵ
//#include <cmath>
//#include <cstdio>
//int main()
//{
//	float x;
//	int n;
//	double sum = 1;
//	cin >> x >> n;
//	
//	while(n)
//	{
//		sum += pow(x,n);
//		n--;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}


//ѭ�� :��ӡ�˷���

//#include <cstdio>
//int main()
//{
//	for(int i = 1; i <= 9; i++)
//	{
//    	//��ӡһ�е�����
// 		for(int j = 1; j <= i; j++)
// 		{
// 			printf("%d*%d=%2d ", j, i, j * i);
// 		}
// 		printf("\n");
//	} 
//	return 0;
// } 



//�Შ��������
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



//������

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
// 	int n = 0;
// 	cin >> n;
// 	for(int i = 1; i <= n; i++)
// 	{
// 		for(int j = 1; j <= i; j++)
// 		cout << "*";
// 	cout << endl; 
// 	}
// 	return 0;
//}


//������
//int main()
//{
//	int a, b, c;
//	char d;
//	cin >> a >> b >> d >> c;
//	if(c == 1)
//	{
//		for(int i = 0; i < a; i++)
//		{
//			int j = b;
//			while(j--)
//			{
//				cout << d;	
//			}
//			cout << endl;	
//		}
//	}
//	else
//	{
//		for(int i = 0; i < a ; i++)
//		{
//			
//			for(int j = 0; j < b; j++)
//			{
//				if(i == 0 || i == a - 1 || j == 0 || j == b - 1)
//				{
//					cout << d;
//				}
//				else
//				{
//					cout << ' ';
//				}
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}


//��Ԯ

//��ֱ������ϵ��ԭ���Ǵ�Ӫ��������ÿ�δӴ�Ӫ������������֮�����ͻش�Ӫ������ϵ�еĵ�����ݶ���
//ÿ���ݶ�����λ����������ϵ�������ʾ��������ÿ�δӴ�Ӫ���������ٶ� 50 �� / ����ʻ����һ���ݶ���
//�ﵽһ���ݶ��󣬾������ϵ������ˣ�ÿ���ϴ� 1 ���ӣ���ԭ·���أ��ﵽ��Ӫ��ÿ���´� 0.5 ���ӡ�
//����ԭ��������һ���ݶ������߲����������ݶ���


//#include <cmath>
//
//int main()
//{
//	int n, p;
//	cin >> n;
//	double a, b, t;
//	
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a >> b >> p;
//		double s = sqrt(a*a + b*b);
//		t += s / 50 + p * 1.0 + p * 0.5 + s / 50;
//	}
//	cout << (int)ceil(t) << endl;
//	return 0;
//}


//��ϰ7����������к� 

//#include <iomanip>
//int main()
//{
//	int n;
//	cin >> n;
//	double count = 0;
//	int flag = 1;
//	for(int i = 1 ; i <= n; i++)
//	{
//		count += 1.0 / i * flag;
//		flag = -flag;
//	}
//	cout << fixed << setprecision(4) <<count << endl;
//	return 0;
//}



//��������к�

//#include <iomanip>
//int main()
//{
//	double q1 = 2.0;
//	double p1 = 1.0;
//	int n;
//	cin >> n;
//	double count = 0;
//	for(int i = 1 ; i <= n; i++)
//	{
//		count += q1 / p1;
//		q1 = q1 + p1;
//		p1 = q1 - p1;
//	}
//	cout << fixed << setprecision(4) << count << endl;
//	return 0;
//}


//��ϰ2�������߶ȵļ���


//int main()
//{
//	double h = 0;
//	double total = 0;//�� 
//	cin >> h;
//	total += h;
//	
//	int i = 1;
//	do
//	{
//		h /= 2;
//		total += h * 2;
//		i++;
//	}
//	while(i <= 9);
//	
//	cout << total << endl;
//	cout << h/2 << endl;
//	return 0;
//}


//��ϰ6���� n С������
//����һ�������� n������������Χ�е� nС��������
//int main()
//{
//	int n;
//	cin >> n;
//	int i = 2;
//	int cnt = 0;//����
//	
//	while(1)
//	{
//		//�ж��Ƿ�Ϊ����
//		int flag = 1; //����i������ 
//		for(int j = 2; j <= i-1; j++)
//		{
//			if(i % j == 0)
//			{
//				flag = 0; 
//				break;
//			}
//			
//		 } 
//		 if(flag == 1)
//		 {
//		 	cnt++;
//		 }
//		 
//		 if (cnt == n)
//		 {
//		 	break;
//		 }
//		 i++;
//	 } 
//	 cout << i << endl;
//	return 0;
//}

//�Ż�
#include <cmath>
int main()
{
	int n;
	cin >> n;
	int i = 2;
	int cnt = 0;//����
	
	while(1)
	{
		//�ж��Ƿ�Ϊ����
		int flag = 1; //����i������ 
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0)
			{
				flag = 0; 
				break;
			}
			
		 } 
		 if(flag == 1)
		 {
		 	cnt++;
		 }
		 
		 if (cnt == n)
		 {
		 	break;
		 }
		 i++;
	 } 
	 cout << i << endl;
	return 0;
} 

