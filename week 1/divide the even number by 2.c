/*
 * main.c
 *
 * Created: 5/4/2021 
 *   
 * divide the even number by 2
 *
 * Author: Mohamed Salah
 */


#include <stdio.h>

main() {

   unsigned int a ;
   int c = 0;      
   
   printf("please enter an even number: ");
   
   scanf("%d", &a);
   
if ((a|1)>a){
    
    c = a >> 1 ;       
   printf("%d /2 = %d\n", a,c );
    
            }
else
    {
   c = a >> 1 ;      
   printf("%d is odd\n%d /2= %d\nThe reminder is 1", a,a,c );
    }
}