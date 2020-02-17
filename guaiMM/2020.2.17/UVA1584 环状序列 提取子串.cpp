//https://www.luogu.com.cn/problem/UVA1584

#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	int len;
	string s;
	string mins; 
	string ss;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		len=s.length();
		mins=s;
		s=s+s;
		for(int j=1;j<len;j++)
		{
			ss=s.substr(j,len);
			if(ss<mins)
				mins=ss;
		}
	cout<<mins;
	}
	//cout<<mins;
	return 0;
}
