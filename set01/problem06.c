#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);


int input()
{
int n;
printf("enetr three numbers");
if(scanf("%d",&n));
return n;
}  

void compare(int a, int b, int c, int*largest)
{ 
  if (a>=b && a>=c)
    *largest=a;
  if (b>=a && b>=c)
    *largest=b;
  else
    *largest=c;
}

void output(int a, int b ,int c, int largest)
{
printf("the largest=%d", largest);
} 

int main()
{
int a, b, c, largest;
a= input();
b= input();
c= input();
compare(a, b, c, &largest);
output(a, b, c, largest);
return 0;
}



/*#include <stdio.h> 
void compare(int *x, int *y, int *z) 
{ 
if(*x > *y && *x > *z) 
{ 
printf("%d is Greater", *x); 
} 
else if(*y > *z) 
{ 
printf("%d is Greater", *y); 
} 
else 
{ 
printf("%d is Greater", *z); 
} 
} 

int main() //definig all the functions.
{ 
int a, b, c; 
printf("Enter three numbers : "); 
scanf("%d%d%d", &a, &b, &c); 
compare(&a, &b, &c); 
return 0; 
}*/