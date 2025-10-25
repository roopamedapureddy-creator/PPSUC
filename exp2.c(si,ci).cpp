#include<stdio.h>
int main()
{
    int u,t,a;
    float s;
    printf("enter u,t,a values");
    scanf("%d%d%d",&u,&t,&a);
    s=u*t+(a*t*t)/2;
    printf("distance is:%f",s);
	return 0;
}
