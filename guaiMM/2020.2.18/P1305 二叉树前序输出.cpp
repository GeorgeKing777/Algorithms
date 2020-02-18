//https://www.luogu.com.cn/problem/P1305

#include<iostream>
#include<string>
using namespace std;
int l[100],r[100];

void preorder(int t)
{
	if(t!='*'-'a')
	{
		cout<<char(t+'a');
		preorder(l[t]);
		preorder(r[t]);				//不能同名 
	}
}

int main(){
	int n;
	string s;
	int root;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(i==0)
			root=s[0]-'a';
		l[s[0]-'a']=s[1]-'a';
		r[s[0]-'a']=s[2]-'a';
	}
	preorder(root);
	return 0;
}
