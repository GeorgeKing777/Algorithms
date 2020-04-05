/*#include<iostream>
using namespace std;
int Fib(int n){
	int result;
	if(n==1||n==2){
		return 1;
	}
	result=Fib(n-1)+Fib(n-2);
	return result;
}

int main(){
	int n;
	cin>>n;
	int result=Fib(n);
	cout<<result;
	return 0;
}*/


#include<iostream>
using namespace std;
int Fib(int n){
	if(n==1||n==2){
		return 1;
	}
	int last2=1;
	int last1=1;
	int result;
	for(int i=3;i<=n;i++)
	{
		result=last2+last1;
		last2=last1;
		last1=result;
	}
	return result;
}

int main(){
	int n;
	cin>>n;
	int result=Fib(n);
	cout<<result;
	return 0;
} 
