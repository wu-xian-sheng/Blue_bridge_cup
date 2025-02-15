//#include <iostream>
//using namespace std;
//
//
////����
//const int N = 1e6 + 10; // ���徲̬�������󳤶�
//int a[N], n; // ֱ�Ӵ���һ����������ʵ��˳��� n ��ʾ��ǰ�ж��ٸ�Ԫ�أ� 
//
////��ӡ
//void print()
//{
//	for(int i = 1; i <= n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
// } 
//
////β��
//void push_back(int x)
//{
//	a[++n] = x;
// } 
//
////ͷ��
//void push_front(int x)
//{
//	// Ҫ�����е�Ԫ��ȫ������һλ��Ȼ���ٷŵ�ͷ��λ��
//	for(int i = n; i >= 1; i--)//�Ӻ�ǰ����Ųһλ 
//	{
//		a[i + 1] = a[i];
//	}
//	a[1] = x; // �� x ���ڵ�һλ
//	n++;  // ��Ҫ�����ܸ��� +1
//
// } 
//
////����λ�ò���
//void insert(int p, int x)
//{
//	for(int i = n; i >= p; i--)
//	{
//		a[i + 1] = a[i];
//	}
//	a[p] = x;
//	n++;
// } 
//
////βɾ
//void pop_back()
//{
//   n--;
//}
//
//
////ͷɾ
//void pop_front() 
//{
//  // ������Ԫ����ǰ�ƶ�?λ
//  for (int i = 2; i <= n; i++) // ˳���Ƿ��ܵߵ���
//  {
//    a[i - 1] = a[i];
//  }
//  n--; // �ܸ��� -1
//}
//
//// ����λ��ɾ��
//void erase(int p) 
//{
//  for (int i = p + 1; i <= n; i++) 
//  {
//    a[i - 1] = a[i];
//  }
//  n--; // �ܸ��� -1
//}
//
//
////��ֵ����
//
//// �����������1�γ��ֵ�λ�ã��Ҳ������� 0
//int find(int x) 
//{
//  for (int i = 1; i <= n; i++) 
//  {
//    if (a[i] == x)
//      return i;
//  }
//  return 0;
//}
//
//
//
////��λ����
//
//// ���� p λ�õ���
//int at(int p) 
//{ 
//  return a[p]; 
//}
//
//
////�޸�Ԫ�� 
//// �� p λ�õ����޸ĳ� x
//void change(int p, int x)
//{
//   a[p] = x;
//}
//
//
//// ���˳���
//void clear()
//{
//   n = 0;
//}
//
//int main()
//{
//	push_back(1);
//	print();
//	push_back(2);
//	print();
//	push_back(3);
//	print();
//	
//	push_front(1);
//	print();
//	
//	insert(2,0);
//	print();
//	
//	pop_back();
//	print();
//	return 0;
//	
//}




//��װ��̬˳���
//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//
//// ��˳���Ĵ����Լ���ɾ��ķ�װ��?������
//
//class SqList 
//{
//  int a[N];
//  int n;
//
//public:
//  // ���캯������ʼ��
//  SqList() 
//  { 
//      n = 0; 
//   }
//  // β��
//  void push_back(int x) 
//  { 
//      a[++n] = x; 
//   }
//  // βɾ
//  void pop_back() 
//  { 
//      n--; 
//   }
//  // ��ӡ
//  void print() 
//  {
//    for (int i = 1; i <= n; i++) 
//    {
//      cout << a[i] << " ";
//    }
//    cout << endl;
//  }
//};
//
//
//int main() 
//{
//  SqList s1, s2; // ����������˳���
//  for (int i = 1; i <= 5; i++) 
//  {
//    // ֱ�ӵ�? s1 �� s2 ??�� push_back
//    s1.push_back(i);
//    s2.push_back(i * 2);
//  }
//  s1.print();
//  s2.print();
//  for (int i = 1; i <= 2; i++) 
//  {
//    s1.pop_back();
//    s2.pop_back();
//  }
//  s1.print();
//  s2.print();
//  return 0;
//}


//��̬˳��� - vector

//���������ص�ѧϰ vector ��ʹ��





#include <vector>
#include <iostream>
using namespace std;
const int N = 20;

struct node
{
	int a, b, c;
};

//���� vector
void init()
{
	
	vector<int> a1;// ����һ���յĿɱ䳤����
	vector<int> a2(N);// ָ������һ���ռ䣬��СΪ N
	vector<int> a3(N,10);//����һ����СΪ N �� vector���������������Ԫ�ض��� 10
	vector<int> a4 = {1, 2, 3, 4, 5}; //ʹ���б��ʼ��������һ��vector
	
	// <> ������Է���������ͣ������ģ������ã�Ҳ��ģ��ǿ��ĵط�
	// ������vector ����Ϳ��Է����ǽӴ����������������ͣ������� STL
	
	vector<string> a5; // ���ַ���
	vector<node> a6; // ��һ���ṹ��
	vector<vector<int>> a7;  // �������Է�һ���Լ�������һ����ά������ʹ�á�����ÿһά���ǿɱ��
	
	vector<int> a8[N]; // ���� N �� vector

}

//size / empty
void test_size()
{
	// ����һ��һά����
 	vector<int> a1(6, 8);
 	int s = a1.size();//����6 
 	cout << s << endl; 
}

void test_empty()
{
	vector<int> a1;
	vector<int> a2(3);
	cout << a1.empty() << endl; //1
	cout << a2.empty() << endl; //0
 } 

void print(vector<int>& a)
{
	for(int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

//begin / end
void test_it()
{
 	vector<int> a(10, 1);
 	// �������������� vector<int>::iterator������һ��ʹ�� auto ��
 	for(auto it = a.begin(); it != a.end(); it++)
 	{
 		cout << *it << " ";
 	}
 	cout << endl << endl;
 	// ʹ���﷨�� - ��Χ for ����
 	for(auto x : a)
 	{
 		cout << x << " ";
 	}
 	cout << endl << endl;

}

//push_back / pop_back
// 4. ��Ӻ�ɾ��Ԫ��
void test_io()
{
 	vector<int> a;
 	// β�� 1 2 3 4 5
 	a.push_back(1);
 	a.push_back(2);
 	a.push_back(3);
 	a.push_back(4);
 	a.push_back(5);
 	print(a);
 	// βɾ 3 ��
 	a.pop_back();
 	a.pop_back();
 	a.pop_back();
 	print(a);
}


// 5. ��Ԫ�غ�βԪ��
void test_fb()
{
 	vector<int> a(5);
 	for(int i = 0; i < 5; i++)
 	{
 		a[i] = i + 1;
 	}
 	cout << a.front() << " " << a.back() << endl;
}


// 6. resize
void test_resize()
{
 	vector<int> a(5, 1);
 	a.resize(10); // ���� 
 	print(a);
 	a.resize(3); // ��С 
 	print(a);
}


void test_clear()
{
	
	vector<int> a(5,1);
	cout << a.size() << endl;
	a.clear();
	cout << a.size() << endl;
}


int main()
{
//	vector<int> a1(5, 10);// ����һ���յĿɱ䳤����
//	init();
//	test_size();
//	test_empty();
//	print(a1);
//	test_it(); 
//	test_io();
//	test_fb();
//	test_resize(); 
	test_clear();
	return 0;
}



























