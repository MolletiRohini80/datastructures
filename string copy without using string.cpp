#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i;
	printf("enter string s1: \n");
	scanf("%s",&s1);
	gets(s1);
	for(i=0;s1[i]!=0;i++)
	{
		s2[i]=s1[i];
	}
	printf("string s2:%s",s2);
}
