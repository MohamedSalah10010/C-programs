/*
 * main.c
 *
 * Created: 5/4/2021  
 *   
 * factorial
 *
 * Author: Mohamed Salah
 */







/*1- Int factorial(int numb); to calculate factorial of integer*/
#include <stdio.h>

int factorial(int numb)
{
  int result = 1;

  for (int i = 1; i <= numb; i++)
   {
       result *= i;
   }
    return result;
   }

int main()
{
	int x;

	printf("please enter a number: ");

	scanf("%d", & x);

	printf(" %d ! = %d", x,factorial(x));

return 0;
}
