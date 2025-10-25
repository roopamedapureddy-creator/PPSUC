#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,a,b;
	printf("sum and avg of 5 subjects");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	a=s1+s2+s3+s4+s5;
	printf("sum is:%d",a);
	b=a/5;
	printf("avg is:%d",b);
	return 0;
	}
