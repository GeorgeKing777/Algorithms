#include<iostream>
using namespace std;
//int a[7];
bool a[35];
int c[10];
int main(){
	int n;
	int x,y;
	int count=0;
	cin>>n;
	for(int i=1;i<=7;i++)
	{
		//cin>>a[i];
		cin>>x;
		a[x]=1;
	}
	for(int i=1;i<=n;i++)
	{
		count=0;
		for(int j=1;j<=7;j++)
		{
			cin>>y;
			if(a[y]==1)
				count++;
			//cout<<"!!"<<count<<" ";
		}
		c[7-count]++;
		//c[count]++;
	}
	for(int i=0;i<7;i++)
	{
		cout<<c[i]<<" ";
	}
	/*for(int i=7;i>=1;i--)
	{
		cout<<c[i]<<" ";
	}*/
	return 0;
}
