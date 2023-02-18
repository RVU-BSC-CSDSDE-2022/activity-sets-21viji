---#include <stdio.h>

struct complex //calling
{
  float real;  //members
  float imaginary;
};
typedef struct complex Complex;  //permanatly stroring..to avoid redeclaration


int get_n(); //size of array from user
Complex input_complex(); //takes input for one complex no.
void input_n_complex(int n, Complex c[n]); //inputs get stored in the array size
Complex add(Complex a, Complex b); //telling the procedure how to add real and imaginary values seperately and gives the sum to the computer.
Complex add_n_complex(int n, Complex c[n]);//impling the sum procedure ith the values we have given.
void output(int n , Complex c[n], Complex result);//to display the output


int main() 
{
  int n;
  Complex result={0,0}; //declaring the variable 'result'
  n=get_n(); //the size of the array is getting stored in the integer n
  Complex c[n]; //declaring c[n] variable to complex
  input_n_complex(n, c);//declaring the integer
  add_n_complex(n, c);//declaring the integer
  output(n, c, result);//declaring the integer
}
int get_n()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  return n;
}

Complex input_complex()
{
   Complex c;
   printf("Enter the real part\n");
    scanf("%f", &c.real);
    printf("Enter the imaginary part\n");
    scanf("%f", &c.imaginary);
  return c;
}

void input_n_complex(int n, Complex c[n])
{
  for(int i=0; i<n; i++)
    {
        c[i] =input_complex();
    }
}


Complex add(Complex a, Complex b)
{
    
    a.real=a.real+b.real;
    a.imaginary=a.imaginary+b.imaginary;
    return a;
}


Complex add_n_complex(int n, Complex c[n])
{
     Complex sum={0,0};
     for(int i=0; i<n; i++)
       {
         sum=add(sum, c[i]);
       }
  return sum;
}


void output(int n , Complex c[n], Complex result)
{
   printf("The sum is %f+%fi", result.real, result.imaginary);
}