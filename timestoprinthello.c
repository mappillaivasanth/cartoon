#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter the number that you want to print 'Hello' :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("Hello\n");
    }
    return 0;
}
