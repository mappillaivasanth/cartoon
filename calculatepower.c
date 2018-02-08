#include <stdio.h>

int main()
{
    int a,b,power=1;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the power for that number:");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("Power of %d^%d is %d",a,b,power);

    return 0;
}
