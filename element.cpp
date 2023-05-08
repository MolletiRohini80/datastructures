#include<stdio.h>
int element(int *a,int n,int x )
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			return i;
		}
	}
	 return -1;
}
int main()
{
	int a[100],x,n,i,r;
	scanf("%d",&n);
	printf("array elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	printf("enter a number");
	scanf("%d",&x);
	r=element(a,n,x);
	printf("%d",r);
}
