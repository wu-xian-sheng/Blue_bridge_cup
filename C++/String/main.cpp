#include <iostream>
#include <string>
using namespace std;


//String创建字符串 
//int main()
//{
// 	string s1;
// 	string s2 = "hello world";
// 	cout << "s1:" << s1 << endl; //s1:
// 	cout << "s2:" << s2 << endl; //s2：hello world
// return 0;
//}

//string s("hello world"); //等同于string s1 = "hello world";
//string s1 = s; //用一个现成的字符串s，初始化另外一个字符串s1


//string类型的字符串对象可以直接赋值

//int main()
//{
//	string s1("hello world");
//	string s2("he he");
//	s2 = s1;
//	cout << s2 << endl;
//	return 0;
//}




//string字符串的输入  


//cin

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
// 	string s;
// 	//输入 
// 	cin >> s;
// 	//输出
// cout << s << endl;
// 
// return 0;
//}



//getline



//第一种 
//#include <string>
//int main()
//{
//	string name;
//	getline(cin,name);
//	cout << name << endl;
//	return 0;
// } 


//第二种getline(cin, string str, char delim)

//代码2
//#include<iostream>
//#include <string>
//using namespace std;
//int main ()
//{
// 	string name;
// 	getline (cin, name, 'q');
// 	cout << name << endl;
// 
// 	return 0;
//}


//size
//int main()
//{
//	string s;
// 	string s1 = "hello";
// 	string s2 = "hello world";
// 	string s3 = "12ab!~        ";
// 	
// 	cout << s.size() << endl;
// 	cout << s1.size() << endl;
// 	cout << s2.size() << endl;
// 	cout << s3.size() << endl;
//	return 0;
// } 


//string 类型的字符串是可以通过下标访问的

//int main()
//{
//	string s;
//	cin >> s;
//	for(int i = 0 ; i < s.size(); i++)
//	{
//		cout << s[i] << endl;
//	}
//	return 0;
// } 



//迭代器

//- **begin（）**：返回指向字符串第一个字符的迭代器，需要一个迭代器的变量来接收。  
//
//- **end（）**：返回指向字符串最后一个字符的下一个位置的迭代器（该位置不属于字符串）。   
//
//string 中 begin(）和end(）返回的迭代器的类型是 **string::iterator**  


//int main()
//{
//	string s = "abcdef";
//	string::iterator it1 = s.begin();
//	string::iterator it2 = s.end();
//	cout << *it1 << endl;
//	cout << *(it2-1) << endl;
//	return 0;
// } 
 
 
// 迭代器+-
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
// 	string s = "abcdef";
// 	string::iterator it1 = s.begin();
// 	string::iterator it2 = s.end();
// 	cout << (it1 < it2) << endl;
//	cout << it1 - it2 << endl;
// 	return 0;
//}



//迭代器的正反遍历 


//int main()
//{
//	string s = "abcdef"; 
//	//auto it 是让编译器?动推到it的类型
//	for(auto it = s.begin() ; it < s.end() ; it++)
//	{
//		cout << *it << " ";
//	}
//	
//	cout << endl;
//	//string::iterator 是正向迭代器类型
// 	//string::iterator it，是直接创建迭代器，it是针对字符串的迭代器
//	for(string::iterator it = s.begin() ; it < s.end() ; it++)
//	{
//		cout << *it << " ";
//	}
//	
//	return 0;
// } 


//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
// 	string s = "abcdef"; 
// 	for (string::iterator it = s.end() - 1; it >= s.begin(); --it) 
// 	{ 
// 		cout << *it << ' '; 
// 	}
// 	return 0;
//}


//通过迭代器找到元素后，改变迭代器指向的元素，是可以直接改变字符串内容的。

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
// 	string str = "abcdef"; 
// 	cout << str << endl;
// 	for (string::iterator it = str.begin(); it != str.end(); ++it) 
// 	{ 
// 		*it = 'x'; 
// 	}
// 	cout << str << endl;
// 	return 0;
//}


//push_back()

//#include <iostream>
//#include<string> //添加string头?件
//using namespace std;
//int main()
//{
// 	//向空字符串中尾插字符
// 	string s;
// 	s.push_back('h');
// 	s.push_back('e');
// 	s.push_back('l');
// 	s.push_back('l');
// 	s.push_back('o');
// 	cout << s << endl;
// 	
// 	
//    //向非空字符串中尾插字符
// 	string s1 = "hello ";
// 	s1.push_back('w');
// 	s1.push_back('o');
// 	s1.push_back('r');
// 	s1.push_back('l');
// 	s1.push_back('d');
// 	cout << s1 << endl;
// 	//批量插入字符
// 	string s2;
// 	for (char c = 'a'; c <= 'f'; c++)
// 	{
// 		s2.push_back(c);
// 	}
// 	cout << s2 << endl;
// 	return 0;
// }


//2.6字符串的 += 和 + 运算  

