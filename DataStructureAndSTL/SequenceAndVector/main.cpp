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
#include <iostream>
using namespace std;
const int N = 1e5 + 10;

// ��˳���Ĵ����Լ���ɾ��ķ�װ��?������

class SqList 
{
  int a[N];
  int n;

public:
  // ���캯������ʼ��
  SqList() 
  { 
      n = 0; 
   }
  // β��
  void push_back(int x) 
  { 
      a[++n] = x; 
   }
  // βɾ
  void pop_back() 
  { 
      n--; 
   }
  // ��ӡ
  void print() 
  {
    for (int i = 1; i <= n; i++) 
    {
      cout << a[i] << " ";
    }
    cout << endl;
  }
};


int main() 
{
  SqList s1, s2; // ����������˳���
  for (int i = 1; i <= 5; i++) 
  {
    // ֱ�ӵ�? s1 �� s2 ??�� push_back
    s1.push_back(i);
    s2.push_back(i * 2);
  }
  s1.print();
  s2.print();
  for (int i = 1; i <= 2; i++) 
  {
    s1.pop_back();
    s2.pop_back();
  }
  s1.print();
  s2.print();
  return 0;
}
