#include<stdio.h>
#include<math.h>
int main()
{
	int k,a[5]={10,20,30,50,60};
	scanf("%d",&k);
	k=100;
	int flag=0,i;
	for(i=0;i<k;i++)
	{
		if(k=a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Found");
	}
	else 
	{
		printf("Not found");
	}
}
