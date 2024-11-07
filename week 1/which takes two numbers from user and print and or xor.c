/*
 * main.c
 *
 * Created: 5/4/2021   
 *   
 * which takes two numbers from user and print and or xor
 *
 * Author: Mohamed Salah
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   unsigned int x,y;
   
   printf(" please enter both operandes ");
   
   scanf("%d\n %d", &x, &y) ;

     int andOperation= (x & y);

     int orOperation= (x | y);
    
     int xorOperation= (x ^ y);
    
  
   printf(" The result of And operation is:%d\n ", andOperation);
   
   printf(" The result of OR operation is :%d\n ", orOperation);
   
   printf(" The result of Xor operation is :%d\n ", xorOperation);
   
   

    return 0;

}