/*
Notes and code from: The C Programming Language (2nd edition)

Chapter 1: A Tutorial Introduction

Writing the hello world program

1.3

Programs contain functions and variables.
Functions have statements and variables store values.
Every C program must have a main function, which will usually call other
functions to accoplish its task.
#include will incorporate other files into the program via preprocessing by the compiler.
Functions can communicate data through arguments which are declared at the
definition of such function.

1.4

Symbolic constants: 

1.5

*/

#include "stdio.h"

void cel_to_far()
{

  int  top, bottom, step;
  float celsius, farenheit;
  
  bottom = 0;
  top = 300;
  step = 20;
  celsius = bottom;  

  printf("Celsius\tFarenheit\n");

  while (celsius <= top)
  {
	farenheit = celsius * 9.0 / 5.0 + 32.0;
	printf("%3.0f\t%6.1f\n", celsius, farenheit);
	celsius = celsius + step;
  }
  
}

// symbolic constants, these are not variables, the values cannot be changed
#define UPPER 300
#define LOWER 0
#define STEP 20

void table()
{
  int fahr;
  
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
	{
	  printf("%3d\t%6.1f\n",fahr, (5.0/9.0)*(fahr-32));
	}
}

void cat_clone()
{
  int c;
  
  while ((c = getchar()) != EOF)
	{
	  putchar(c);
	}
  
  printf("EOF: %i\n", c); //EOF = -1 ...
  
}

int main(void)
{
  // 1.1 printf("Hello World\n");
  // 1.2  cel_to_far();
  // 1.3 - 1.4 table();
  // section 1.5
  cat_clone(); // pipe text stream into ./a.out to print text
  //continue 1.5.2

  return 0;
}
