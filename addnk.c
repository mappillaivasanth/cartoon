#include<stdio.h>
int main()
{
  int K,N,sum=0;
  int array[100];
  printf("Enter the size of array:");
  scanf("%d",&N);
  printf("Enter the number that you want to add in that array:");
  scanf("%d",&K);
  printf("Enter the '%d' numbers to form the array:",N);
  for(int i=1;i<=N;i++)
  {
      scanf("%d",&array[i]);
  }
  for(int i=1;i<=K;i++)
  {
      sum=sum+array[i];
  }
  printf("The addition of first '%d' number in the given '%d' number is = %d",K,N,sum);
return 0;
}
