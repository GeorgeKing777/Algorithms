//�����С�ⲿ·�������ܺ� 

#include<bits/stdc++.h> 
using namespace std;

priority_queue<int,vector<int>,greater<int> >Q;
//�������У���Сֵ���� 

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
	while(Q.size()!=1)		//�����ֵΪ�ܺ� 
	{
		int t1,t2;
		t1=Q.top();		//ȡ����С����λ��� 
		Q.pop();
		t2=Q.top();
		Q.pop();
		sum=t1+t2;
		Q.push(sum);
		ans=ans+sum; 		//��ÿ����ֵ���ܺ� 
	}
	cout<<ans;
	return 0;
}
