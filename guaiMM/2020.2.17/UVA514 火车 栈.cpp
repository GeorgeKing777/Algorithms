//https://www.luogu.com.cn/problem/UVA514

#include<iostream>
#include<stack>
using namespace std;
int b[1005];
int main(){
	int n;
	stack<int> s;
						//int i=1,j=1;	//错误点 
	//cin>>n;
	while(cin>>n&&n!=0)
	{
		//for(int i=1;i<=n)
		while(1)
		{
			int i=1,j=1;				//正确赋值时机 
			cin>>b[1];
			if(b[1]==0)
				break;
			//else
			//{
				for(int i=2;i<=n;i++)
				{
					cin>>b[i];
				}
				//for(int j=1;j<=n;j++)
				while(j<=n)
				{
					if(b[i]==j)
					{
						i++;
						j++;
					}
					else
					{
						s.push(j++);
						//j++;
					}
					/*if(s.top()==b[i])
					{
						s.pop();
						i++;
					}*/
					//while(s.top()==b[i])
					while(!s.empty()&&s.top()==b[i])
					{
						i++; 
						s.pop();
						//i++;
					}
				}
				if(i<=n)	//因为前面会i++
					cout<<"No"<<endl;
				else
					cout<<"Yes"<<endl;
			//}
		}
		//cout<<endl;
	}
	return 0;
}
