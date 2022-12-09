#include<stdio.h>

int main()
{
  int a, b, sum;    //declaring the variables used in that main function.
  printf("enter two no's: \n");
  scanf("%d%d", &a,&b);
  sum = a + b;
  printf("The sum of %d and %d is %d", a, b, sum); //a,b,sum should mentioned to that %d belongs to which chracter.
}