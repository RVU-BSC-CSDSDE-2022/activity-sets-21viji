#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);


int input()
{
  int n;
  printf("enter a number");
    scanf("%d",&n);
  return 0
}

int sum_n_nos(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
      {
        sum=sum+i;
      }

  return sum;
}

void output(int n , int sum)
{
  printf("The sum of %d is %d\n",n, sum);
}

int main()
{
  int n, sum=0;
  n=input();
  sum=sum_n_nos(n);
  output(n, sum);
}
  
