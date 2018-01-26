#include<stdio.h>
void main()
{
int a;
float b,c;
printf("Enter the unit :  ");
scanf("%d",&a);
if(0>a<=50)
{
    
b=(a*0.5);
}
else if(50>a<=150)
{
    b=(50*0.5)+((a-100)*0.75);
}
else if(100>a<=250)
{
    b=(50*0.5)+(100*0.75)+((a-150)*1.2);
}
else if(a>250)
{
    b=(50*0.5)+(100*0.75)+(100*1.2)+((a-250)*1.5);
}
c=b+(b*0.2);
printf("your rate for that unit is  %f",c);
}
