//4.1 【模板】栈

//#include <iostream>
//#include <string>
//using namespace std;
//
//typedef unsigned long long LL;
//const int N = 1e6 + 10;
//LL stk[N];
//int top;
//
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	while(T--)
//	{
//		//清空栈
//		top = 0;
//		
//		int n;
//		cin >> n;
//		while(n--)
//		{
//			string op;
//			cin >> op;
//			if(op == "push")
//			{
//				LL x;
//				cin >> x;
//				stk[++top] = x;
//			}
//			else if(op == "pop")
//			{
//				if(top == 0)
//					cout << "Empty" << endl;
//				else
//					top--;
//			}
//			else if(op == "query")
//			{
//				if(top == 0)
//					cout << "Anguei!" << endl;
//				else
//					cout << stk[top] << endl;
//			}
//			else
//			{
//				cout << top << endl;
//			}
//		} 
//		
//	}
//	return 0;
//}





//3.验证栈序列

//#include <iostream>
//#include <stack>
//using namespace std;
//const int N = 1e6 + 10;
//int n;
//int a[N], b[N];
//
//int main()
//{
//	char ch;
//	stack<int> sk;
//	int num = 0;
//	while(cin >> ch)
//	{
//		if(ch == '@')
//			break;
//		else if(ch == '.')
//		{
//			sk.push(num);
//			num = 0;
//		}
//		else if(ch <= '9' && ch >= '0')
//		{
//			num = num * 10 + ch - '0';
//		}
//		else
//		{
//			if(ch == '+')
//			{
//				int b = sk.top();sk.pop();
//				int a = sk.top();sk.pop();
//				sk.push(a + b);
//			}
//			else if(ch == '-')
//			{
//				int b = sk.top();sk.pop();
//				int a = sk.top();sk.pop();
//				sk.push(a - b);
//			}
//			else if(ch == '*')
//			{
//				int b = sk.top();sk.pop();
//				int a = sk.top();sk.pop();
//				sk.push(a * b);
//			}
//			else
//			{
//				int b = sk.top();sk.pop();
//				int a = sk.top();sk.pop();
//				sk.push(a / b);
//			}
//			
//		}
//	}
//	cout << sk.top() << endl;
//	return 0;
//}


//P1241 括号序列

#include <iostream>
#include <string>
#include <stack>
using namespace std;

const int N = 110;
bool st[N]; //st[i]来标记是否已经匹配 

int main()
{
	string s;
	stack<int> stk;
	cin >> s;
	for(int i = 0; i < s.size(); i++)
	{
		char ch = s[i];
		if(ch == '('|| ch == '[')
		{
			stk.push(i);
		}
		else
		{
			if(stk.empty()) continue;
			char sch = s[stk.top()];
			if((sch == '(' && ch == ')') || (sch == '[' && ch == ']'))
			{
				st[i] = true;
				st[stk.top()] = true;
				stk.pop();
			}
		}
	}
	
	string ret = "";
	for(int i = 0 ; i < s.size(); i++)
	{
		if(st[i])
		{
			ret += s[i];
			
		}
		else
		{
			if(s[i] == '('|| s[i] == ')') ret += "()";
			 
			if(s[i] == '['|| s[i] == ']') ret += "[]";
			
		}
	}
	cout << ret << endl;
	return 0;
}




