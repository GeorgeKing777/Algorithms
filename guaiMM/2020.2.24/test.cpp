//��������ַ��� ��������������
//i love you -> you love i 

#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
	string s;
	//string x;
	char c;
	stack<int> t;
	int j=0;
	char temp;
	getline(cin,s);
	//cout<<s[0]<<endl;
	for(int i=s.length()-1;i>=0;i--)
	{
		c=s[i];
		if(c!=' ')
		{
			t.push(c);
		}
		else
		{
			while(!t.empty())
			{
				temp=t.top();
				cout<<temp;
				t.pop();
			}
			cout<<' ';
		}
		
		
		//x[j]=s[i];
		//j++;
	}
	while(!t.empty())						//�������⣡�� ԭ�����һ�����ʴ���ջ�� �޷������ԭ�� 
			{
				temp=t.top();
				cout<<temp;
				t.pop();
			}
	/*for(int i=0;i<x.length();i++)
	{
		if()
	}*/
	return 0;
}
