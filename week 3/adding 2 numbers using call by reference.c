/*
 * main.c
 *
 * Created: 10/4/2021 
 *   
 * adding 2 numbers using call by reference
 *
 * Author: Mohamed Salah
 */

#include <stdio.h>

// declaration of the add function
double add(double *pointer1, double *pointer2)
{

    double sum= *pointer1 + *pointer2;
    return sum;
}

void main()
{
    double num1, num2, sum; // declarign variables
    // telling the user to enter the numbers
    printf("Enter the first number:");
    scanf("%lf",& num1);
    printf("\nEnter the second number:");
    scanf("%lf",& num2);
    //  calling the function add
    sum = add(&num1,&num2);
       
    printf("\nThe sum of %lf and %lf is %lf",num1,num2,sum);
    
}