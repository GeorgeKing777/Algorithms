//输出最小外部路径长度总和 

#include<bits/stdc++.h> 
using namespace std;

priority_queue<int,vector<int>,greater<int> >Q;
//优先序列，最小值优先 

int main(){
	int n;
	int x;
	int sum=0;
	int ans=0; 
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		Q.push(x);
	}
	while(Q.size()!=1)		//最后存的值为总和 
	{
		int t1,t2;
		t1=Q.top();		//取出最小的两位相加 
		Q.pop();
		t2=Q.top();
		Q.pop();
		sum=t1+t2;
		Q.push(sum);
		ans=ans+sum; 		//求每步和值的总和 
	}
	cout<<ans;
	return 0;
}
