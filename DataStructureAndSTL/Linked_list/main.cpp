////�����ģ��ʵ��
////���� - ���� - ��ʼ��
//
//#include <iostream>
//using namespace std;
//
//// �±� 0 λ����Ϊ�ڱ�λ
//// ���� ne ����ȫ����ʼ��Ϊ 0������ ne[i] = 0 �ͱ�ʾ��ָ�룬����û�н��
//// ��Ȼ��Ҳ���Գ�ʼ��Ϊ -1 ��Ϊ��ָ�룬�����˰���
//
//const int N = 1e5 + 20;
////����
//int e[N], ne[N], h, id; 
//
////����洢��ֵ���ݷ�Χ���󣬿����ù�ϣ���Ż���
//int mp[N]; // mp[i] ���ʾi �����Ԫ�ش�ŵ�λ��
//
////ͷ��
//void push_front(int x)
//{
//	//����һ���µĽڵ㣬����ֵ 
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	//x����ָ��ָ���ڱ�λ�ĺ�� 
//	ne[id] = ne[h];
//	// ͷ������ָ��ָ��x 
//	ne[h] = id;
// } 
//
////��������
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
//// ��ֵ����
////�ⷨ1���������������ɡ�
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
////������λ��֮�����Ԫ��
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
//// ɾ���洢λ��Ϊ p �����Ԫ��
//void erase(int p)
//{
//	if(ne[p])//��p�������һ��Ԫ�ص�ʱ��
//	{
//		mp[e[ne[p]]] = 0; // �� p �����Ԫ�ش� mp ��ɾ��
//		ne[p] = ne[ne[p]];  // ָ����һ��Ԫ�ص���һ��Ԫ��
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


//˫�������ģ��ʵ��

//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int h; // ͷ���
//int id; // ��һ��Ԫ�ط����λ��
//int e[N]; // ������
//int pre[N], ne[N]; // ǰ��ָ����
//// h Ĭ�ϵ��� 0��ָ��ľ����ڱ�λ
//// ��ʱ����Ϊ�գ�û���κμ��㣬��� ne[h] = 0
//
//int mp[N];
//
////ͷ�� 
//void push_front(int x)
//{
//	//id++������½��洢��λ��;���µ�Ԫ�ش洢����:e[id]=x;
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	 
//	
//	//�޸��½���ǰ��ָ�룬����ָ���ڱ�λ:pre[id]=h;
//	pre[id] = h;
//	//�޸��½��ĺ��ָ�룬����ָ���ڱ�λ����һ��λ��:ne[id]=ne[h];
//	ne[id] = ne[h];
//	
//	//�޸� y����ǰ��ָ�룬����ָ���µĽ��:pre[ne[h]]=id;
//	pre[ne[h]] = id;
//	//�޸��ڱ�λ�ĺ��ָ�룬����ָ���µĽ��:ne[h]=id;
//	ne[h] = id; 
//}
//
//
////��������
//void print()
//{
//	for(int i = ne[h]; i; i = ne[i])
// 	{
// 		cout << e[i] << " ";
// 	}
// 	cout << endl << endl;
//}
//
//// ��ֵ����
//// ����Ԫ�� x �������д洢��λ��
//
//int find(int x)
//{
//	// �� mp �Ż�
// 	return mp[x];
// } 
//
//
////������λ�ò���
//void insert(int p, int x)
//{
//	//id++������½��洢��λ��;���µ�Ԫ�ش洢����:e[id]=x
//	id++;
//	e[id] = x;
//	mp[x] = id; 
//	
//	//�޸��½���ǰ��ָ�룬����ָ��pλ��:pre[id]=p
//	pre[id] = p;
//	//�޸��½��ĺ��ָ�룬����ָ��pλ�õ���һ��λ��:ne[id]=ne[p]
//	ne[id] = ne[p];
//	
//	//�޸�p��һ��λ�õ�ǰ��ָ�룬����ָ���µĽ��:pre[ne[p]]=id
//	pre[ne[p]] = id;
//	//�޸�p�ĺ��ָ�룬����ָ���µĽ��:ne[p]=id
//	ne[p] = id;
// } 
// 
// 
// //������λ��֮ǰ����Ԫ��
//// �ڴ洢λ��Ϊp��Ԫ��ǰ�棬�����µ�Ԫ��x��
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
// //ɾ������λ�õ�Ԫ��
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




//��̬���� - list���˽⣩

//���� list

#include <iostream>
#include <list>
using namespace std;


void testadd()
{
 	list<int> lt;
 	// β��
 	for(int i = 1; i <= 5; i++)
 	{
 		lt.push_back(i);
 		print(lt);
 	}
 
 
 // ͷ��
 	for(int i = 1; i <= 5; i++)
 	{
 		l.push_front(i);
 		print(l);
 	}
}



// ɾ
void testdelete()
{
 	list<int> lt;
 	// β��
 	for(int i = 1; i <= 5; i++)
 	{
 		lt.push_back(i);
 	}
 
 	// ͷ��
 	for(int i = 5; i >= 1; i--)
 	{
 		lt.push_front(i);
 	}
 	// ͷɾ
 	for(int i = 1; i <= 3; i++) lt.pop_front();
 	// βɾ
 	for(int i = 1; i <= 3; i++) lt.pop_back();
 	print(lt);
}


int main()
{
 	list<int> lt; // ����1���洢 int ���͵�����
 	
 	return 0;
}
















