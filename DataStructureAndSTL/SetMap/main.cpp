
//set / multiset





//#include <iostream>
//using namespace std;
//#include <set>
//
//int a[] = {10, 60, 20, 70, 80, 30, 90, 40, 100, 50};
//
//int main()
//{
//	set<int> mp1;
//	set<string> mp2;
//	for(int x:a)
//	{
//		mp1.insert(x);
//	}
//	
//	for(int x :mp1)
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//	
//	//查找和删除
//	if(mp1.count(1)) cout << 1 << endl;
//	if(mp1.count(30)) cout << 30 << endl;
//	if(mp1.count(80)) cout << 80 << endl;
//	
//	mp1.erase(30);
//	mp1.erase(80);
//	if(mp1.count(30)) cout << 30 << endl;
//	else cout << "no 30" << endl;
//	if(mp1.count(80)) cout << 80 << endl;
//	else cout << "no 80" << endl;
//	
//	
//	return 0;
//}




////map/multimap
//
//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//using namespace std;
//
//void print(map<string, int>& mp)
//{
//	for(auto& x : mp)
//	{
//		cout << x.first << " " << x.second << endl;
//	}
//}
//
//int main()
//{
//	map<int, int> mp1;
// 	map<int, string> mp2;
// 	map<string, int> mp3;
// 	map<int, vector<int>> mp4;
// 	
// 	mp3.insert({"张三", 1});
// 	mp3.insert({"李四", 2});
// 	mp3.insert({"王五", 3});
// 	
// 	print(mp3);
// 	
// 	cout << mp3["张三"] << endl; 
// 	mp3["张三"] = 10;
//	cout << mp3["张三"] << endl; 
//	
//	if(mp3["赵六"] == 4) cout << "yes" << endl;
//	else cout << "yes" << endl;
//	
//	print(mp3);
// 	
//	return 0; 	
//}



//map/multimap

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void print(map<string, int>& mp)
{
	for(auto& x : mp)
	{
		cout << x.first << " " << x.second << endl;
	}
}


//统计字符串中每一个字符串出现的次数 
void fun()
{
	string s;
	map<string, int> mp;
	for(int i = 0; i <= 10; i++)
	{
		cin >> s;
		mp[s]++;
	}
	
	print(mp);
	
}

int main()
{
//	map<int, int> mp1;
// 	map<int, string> mp2;
// 	map<string, int> mp3;
// 	map<int, vector<int>> mp4;
// 	
// 	mp3.insert({"张三", 1});
// 	mp3.insert({"李四", 2});
// 	mp3.insert({"王五", 3});
// 	
// 	print(mp3);
// 	
// 	cout << mp3["张三"] << endl; 
// 	mp3["张三"] = 10;
//	cout << mp3["张三"] << endl; 
//	
//	if(mp3.count("赵六") && mp3["赵六"] == 4) cout << "yes" << endl;
//	else cout << "yes" << endl;
//	
//	print(mp3);
// 	
// 	mp3.erase("张三");
//	print(mp3); 

	fun();
 	
	return 0; 	
}



























