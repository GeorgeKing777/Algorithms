//�ṩ�и�N-1��ÿ����и���ã�
//�и�һ��ľͷ�ķ������䳤����ȫ��ͬ 
//������и�ľ���˳���λ�� 

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
			Q.push(sum);		//����ǵý������ɺͽ���������� 
			total=total+t1+t2;
		}
		
	}
	cout<<total;
	
	return 0;
}
