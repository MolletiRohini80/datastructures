#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float perc;
};
int main()
{
	struct student s1={219,"rohini",80.1};
	struct student s2;
	scanf("%d%s%f",&s1.id,s1.name,&s1.perc);
	printf("%d\t%s\t%f\n",s1.id,s1.name,s1.perc);
	printf("%d\t%s\t%f",s2.id,s2.name,s2.perc);
	struct student s3;
	scanf("%d%s%f",&s3.id,s3.name,&s3.perc);
	printf("%d\t%s\t%f\n",s3.id,s3.name,s3.perc);
	struct student s4;
	scanf("%d%s%f",&s4.id,s4.name,&s4.perc);
	printf("%d\t%s\t%f\n",s4.id,s4.name,s4.perc);
	struct student s5;
	scanf("%d%s%f",&s5.id,s5.name,&s5.perc);
	printf("%d\t%s\t%f\n",s5.id,s5.name,s5.perc);
	struct student s6;
	scanf("%d%s%f",&s6.id,s6.name,&s6.perc);
	printf("%d\t%s\t%f\n",s6.id,s6.name,s6.perc);
	struct student s7;
	scanf("%d%s%f",&s7.id,s7.name,&s7.perc);
	printf("%d\t%s\t%f\n",s7.id,s7.name,s7.perc);
	struct student s8;
	scanf("%d%s%f",&s8.id,s8.name,&s8.perc);
	printf("%d\t%s\t%f\n",s8.id,s8.name,s8.perc);
	struct student s9;
	scanf("%d%s%f",&s9.id,s9.name,&s9.perc);
	printf("%d\t%s\t%f\n",s9.id,s9.name,s9.perc);
}
