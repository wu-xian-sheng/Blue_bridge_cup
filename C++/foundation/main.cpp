#include <iostream>
using namespace std;



//2.���������ͷ���ֵ

//ʵ�κ��β�

//#include <iostream>
//using namespace std;
//int Add(int x, int y) 
//{
//  int z = 0;
//  z = x + y;
//  return z;
//}
//int main() 
//{
//  int a = 0;
//  int b = 0;
//      //���� 
//      cin >> a >> b;
//  //��?�ӷ����������a��b�����
//  //��͵Ľ������r��
//  int r = Add(a, b);
//  //���
//  cout << r << endl;
//  return 0;
//}


//��������������
void set_arr(int arr[], int sz) 
{
  int i = 0;
  for (i = 0; i < sz; i++) 
  {
    arr[i] = -1;
  }
  int sz = sizeof(arr) / sizeof(arr[0]);
  cout << sz << endl;
}
void print_arr(int arr[], int sz) 
{
  int i = 0;
  for (i = 0; i < sz; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() 
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sz = sizeof(arr) / sizeof(arr[0]);
  set_arr(arr, sz);   //������������Ϊ-1
  print_arr(arr, sz); //��ӡ��������
  return 0;
}
