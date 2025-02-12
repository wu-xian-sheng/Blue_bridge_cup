#include <iostream>
using namespace std;



//2.函数参数和返回值

//实参和形参

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
//      //输入 
//      cin >> a >> b;
//  //调?加法函数，完成a和b的相加
//  //求和的结果放在r中
//  int r = Add(a, b);
//  //输出
//  cout << r << endl;
//  return 0;
//}


//数组做函数参数
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
  set_arr(arr, sz);   //设置数组内容为-1
  print_arr(arr, sz); //打印数组内容
  return 0;
}
