/*
 * main.c
 *
 * Created:  5/4/2021  
 *   
 * Logic operations results
 *
 * Author: Mohamed Salah
 */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int x,y;
   
   printf(" please enter both operandes ");
   
   scanf("%d\n %d", &x, &y) ;

     _Bool andOperation= (x && y);

     _Bool orOperation= (x || y);
    
     _Bool xorOperation= (x != y);
    
  
   printf(" The result of And operation is:%d\n ", andOperation);
   
   printf(" The result of OR operation is :%d\n ", orOperation);
   
   printf(" The result of Xor operation is :%d\n ", xorOperation);
   
   

    return 0;

}