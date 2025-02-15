
//# 1  [询问学号]
//#include <iostream>
//#include <vector>
//using namespace std;
//const int N = 2e6 + 10;
//int main()
//{
//	int n,m;
//	vector<int> a(N);
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	while(m--)
//	{
//		int x;
//		cin >> x;
//		cout << a[x] << endl;
//		
//	}	
//	return 0;
//}

//2.寄包柜
//#include <iostream>
//#include <vector>
//using namespace std;
//int n,q;
//const int N = 1e5 + 10;
//vector<int> a[N];//创建N个顺序表 
//
//int main()
//{
//	cin >> n >> q;
//	while(q--)
//	{
//		int op, i, j, k;
//		cin >> op >> i >> j;
//		if(op == 1)//存放 
//		{
//			if(a[i].size() <= j)
//			{
//				a[i].resize(j+1);
//			}
//			cin >> k;
//			a[i][j] = k;
//		}
//		else//查看 
//		{
//			cout << a[i][j] << endl; 
//		}
//	 }
//	return 0;
//}


//移动零

//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int cur = -1;
//        int i = 0;
//        for(; i < nums.size(); i++)
//        {
//            if(nums[i])
//            {
//                swap(nums[i], nums[cur+1]);
//                cur++;
//            }
//        }
//    }
//};


//75. 颜色分类

//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//    	int left = -1, cur = 0, right = nums.size(); 
//    	while(cur < right)
//    	{
//    		if(nums[cur] == 0)
//    		{
//    			swap(nums[left + 1], nums[cur]);
//    			cur++;
//    			left++;
//			}
//			else if(nums[cur] == 1)
//			{
//				cur++;
//			 } 
//			else
//			{
//				swap(nums[cur], nums[right - 1]);
//				right--;
//			}
//		}
//        
//    }
//};



//合并两个有序数组


//解法一：辅助数组 

//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    	
//		vector<int> tem(m + n);
//		int cur1 = 0, cur2 = 0, cur = 0;
//		while(cur1 < m && cur2 < n)
//		{
//			if(nums1[cur1] <= nums2[cur2])
//			{
//				tem[cur] = nums1[cur1];
//				cur++;
//				cur1++;
//			}
//			else
//			{
//				tem[cur] = nums2[cur2];
//				cur++;
//				cur2++;
//			}
//		}
//		
//		
//		//将剩余的加入辅助数组中； 
//		while(cur1 < m)
//		{
//			tem[cur] = nums1[cur1];
//			cur++;
//			cur1++;
//		}
//		while(cur2 < n)
//		{
//			tem[cur] = nums2[cur2];
//			cur++;
//			cur2++;
//		}
//		
//		
//		//copy回给nums1数组 
//		for(int i = 0; i < n + m; i++)
//		{
//			nums1[i] = tem[i];
//		}
//        
//    }
//};


//解法二：原地合并

//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    	//解法二：原地合并
//		int cur1 = m - 1, cur2 = n - 1, cur = m + n - 1;
//        while(cur1 >=0  && cur2 >= 0)
//        {
//        	if(nums1[cur1] <= nums2[cur2])
//        	{
//        		nums1[cur] = nums2[cur2];
//        		cur--;
//        		cur2--;
//			}
//			else
//			{
//				nums1[cur] = nums1[cur1];
//        		cur--;
//        		cur1--;
//			}
//		}
//		
//		while(cur2 >= 0)
//		{
//			
//				nums1[cur] = nums2[cur2];
//				cur--;
//				cur2--;
//		}
//    }
//};


//The Blocks Problem

#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int N = 35;
int n = 0;
vector<int> p[N];


typedef pair<int, int> PII; 


PII find(int a)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < p[i].size(); j++)
		{
			if(p[i][j] == a)
			{
				return {i, j};
			}
		}
	}
	
}


void clean(int x, int y)
{
	//把坐标x，y以上的木块归位 
	for(int i = y + 1; i < p[x].size(); i++)
	{
		int t = p[x][i];
		p[t].push_back(t);
	}
	p[x].resize(y + 1); 
}


void get(int x1, int y1, int x2)
{
	for(int j = y1; j < p[x1].size(); j++)
	{
		p[x2].push_back(p[x1][j]);
	}
	p[x1].resize(y1);
}


int main()
{
	cin >> n;
	
	//初始化 
	for(int i = 0; i < n; i++)
	{
		p[i].push_back(i);
	}
	
	string op1, op2;
	int a, b;
	while(cin >> op1 >> a >> op2 >> b)
	{
		//确定a，b坐标 
		PII pa = find(a);
		int x1 = pa.first;
		int y1 = pa.second;
		
		PII pb = find(b);
		int x2 = pb.first;
		int y2 = pb.second;
		
		
		if(x1 == x2) //操作不合法 
		continue;
		
		if(op1 == "move")
		{
			clean(x1, y1);//a上归位 
		}
		if(op2 == "onto")
		{
			clean(x2, y2);//b上归位 
		}
		get(x1, y1, x2); 
	}
	
	//打印输出
	for(int i = 0; i < n; i++)
	{
		cout << "i:";
		for(int j = 0; j < p[i].size(); j++)
		{
			cout << " " << p[i][j];
		}
		cout << endl;
		
	 } 
	
}


























