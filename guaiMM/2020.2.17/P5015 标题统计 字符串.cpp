//https://www.luogu.com.cn/problem/P5015

#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int count=0;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=' ')
			count++;
	}
	cout<<count; 
	return 0;
}
