#include <stdio.h>

int main()
{
    int n,mul=1;
    printf("Enter the number for multiply first 5 times : ");
    scanf("%d",&n);
    printf("The multiplication of %d upto first 5 times are \n",n);
    for(int i=1;i<=5;i++)
    {
        mul=i*n;
        printf("%d\t",mul);
    }
    
    
    
    return 0;
}
