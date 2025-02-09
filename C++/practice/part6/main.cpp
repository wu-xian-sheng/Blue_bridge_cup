#include <iostream>
using namespace std;
#include <string> 
#include <cctype> //isspace()头文件 
// 练习1：标题统计

//方法1：一次性读取整行字符，然后统计  

//int main()
//{
//	string s;
//	getline(cin , s);
//	int cint = 0;
//	for(auto e: s)
//	{
//		if(isspace(e))
//		{
//			continue;
//		}
//		else
//		{
//			cint++;
//		}
//	}
//	cout << cint << endl;
//	return 0;
//}

//方法2：按照单词读取  

//int main()
//{
//	string s;
//	int count = 0;
//	while(cin >> s)
//	{
//		count += s.size();
//	}
//	cout << count << endl;
//	return 0;
// } 


//练习2：石头剪子布  

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
// 	int n = 0;
// 	cin >> n;
// 	int i = 0;
//	string s1;
// 	string s2;
// 	while(n--)
// 	{
// 		cin >> s1;
// 		cin >> s2;
// 		if (s1 == s2)
// 			cout << "Tie" << endl;
// 		else if (s1 == "Rock" && s2 == "Scissors")
// 			cout << "Player1" << endl;
// 		else if (s1 == "Scissors" && s2 == "Paper")
// 			cout << "Player1" << endl;
// 		else if (s1 == "Paper" && s2 == "Rock")
// 			cout << "Player1" << endl;
// 		else
// 			cout << "Player2" << endl;
// 	}
// 	return 0;
//}


//密码翻译

//int main()
//{
//	string s;
//	getline(cin, s);
//	for(int i = 0; i < s.size(); i++)
//	{
//		if(s[i] <= 'z' && s[i] > 'a' || s[i] > 'A' && s[i] <= 'Z')
//		{
//			s[i]--;
//		}
//		else if(s[i] == 'a')
//		{
//			s[i] = 'z';
//		}
//		else if(s[i] == 'A')
//		{
//			s[i] = 'Z';
//		}
//		else
//		continue;
//	}
//	cout << s << endl;
//	return 0;
// } 


//练习4：文字处理软件  

//int main()
//{
//	int q; //循环几次 
//	int m;
//	string s;//原始字符串 
//	string str; //需要处理的数据
//	int a, b; 
//	cin >> q >> s;
//	while(q--)
//	{
//		cin >> m;
//		switch(m)
//		{
//			case 1:
//				cin >> str;
//				s += str;
//				cout << s << endl; 
//				break;
//			case 2:
//				{
//				cin >> a >> b;
//				string s1 = s.substr(a, b);
//				cout << s1 << endl;
//				break; 
//				}
//				
//			case 3:
//				cin >> a >> str;
//				s.insert(a, str);
//				cout << s << endl;
//				break;
//			case 4:
//				cin >> str;
//				size_t n = s.find(str);
//				if(n == string::npos)
//					cout << -1 << endl;
//				else
//					cout << n << endl;
//				break;
//		}
//	}
//	return 0;
//}

//练习5：单词的长度  

//int main()
//{
//	string s;
//	cin >> s;
//	cout << s.size();
//	while(cin >> s)
//	{
//		cout << ',' << s.size();
//	}
//	return 0;
//}

////还可以这样处理：
//
//int main()
//{
//	string s;
//	bool flag = true;
//	while(cin >> s)
//	{
//		if(flag == true)
//		{
//			cout << s.size();
//			flag = false;
//		}
//		else
//		{
//			size_t n = s.size();
//			cout << ',' << n;
//		}
//	}
//	return 0;
// } 

//单词翻转

//int main()
//{
//	string s;
//	while(cin >> s)
//	{
//		string::iterator it1 = s.begin();
//		for(auto it = s.end() - 1 ; it >= s.begin(); it--)
//		{
//			cout << *it;
//		}
//		cout << endl;
//	}
//	return 0;
//}


//reverse 会逆序范围 [first, last) 内的元素

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() 
//{
// 	//反转字符串
// 	string s("hello world");
// 	reverse(s.begin(), s.end());
// 	cout << s << endl;
// 	//反转数组
// 	int arr[] = { 2,6,3,6,5,5,3,9,3 };
// 	int size = sizeof(arr) / sizeof(arr[0]);
// 	//对数组中的元素进?反转
// 	reverse(arr, arr+size); 
// 	for (auto e : arr) 
// 	{
// 		cout << e << " ";
// 	}
// 	cout << endl;
// 	return 0;
//}


//练习7：判断字符串是否为回文  

//int main()
//{
//	string s;
//	getline(cin, s);
//	int left = 0;
//	int right = s.size() - 1;
//	while(left < right)
//	{
//		if(s[left] != s[right])
//		{
//			cout << "no" << endl;
//			return 0;
//		}
//		else
//		{
//			left++;
//			right--;
//		}
//			
//	}
//	cout << "yes" << endl;
//	return 0;
//}


//当然也可以将这个字符串逆序后和原字符串比较，看是否相等，如果相等就是回文字符串，否则就不是。代码也可以这样写：  

//#include <algorithm>
//int main()
//{
//	string s;
//	getline(cin, s);
//	string s1 = s;
//	reverse(s.begin(), s.end());
//	if(s == s1)
//		cout << "yes" << endl;
//	else
//		cout << "no" << endl;
//	return 0;
//}


//练习8：手机  


//int count[26] = {1,2,3, 1,2,3, 1,2,3, 1,2,3, 1,2,3, 1,2,3,4, 1,2,3, 1,2,3,4};
//int main()
//{
//	string s;
// 	int sum = 0;
//	getline(cin , s);
// 	for(auto c: s)
// 	{
// 		if(c == ' ')
// 		sum += 1;
// 	else
// 	sum += count[c - 'a'];
// 	}
// cout << sum << endl;
//
//	return 0;
//}

//练习9：口算练习题 

int main()
{
	int i = 0;
	string op;
	string last;//记录上一次的运算方式 
	cin >> i;
	
	while(i--)
	{
		string ans;
		int n1, n2;
		int r;//结果 
		cin >> op;
		if(op == "a" || op == "b" || op == "c") //有三个数据 
		{
			cin >> n1 >> n2;
			ans += to_string(n1);
			if(op == "a")
			{
				r = n1 + n2; 
				ans += "+";
				ans += to_string(n2);
				ans += "=";
				ans += to_string(r);
				
			 }
			 else if(op == "b")
			 {
			 	r = n1 - n2; 
				ans += "-";
				ans += to_string(n2);
				ans += "=";
				ans += to_string(r);
			 }
			 else
			 {
			 	r = n1 * n2; 
				ans += "*";
				ans += to_string(n2);
				ans += "=";
				ans += to_string(r);
			 }
			 last = op;
		}
		else //有两个数字 
		{
			ans += op;
			n1 = stoi(op);
			cin >> n2;
			
			if(last == "a")
			{
				r = n1 + n2; 
				ans += "+";
				ans += to_string(n2);
				ans += "=";
				ans += to_string(r);
				
			 }
			 else if(last == "b")
			 {
			 	r = n1 - n2; 
				ans += "-";
				ans += to_string(n2);
				ans += "=";
				ans += to_string(r);
			 }
			 else
			 {
			 	r = n1 * n2; 
				ans += "*";
				ans += to_string(n2);
				ans += "=";
				ans += to_string(r);
			 }
		}
		cout << ans << endl;
		cout << ans.size() << endl;
		
	}
	return 0;
}







