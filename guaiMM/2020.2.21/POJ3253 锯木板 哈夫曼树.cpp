//提供切割N-1块每块的切割费用，
//切割一块木头的费用与其长度完全相同 
//需决定切割木板的顺序和位置 

#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int> >Q;

int main(){
	int n;
	int x;
	int t1,t2;
	int sum;
	int total=0;
	cin>>n;
	if(n==1)
	{
		cin>>x;
		total=x;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			cin>>x;
			Q.push(x);
		}
		while(Q.size()!=1)
		{
			t1=Q.top();
			Q.pop();
			t2=Q.top();
			Q.pop();
			sum=t1+t2;
			Q.push(sum);		//必须记得将新生成和结点放入队列中 
			total=total+t1+t2;
		}
		
	}
	cout<<total;
	
	return 0;
}
