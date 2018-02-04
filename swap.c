#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a,b: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
int swap(a,b)
{
a=(a+b);
b=(a-b);
a=(a-b);
printf(" Now the values a=%d and b=%d",a,b);


    return 0;
}
