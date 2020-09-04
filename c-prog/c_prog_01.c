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

M


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



int main()
{

  printf("Hello, World\n"); // 1.1

  cel_to_far(); // 1.2

  // continue @ section 1.3
  
  return 0;
}


