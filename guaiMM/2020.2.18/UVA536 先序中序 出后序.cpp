//https://www.luogu.com.cn/problem/UVA536

#include<iostream>
#include<string> 
using namespace std;

void postorder(string pre,string mid)
{
	if(pre.size()<=0)
		return;
	int len=0;
	len=mid.find(pre[0]);
	postorder(pre.substr(1,len),mid.substr(0,len));
	postorder(pre.substr(len+1),mid.substr(len+1));
	cout<<pre[0];
}

int main(){
	string preorder,midorder;
	while(cin>>preorder>>midorder)
	{
		postorder(preorder,midorder);
		cout<<endl;							//²»ÒªÍü¼Ç£¡ 
	}
	return 0;
}
