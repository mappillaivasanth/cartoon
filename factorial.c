#include <stdio.h>

int main()
{
    int num,fact=1;
    printf("Enter the number for Factorial :");
    scanf("\n%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
printf("Factorial of %d is %lld",num,fact);
    return 0;
}
