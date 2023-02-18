#include<stdio.h>
int input();                                       //defining
int add(int a, int b);
void output(int a, int b, int sum);


int main()            /*calling,no need to define,only excecution                          happens,predefined*/
{
  int a, b, sum;
  printf("enter two no's: ");
  a = input();
  b = input();
  sum = add(a, b);
  output(a, b, sum);
}

int input()            
{                        /*for pass by reference no need for                        //returning cause we use void and instead of                        return we use adress& and pointers.*/
  int a;
  scanf("%d", &a);
  return a;
}

int add(int a, int b)
{
  int sum;
  sum = a + b;
  return sum;
}
 void output(int a, int b, int sum){
   printf("The sum of %d and %d is: %d\n", a, b,sum);
   