//#include <iostream>
//#include <string> //添加string头?件
//using namespace std;
//int main()
//{
// 	string s = "hello";
// 	s += " world"; //字符串?双引号，等价于 s = s + " world"
// 	cout << s << endl;
// 
// 	//除了+=操作，也可以使?'+'灵活进?字符串拼接
// 	//1.尾部拼接
//
// 	string s1 = "hello";
// 	cout << s1 + " world" << endl; //s1仍然是"hello"
// 
// 	s1 = s1 + " world";
// 	cout << s1 << endl; //s1是"hello world"
// 
// 
// 	//2.头部拼接
// 	string s2 = "hello";
// 	s2 = "world " + s2 ; 
// 	cout << s2 << endl; //s2为："world hello"
// 
// 	return 0;
//}


//pop_back();

//int main()
//{
// 	string s = "hello";
// 	cout << "s:" << s << endl;
// 	//尾删
// 	s.pop_back();
// 	cout << "s:" << s << endl;
// 	//尾删
// 	s.pop_back();
// 	cout << "s:" << s << endl;
// 	return 0;
//}


// 但是当字符串中没有字符的时候，再调用 pop_back（）时，程序会出现异常。**这种行为也是未定义行为，要避免这么使用**


//#include <iostream>
//#include <string> //添加string头文件
//using namespace std;
//int main()
//{
// 	string s;
// 	s.pop_back();
// 	return 0;
//}

//改进： 

//int main()
//{
//	string s = "abcdef";
//	while(s.size() > 0)
//	{
//		s.pop_back();
//	}
//	return 0;
// } 




//insert()


////pos位置前?插??个string字符串
//int main()
//{
//	string s = "abcdefghi";
//	string str = "xxx";
//	cout << s << endl;
//	s.insert(3,str);
//	cout << s << endl;
//	return 0;
// } 


//pos位置前面插入一个C风格的字符串

//int main()
//{
//	string s = "abcdefghi";
// 	cout << s << endl;
// 	s.insert(3, "xxx");
// 	cout << s << endl;
//	return 0;
//}


//pos位置前面插入n个字符c

//int main()
//{
// 	string s = "abcdefghi";
// 	cout << s << endl;
// 	s.insert(3, 3, 'x');
// 	cout << s << endl;
//	return 0;
//}


//find()

//size_t find (const string& str, size_t pos = 0) const;
////查找string类型的字符串str，默认是从头开始查找，pos可以指定位置开始
//
//size_t find (const char* s, size_t pos = 0) const;
////查找C?格的字符串s，默认是从头开始查找，pos可以指定位置开始
//
//size_t find (const char* s, size_t pos, size_t n) const;
////在字符串的pos这个位置开始查找C?格的字符串s中的前n个字符，
//
//size_t find (char c, size_t pos = 0) const;
////查找字符c，默认是从头开始，pos可以指定位置开始


//代码1
//#include <iostream>
//#include <string> //添加string头文件
//using namespace std;
//int main()
//{
// 	string s = "hello world hello everyone";
// 	string str = "llo";
// 	//查找string类型的字符串
// 	size_t n = s.find(str);
// 	cout << n << endl;
// 
//	n = s.find(str, n + 1); //从n+1这个指定位置开始查找
// 	cout << n << endl;
// 
// 	//查找C风格的字符串
// 	n = s.find("llo");
// 	cout << n << endl;
// 
// 	n = s.find("llo", n + 1); //从n+1这个指定位置开始查找
// 	cout << n << endl;
// 
// 	return 0;
//}




//代码2
//#include <iostream>
//#include <string> //添加string头文件
//using namespace std;
//int main()
//{
//	string s = "hello world hello everyone";
//	size_t n = s.find("word", 0, 3);
//	cout << n << endl;
//	
//	n = s.find("everyday" , n+1 , 5);
//	cout << n << endl;
//	return 0;
// } 



//代码3
//int main()
//{
//	string s = "hello world hello everyone";
//	size_t n = s.find('o');
//	cout << n << endl;
//	
//	n = s.find('o', n + 1);
//	cout << n << endl;
//	return 0;
// } 


//打印npos

//#include <iostream>
//#include <string> //添加string头文件
//using namespace std;
//int main()
//{
// 	//注意：npos是string中定义的，使?npos需要带上string::指明是string类中的
// 	cout << "npos:" << string::npos << endl; 
// 	cout << "npos:" << (int)string::npos << endl; //由于npos是size_t的类型，所以直接打印会是一个很大的数，但其实是-1 
// 	return 0;
//}
 
 
 
//int main()
//{
//	string s = "hello world hello everyone";
//	size_t n = s.find("wu");
//	if(n == string::npos)
//	{
//		cout << "找不到" << endl; 
//	}
//	else
//	{
//		cout << "找到了，n = " << n << endl; 
//	}
//	return 0;
// } 



//substr()

