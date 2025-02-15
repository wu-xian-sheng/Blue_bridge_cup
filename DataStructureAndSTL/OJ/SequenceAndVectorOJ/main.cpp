
//# 1  [ѯ��ѧ��]
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

//2.�İ���
//#include <iostream>
//#include <vector>
//using namespace std;
//int n,q;
//const int N = 1e5 + 10;
//vector<int> a[N];//����N��˳��� 
//
//int main()
//{
//	cin >> n >> q;
//	while(q--)
//	{
//		int op, i, j, k;
//		cin >> op >> i >> j;
//		if(op == 1)//��� 
//		{
//			if(a[i].size() <= j)
//			{
//				a[i].resize(j+1);
//			}
//			cin >> k;
//			a[i][j] = k;
//		}
//		else//�鿴 
//		{
//			cout << a[i][j] << endl; 
//		}
//	 }
//	return 0;
//}


//�ƶ���

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


//75. ��ɫ����

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



//�ϲ�������������


//�ⷨһ���������� 

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
//		//��ʣ��ļ��븨�������У� 
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
//		//copy�ظ�nums1���� 
//		for(int i = 0; i < n + m; i++)
//		{
//			nums1[i] = tem[i];
//		}
//        
//    }
//};


//�ⷨ����ԭ�غϲ�

//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    	//�ⷨ����ԭ�غϲ�
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
	//������x��y���ϵ�ľ���λ 
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
	
	//��ʼ�� 
	for(int i = 0; i < n; i++)
	{
		p[i].push_back(i);
	}
	
	string op1, op2;
	int a, b;
	while(cin >> op1 >> a >> op2 >> b)
	{
		//ȷ��a��b���� 
		PII pa = find(a);
		int x1 = pa.first;
		int y1 = pa.second;
		
		PII pb = find(b);
		int x2 = pb.first;
		int y2 = pb.second;
		
		
		if(x1 == x2) //�������Ϸ� 
		continue;
		
		if(op1 == "move")
		{
			clean(x1, y1);//a�Ϲ�λ 
		}
		if(op2 == "onto")
		{
			clean(x2, y2);//b�Ϲ�λ 
		}
		get(x1, y1, x2); 
	}
	
	//��ӡ���
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


























