//https://www.luogu.com.cn/problem/P3884

#include<iostream>
using namespace std;
int father[100+5],deep[100+5],width[100+5];

int lca(int l,int h)
{
	//if(deep[l]>deep[h])			//�������⣡�� 
	//���low�ͽ��high 
	if(deep[l]<deep[h])
		swap(l,h);
	while(deep[l]!=deep[h])
	{
		l=father[l];			//low����һ��,ֱ���������ƽ�� 
	}
	if(l==h)
		return l;
	while(father[l]!=father[h])
	{
		l=father[l];			//���˶�����һ�� 
		h=father[h];
	}
	return father[l];
}

int main(){
	int n;
	int u,v;
	int maxd=1,maxw=0;
	deep[1]=1;				//���ڵ����Ϊ1 
	width[1]=1;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		cin>>u>>v;		//u��v�ĸ��� 
		father[v]=u;
		deep[v]=deep[u]+1;
		width[deep[v]]++;		//���Ϊn�Ľڵ���++
		if(maxd<deep[v])
			maxd=deep[v]; 
	}
	for(int i=1;i<=maxd;i++)
	{
		if(maxw<width[i])
			maxw=width[i];
	}
	cout<<maxd<<endl<<maxw<<endl;
	
	cin>>u>>v;
	int ans;
	ans=(deep[u]-deep[lca(u,v)])*2+deep[v]-deep[lca(u,v)];
	cout<<ans;
	//cout<<deep[lca(u,v)];
	return 0;
}
