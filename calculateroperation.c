#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter the value of a :");
scanf("%d",&a);
printf("Enter the value of b :");
scanf("%d",&b);
printf("Enter the value of c :");
scanf("%d",&c);
printf("add is 1\nsub is 2\nmul is 3\ndiv is 4\n");
printf("Enter your choice :");
scanf("%d",&d);
switch (d)
{
case 1:
  add(a,b,c);
break;
case 2:
  sub(a,b,c);
break;
case 3:
  mul(a,b,c);
break;
case 4:
  div(a,b,c);
break;
default: printf("please enter the number upto that choice");

}

}
int add(x,y,z)
{
int v;
v=(x+y+z);
printf("addition is %d\n",v);
}
int sub(x,y,z)
{
int v;
v=(x-y-z);
printf("subtaction is %d\n",v);
}
int mul(x,y,z)
{
int v;
v=(x*y*z);
printf("multiplication is %d\n",v);
}
int div(x,y,z)
{
float v;
v=(x/y/z);
printf("division is %f\n",v);
}
