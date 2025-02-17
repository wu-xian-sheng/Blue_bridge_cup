////链表的模拟实现
////定义 - 创建 - 初始化
//
//#include <iostream>
//using namespace std;
//
//// 下标 0 位置作为哨兵位
//// 其中 ne 数组全部初始化为 0，其中 ne[i] = 0 就表示空指针，后续没有结点
//// 当然，也可以初始化为 -1 作为空指针，看个人爱好
//
//const int N = 1e5 + 20;
////创建
//int e[N], ne[N], h, id; 
//
////如果存储的值数据范围不大，可以用哈希表优化。
//int mp[N]; // mp[i] 表表示i 在这个元素存放的位置
//
////头插
//void push_front(int x)
//{
//	//开辟一个新的节点，并赋值 
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	//x的右指针指向哨兵位的后继 
//	ne[id] = ne[h];
//	// 头结点的右指针指向x 
//	ne[h] = id;
// } 
//
////遍历链表
//void print()
//{
//	for (int i = ne[h] ; i ; i = ne[i])
//	{
//		cout << e[i] << " ";
//	}
//	cout << endl;
// } 
// 
// 
//// 按值查找
////解法1：遍历整个链表即可。
////int find(int x)
////{
////	for(int i = ne[h]; i; i = ne[i])
////	{
////		if(e[i] == x)
////		{
////			return i;
////		}
////	}
////	return 0;
////}
//
//
//
//int find(int x)
//{
//	
//	return mp[x];
//}
//
//
////在任意位置之后插入元素
//void insert(int p, int x)
//{
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	
//	ne[id] = ne[p];
//	ne[p] = id;
//	
//}
//
//// 删除存储位置为 p 后面的元素
//void erase(int p)
//{
//	if(ne[p])//当p不是最后一个元素的时候
//	{
//		mp[e[ne[p]]] = 0; // 将 p 后面的元素从 mp 中删除
//		ne[p] = ne[ne[p]];  // 指向下一个元素的下一个元素
//
//	 } 
// } 
//
//
//int main()
//{
//	push_front(1);
//	print();
//	push_front(2);
//	print();
//	push_front(3);
//	print();
//	push_front(4);
//	print();
//	
//	insert(3, 6);
//	print();
//	
//	cout << find(1) << endl;
//	cout << find(2) << endl;
//	cout << find(3) << endl;
//	cout << find(6) << endl;
//	
//	erase(find(3));
//	print();
//	return 0;
// } 


//双向链表的模拟实现

//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int h; // 头结点
//int id; // 下一个元素分配的位置
//int e[N]; // 数据域
//int pre[N], ne[N]; // 前后指针域
//// h 默认等于 0，指向的就是哨兵位
//// 此时链表为空，没有任何几点，因此 ne[h] = 0
//
//int mp[N];
//
////头插 
//void push_front(int x)
//{
//	//id++，标记新结点存储的位置;把新的元素存储下来:e[id]=x;
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	 
//	
//	//修改新结点的前驱指针，让其指向哨兵位:pre[id]=h;
//	pre[id] = h;
//	//修改新结点的后继指针，让其指向哨兵位的下一个位置:ne[id]=ne[h];
//	ne[id] = ne[h];
//	
//	//修改 y结点的前驱指针，让其指向新的结点:pre[ne[h]]=id;
//	pre[ne[h]] = id;
//	//修改哨兵位的后继指针，让其指向新的结点:ne[h]=id;
//	ne[h] = id; 
//}
//
//
////遍历链表
//void print()
//{
//	for(int i = ne[h]; i; i = ne[i])
// 	{
// 		cout << e[i] << " ";
// 	}
// 	cout << endl << endl;
//}
//
//// 按值查找
//// 查找元素 x 在链表中存储的位置
//
//int find(int x)
//{
//	// 用 mp 优化
// 	return mp[x];
// } 
//
//
////在任意位置插入
//void insert(int p, int x)
//{
//	//id++，标记新结点存储的位置;把新的元素存储下来:e[id]=x
//	id++;
//	e[id] = x;
//	mp[x] = id; 
//	
//	//修改新结点的前驱指针，让其指向p位置:pre[id]=p
//	pre[id] = p;
//	//修改新结点的后继指针，让其指向p位置的下一个位置:ne[id]=ne[p]
//	ne[id] = ne[p];
//	
//	//修改p下一个位置的前驱指针，让其指向新的结点:pre[ne[p]]=id
//	pre[ne[p]] = id;
//	//修改p的后继指针，让其指向新的结点:ne[p]=id
//	ne[p] = id;
// } 
// 
// 
// //在任意位置之前插入元素
//// 在存储位置为p的元素前面，插入新的元素x；
// void  insert_front(int p, int x)
// {
// 	id++;
// 	e[id] = x;
// 	
// 	pre[id] = pre[p];
// 	ne[id] = p;
// 	
// 	ne[pre[p]] = id;
// 	pre[p] = id;
// }
// 
// 
// 
// 
// //删除任意位置的元素
// 
// void erase(int p)
// {
// 	mp[e[p]] = 0;
// 	ne[pre[p]] = ne[p];
// 	pre[ne[p]] = pre[p];
// }
//  
//
//
//int main()
//{
//	push_front(1);
//	print();
//	push_front(2);
//	print();
//	push_front(3);
//	print();
//	
//	cout << find(3) << endl; 
//	
//	insert(1, 6);
//	insert_front(1,8);
//	print();
//	
//	erase(2);
//	print();
//	
//	
//	return 0;
// } 




//动态链表 - list（了解）

//创建 list

#include <iostream>
#include <list>
using namespace std;


void testadd()
{
 	list<int> lt;
 	// 尾插
 	for(int i = 1; i <= 5; i++)
 	{
 		lt.push_back(i);
 		print(lt);
 	}
 
 
 // 头插
 	for(int i = 1; i <= 5; i++)
 	{
 		l.push_front(i);
 		print(l);
 	}
}



// 删
void testdelete()
{
 	list<int> lt;
 	// 尾插
 	for(int i = 1; i <= 5; i++)
 	{
 		lt.push_back(i);
 	}
 
 	// 头插
 	for(int i = 5; i >= 1; i--)
 	{
 		lt.push_front(i);
 	}
 	// 头删
 	for(int i = 1; i <= 3; i++) lt.pop_front();
 	// 尾删
 	for(int i = 1; i <= 3; i++) lt.pop_back();
 	print(lt);
}


int main()
{
 	list<int> lt; // 创建1个存储 int 类型的链表
 	
 	return 0;
}
