//#include <iostream>
//#include<string> //添加string头文件
//using namespace std;
//int main()
//{
// 	string s = "hello world hello everyone";
// 	string s1 = s.substr(7);
// 	cout << s1 << endl;
// 	
// 	string s2 = s.substr(7, 6);
// 	cout << s2 << endl;
// 	return 0;
//}


//substr（）和find（）经常是配合使用的，find 负责找到位置，substr 从这个位置向后获得字符串。  



//int main()
//{
//	string s = "hello world hello everyone";
//	size_t n = s.find("world"); 
//	string s1 = s.substr(n, 10);
//	
//	cout << s1 << endl;
//	return 0;
//}


//?持的关系运算
//string s1 = "abc";
//string s2 = "abcd";
//char s3[] = "abcdef"; //C风格的字符串
//(1) s1 == s2
//bool operator== (const string& lhs, const string& rhs);//使用方式：s1 == s2
//bool operator== (const char* lhs, const string& rhs);//使用方式：s3 == s1
//bool operator== (const string& lhs, const char* rhs);//使用方式：s1 == s3
//(2) s1 != s2
//bool operator!= (const string& lhs, const string& rhs);//使用方式：s1 != s2
//bool operator!= (const char* lhs, const string& rhs);//使用方式：s3 != s1
//bool operator!= (const string& lhs, const char* rhs);//使用方式：s1 != s3
//(3) s1 < s2
//bool operator< (const string& lhs, const string& rhs);//使用方式：s1 < s2
//bool operator< (const char* lhs, const string& rhs);//使用方式：s3 < s1
//bool operator< (const string& lhs, const char* rhs);//使用方式：s1 < s3
//(4) s1 <= s2
//bool operator<= (const string& lhs, const string& rhs);//使用方式：s1 <= s2
//bool operator<= (const char* lhs, const string& rhs);//使用方式：s3 <= s1
//bool operator<= (const string& lhs, const char* rhs);//使用方式：s1 <= s3
//(5) s1 > s2
//bool operator> (const string& lhs, const string& rhs);//使用方式：s1 > s2
//bool operator> (const char* lhs, const string& rhs);//使用方式：s3 > s1
//bool operator> (const string& lhs, const char* rhs);//使用方式：s1 > s3
//(6) s1 >= s2
//bool operator>= (const string& lhs, const string& rhs);//使??式：s1 >= s2
//bool operator>= (const char* lhs, const string& rhs);//使??式：s3 >= s1
//bool operator>= (const string& lhs, const char* rhs);//使??式：s1 >= s3



//#include <iostream>
//#include<string>
//using namespace std;
//int main()
//{
// 	string s1 = "hello world";
// 	string s2 = "hello";
// 	if (s1 == (s2 + " world")) 
// 	{
// 		cout << "s1 == s2" << endl;
// 	}
// 	else
// 	{
// 		cout << "s1 != s2" << endl;
// 	}
// 
// return 0;
//}






//#include <iostream>
//#include <string> 
//using namespace std;
//int main()
//{
// 	string s1 = "abcd";
// 	string s2 = "abbcdef";
// 	char s3[] = "bbc";
// 	if (s1 > s2)
// 		cout << "s1 > s2" << endl;
// 	else
// 		cout << "s1 <= s2" << endl;
// 	if (s1 == s2)
// 		cout << "s1 == s2" << endl;
// 	else
// 		cout << "s1 != s2" << endl;
// 	if (s1 <= s3)
// 		cout << "s1 <= s3" << endl;
// 	else
// 		cout << "s1 > s3" << endl;
// 	return 0;
//}



//stoi/stol

//int main()
//{
//	string s = "11x22";
//	size_t pos = 0;
//	int n = stoi(s, &pos, 10);
//	cout << n << endl; 
//	cout << "pos = " << pos << endl;
//	return 0;
// } 

//#include <iostream>
//#include<string> 
//using namespace std;
//int main()
//{
// 	size_t pos = 0;
// 	string s1 = "11x34";
// 	int ret1 = stoi(s1, &pos, 16);
// 	cout << ret1 << endl;
// 	cout << "pos:" << pos << endl;
// 	string s2 = "11x34";
// 	int ret2 = stoi(s2, &pos, 2);
// 	cout << ret2 << endl;
// 	cout << "pos:" << pos << endl;
// 	string s3 = "0x11x34";
// 	int ret3 = stoi(s3, &pos, 0);
// 	cout << ret3 << endl;
// 	cout << "pos:" << pos << endl;
// 	return 0;
//}


//stod/stof
//#include <iostream>
//#include<string> 
//using namespace std;
//int main()
//{
// 	string s = "3.14x456";
// 	double ret = stod(s, NULL);
// 	cout << ret << endl;
// 	return 0;
//}


//to_string

int main()
{
	string n = "pi is " + to_string(3.1415926);
	cout << n << endl;
	return 0;
}
