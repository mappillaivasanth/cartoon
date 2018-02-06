#include <stdio.h>

int main()
{
    int n,add=0;
    printf("Enter the natural number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        add=add+i;
        
    }
        printf("The addition upto that natural number is: %d",add);
        

    return 0;
}
