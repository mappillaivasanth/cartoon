#include<stdio.h>
void main()
{
int a;
printf("Enter your desire number:  ");
scanf("%d",&a);
if(a<1)
{
    if(a==0)
printf("your given number is Zero");
else
printf("your given number is Negative");
}
else
printf("your given number is Positive");
}
