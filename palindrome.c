#include <stdio.h>

int main()
{
    int num,rev=0,rem,temp;
    printf("Enter the number:");
    scanf("%lld",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(rev==num)
        printf("It is a palindrome");
    else
         printf("It is not a palindrome ");

    return 0;
}
