#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int input() {
  int n;
  printf("enter the 3 nos");
  scanf("%d", &n);
  return n;
}

int compare(int a, int b, int c) {
  int largest; // if else is used for checking any conditions.
  {
    if (a >= b && a >= c) {
      largest = a;
    } else if (b >= a && b >= c) {
      largest = b;
    } else {
      largest = c;
    }
  }
  return largest;
}

void output(int a, int b, int c, int largest) {
  printf(" the largest number is %d", largest);
}

int main() {
  int a, b, c;
  int largest;
  a = input();
  b = input();
  c = input();
  largest = compare(a, b, c);
  output(a, b, c, largest);
  return 0;
}





























//function prototype tells wheater the function call your typing goes through the proper no. of code

