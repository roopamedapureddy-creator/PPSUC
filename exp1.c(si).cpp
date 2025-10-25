#include<stdio.h>
int main()
{
	int a,b,add,sub,multi,divi;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	add=a+b;
	printf("addition is:%d",add);
	sub=a-b;
	printf("subtraction is:%d",sub);
	multi=a*b;
	printf("multiplication is:%d",multi);
	divi=a/b;
	printf("division is:%d",divi);
	return 0;
}
