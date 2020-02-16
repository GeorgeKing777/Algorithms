#include<iostream>
#include<stack>
using namespace std;
int main(){
	char c;
	stack<int> s;
	while(cin>>c&&c!='@'){
		if(c=='(')
			s.push(c);
		else if(c==')')
		{
			if(!s.empty())
				s.pop();
			else
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	if(s.empty())
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
