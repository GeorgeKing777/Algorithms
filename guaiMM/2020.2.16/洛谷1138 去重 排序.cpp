#include<bits/stdc++.h>
using namespace std;
int a[10000]; 
int main(){
	int n,k;
	int b,c;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//sort(a,a+n-1);
	sort(a,a+n);
	//b=unique(a,a+n-1);
	//c=b-a;
	//c=unique(a,a+n-1)-a;
	c=unique(a,a+n)-a;
	if(c<k)
		cout<<"NO RESULT";
	else
		cout<<a[k-1];
	return 0;
}
