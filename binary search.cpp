#include<stdio.h>
int element_bin(int *a,int n,int x)
{
	int m,l,h;
	l=0,h=n-1;
	while(l<=h)
	{
		m=(l+h)/2;
	if (a[m]==x)
	{
	   return m;	
	}
	else if(a[m]>x)
	{
		h=m-1;
	}
	else if(a[m]<x)
	{
		l=m+1;
	}
}
    return -1;
}
int main()
{
	int a[100],x,i,n,r;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	r=element_bin(a,n,x);
	printf("%d",r);
}

