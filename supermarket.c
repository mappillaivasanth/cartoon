
#include <stdio.h>

int main()
{
    int paste=100,soap=51,masala=12,pen=5;
    int *b=&paste;
    int *c=&soap;
    int *d=&masala;
    int *e=&pen;
    int a;
    printf("paste =1\nsoap=2\nmasala=3\npen=4\n");
    printf("Enter your product number:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("paste rack number is %d and the amount is Rs %d",b,*b);
        break;
         case 2:
        printf("soap rack number is %d and the amount is Rs %d",c,*c);
        break;
         case 3:
        printf("masala rack number is %d and the amount is Rs %d",d,*d);
        break;
         case 4:
        printf("pen rack number is %d and the amount is Rs %d",e,*e);
        break;
        default:
        printf("Please check the number");
        
    }

    return 0;
}
