#include <iostream>
#include <string>
using namespace std;


//String�����ַ��� 
//int main()
//{
// 	string s1;
// 	string s2 = "hello world";
// 	cout << "s1:" << s1 << endl; //s1:
// 	cout << "s2:" << s2 << endl; //s2��hello world
// return 0;
//}

//string s("hello world"); //��ͬ��string s1 = "hello world";
//string s1 = s; //��һ���ֳɵ��ַ���s����ʼ������һ���ַ���s1


//string���͵��ַ����������ֱ�Ӹ�ֵ

//int main()
//{
//	string s1("hello world");
//	string s2("he he");
//	s2 = s1;
//	cout << s2 << endl;
//	return 0;
//}




//string�ַ���������  


//cin

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
// 	string s;
// 	//���� 
// 	cin >> s;
// 	//���
// cout << s << endl;
// 
// return 0;
//}



//getline



//��һ�� 
//#include <string>
//int main()
//{
//	string name;
//	getline(cin,name);
//	cout << name << endl;
//	return 0;
// } 


//�ڶ���getline(cin, string str, char delim)

//����2
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


//string ���͵��ַ����ǿ���ͨ���±���ʵ�

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



//������

//- **begin����**������ָ���ַ�����һ���ַ��ĵ���������Ҫһ���������ı��������ա�  
//
//- **end����**������ָ���ַ������һ���ַ�����һ��λ�õĵ���������λ�ò������ַ�������   
//
//string �� begin(����end(�����صĵ������������� **string::iterator**  


//int main()
//{
//	string s = "abcdef";
//	string::iterator it1 = s.begin();
//	string::iterator it2 = s.end();
//	cout << *it1 << endl;
//	cout << *(it2-1) << endl;
//	return 0;
// } 
 
 
// ������+-
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



//���������������� 


//int main()
//{
//	string s = "abcdef"; 
//	//auto it ���ñ�����?���Ƶ�it������
//	for(auto it = s.begin() ; it < s.end() ; it++)
//	{
//		cout << *it << " ";
//	}
//	
//	cout << endl;
//	//string::iterator ���������������
// 	//string::iterator it����ֱ�Ӵ�����������it������ַ����ĵ�����
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


//ͨ���������ҵ�Ԫ�غ󣬸ı������ָ���Ԫ�أ��ǿ���ֱ�Ӹı��ַ������ݵġ�

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
//#include<string> //���stringͷ?��
//using namespace std;
//int main()
//{
// 	//����ַ�����β���ַ�
// 	string s;
// 	s.push_back('h');
// 	s.push_back('e');
// 	s.push_back('l');
// 	s.push_back('l');
// 	s.push_back('o');
// 	cout << s << endl;
// 	
// 	
//    //��ǿ��ַ�����β���ַ�
// 	string s1 = "hello ";
// 	s1.push_back('w');
// 	s1.push_back('o');
// 	s1.push_back('r');
// 	s1.push_back('l');
// 	s1.push_back('d');
// 	cout << s1 << endl;
// 	//���������ַ�
// 	string s2;
// 	for (char c = 'a'; c <= 'f'; c++)
// 	{
// 		s2.push_back(c);
// 	}
// 	cout << s2 << endl;
// 	return 0;
// }


//2.6�ַ����� += �� + ����  

//#include <iostream>
//#include <string> //���stringͷ?��
//using namespace std;
//int main()
//{
// 	string s = "hello";
// 	s += " world"; //�ַ���?˫���ţ��ȼ��� s = s + " world"
// 	cout << s << endl;
// 
// 	//����+=������Ҳ����ʹ?'+'����?�ַ���ƴ��
// 	//1.β��ƴ��
//
// 	string s1 = "hello";
// 	cout << s1 + " world" << endl; //s1��Ȼ��"hello"
// 
// 	s1 = s1 + " world";
// 	cout << s1 << endl; //s1��"hello world"
// 
// 
// 	//2.ͷ��ƴ��
// 	string s2 = "hello";
// 	s2 = "world " + s2 ; 
// 	cout << s2 << endl; //s2Ϊ��"world hello"
// 
// 	return 0;
//}


//pop_back();

//int main()
//{
// 	string s = "hello";
// 	cout << "s:" << s << endl;
// 	//βɾ
// 	s.pop_back();
// 	cout << "s:" << s << endl;
// 	//βɾ
// 	s.pop_back();
// 	cout << "s:" << s << endl;
// 	return 0;
//}


// ���ǵ��ַ�����û���ַ���ʱ���ٵ��� pop_back����ʱ�����������쳣��**������ΪҲ��δ������Ϊ��Ҫ������ôʹ��**


//#include <iostream>
//#include <string> //���stringͷ�ļ�
//using namespace std;
//int main()
//{
// 	string s;
// 	s.pop_back();
// 	return 0;
//}

//�Ľ��� 

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


////posλ��ǰ?��??��string�ַ���
//int main()
//{
//	string s = "abcdefghi";
//	string str = "xxx";
//	cout << s << endl;
//	s.insert(3,str);
//	cout << s << endl;
//	return 0;
// } 


//posλ��ǰ�����һ��C�����ַ���

