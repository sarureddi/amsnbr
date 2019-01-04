# amsnbr
#include<stdio.h>
#include<conio.h>
int ams
{
int a,b,c,d,e,f;
printf("enter the value");
scanf("%d",&a);
b=(a%10);
c=(a/10)%10;
d=a/100;
e=(d*d*d)+(c*c*c)+(b*b*b);
if(a==e)
{
printf("the given number is amstrong");
}
else
{
printf("the given number is not an amstrong");
}
return 0;
