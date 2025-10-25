#include<stdio.h>
int main()
{
    float f,c;
    printf("enter f,c values");
    scanf("%f",&f);
    c=(f-32)*5/9;
    f=(c+32)*9/5;
    printf("celcius to fahrenheit is:%f\n",f);
    printf("fahrenheit to celcius is:%f\n",c);
	return 0;
}