//int main()
//{
//	string s = "abcdefghi";
// 	cout << s << endl;
// 	s.insert(3, "xxx");
// 	cout << s << endl;
//	return 0;
//}


//posλ��ǰ�����n���ַ�c

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
////����string���͵��ַ���str��Ĭ���Ǵ�ͷ��ʼ���ң�pos����ָ��λ�ÿ�ʼ
//
//size_t find (const char* s, size_t pos = 0) const;
////����C?����ַ���s��Ĭ���Ǵ�ͷ��ʼ���ң�pos����ָ��λ�ÿ�ʼ
//
//size_t find (const char* s, size_t pos, size_t n) const;
////���ַ�����pos���λ�ÿ�ʼ����C?����ַ���s�е�ǰn���ַ���
//
//size_t find (char c, size_t pos = 0) const;
////�����ַ�c��Ĭ���Ǵ�ͷ��ʼ��pos����ָ��λ�ÿ�ʼ


//����1
//#include <iostream>
//#include <string> //���stringͷ�ļ�
//using namespace std;
//int main()
//{
// 	string s = "hello world hello everyone";
// 	string str = "llo";
// 	//����string���͵��ַ���
// 	size_t n = s.find(str);
// 	cout << n << endl;
// 
//	n = s.find(str, n + 1); //��n+1���ָ��λ�ÿ�ʼ����
// 	cout << n << endl;
// 
// 	//����C�����ַ���
// 	n = s.find("llo");
// 	cout << n << endl;
// 
// 	n = s.find("llo", n + 1); //��n+1���ָ��λ�ÿ�ʼ����
// 	cout << n << endl;
// 
// 	return 0;
//}




//����2
//#include <iostream>
//#include <string> //���stringͷ�ļ�
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



//����3
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


//��ӡnpos

//#include <iostream>
//#include <string> //���stringͷ�ļ�
//using namespace std;
//int main()
//{
// 	//ע�⣺npos��string�ж���ģ�ʹ?npos��Ҫ����string::ָ����string���е�
// 	cout << "npos:" << string::npos << endl; 
// 	cout << "npos:" << (int)string::npos << endl; //����npos��size_t�����ͣ�����ֱ�Ӵ�ӡ����һ���ܴ����������ʵ��-1 
// 	return 0;
//}
 
 
 
//int main()
//{
//	string s = "hello world hello everyone";
//	size_t n = s.find("wu");
//	if(n == string::npos)
//	{
//		cout << "�Ҳ���" << endl; 
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�n = " << n << endl; 
//	}
//	return 0;
// } 



//substr()

//#include <iostream>
//#include<string> //���stringͷ�ļ�
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


//substr������find�������������ʹ�õģ�find �����ҵ�λ�ã�substr �����λ��������ַ�����  



//int main()
//{
//	string s = "hello world hello everyone";
//	size_t n = s.find("world"); 
//	string s1 = s.substr(n, 10);
//	
//	cout << s1 << endl;
//	return 0;
//}


//?�ֵĹ�ϵ����
//string s1 = "abc";
//string s2 = "abcd";
//char s3[] = "abcdef"; //C�����ַ���
//(1) s1 == s2
//bool operator== (const string& lhs, const string& rhs);//ʹ�÷�ʽ��s1 == s2
//bool operator== (const char* lhs, const string& rhs);//ʹ�÷�ʽ��s3 == s1
//bool operator== (const string& lhs, const char* rhs);//ʹ�÷�ʽ��s1 == s3
//(2) s1 != s2
//bool operator!= (const string& lhs, const string& rhs);//ʹ�÷�ʽ��s1 != s2
//bool operator!= (const char* lhs, const string& rhs);//ʹ�÷�ʽ��s3 != s1
//bool operator!= (const string& lhs, const char* rhs);//ʹ�÷�ʽ��s1 != s3
//(3) s1 < s2
//bool operator< (const string& lhs, const string& rhs);//ʹ�÷�ʽ��s1 < s2
//bool operator< (const char* lhs, const string& rhs);//ʹ�÷�ʽ��s3 < s1
//bool operator< (const string& lhs, const char* rhs);//ʹ�÷�ʽ��s1 < s3
//(4) s1 <= s2
//bool operator<= (const string& lhs, const string& rhs);//ʹ�÷�ʽ��s1 <= s2
//bool operator<= (const char* lhs, const string& rhs);//ʹ�÷�ʽ��s3 <= s1
//bool operator<= (const string& lhs, const char* rhs);//ʹ�÷�ʽ��s1 <= s3
//(5) s1 > s2
//bool operator> (const string& lhs, const string& rhs);//ʹ�÷�ʽ��s1 > s2
//bool operator> (const char* lhs, const string& rhs);//ʹ�÷�ʽ��s3 > s1
//bool operator> (const string& lhs, const char* rhs);//ʹ�÷�ʽ��s1 > s3
//(6) s1 >= s2
//bool operator>= (const string& lhs, const string& rhs);//ʹ??ʽ��s1 >= s2
//bool operator>= (const char* lhs, const string& rhs);//ʹ??ʽ��s3 >= s1
//bool operator>= (const string& lhs, const char* rhs);//ʹ??ʽ��s1 >= s3



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
