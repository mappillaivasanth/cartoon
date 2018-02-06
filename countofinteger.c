#include <stdio.h>
int main()
{
    long long number;
    int count=0;
    printf("Enter an integer: ");
    scanf("%lld",&number);
    while(number!=0)
    {
        number/=10;
    count=count+1;
    }
    printf("count of integer is %d:",count);
    return 0;
}
