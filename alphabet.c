#include<stdio.h>
int main()
{
  char b;
  printf("Enter the character: ");
  scanf("%c",&b);
  if((b>='a'&& b<='z')||(b>='A'&& b<='Z'))
  {
      printf("It is Alphabet");
  }
  else
  {
      printf("It is not Alphabet");
  }
return 0;
}
