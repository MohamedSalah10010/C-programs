/*
 * main.c
 *
 * Created: 5/4/2021   
 *   
 * prime numbers
 *
 * Author: Mohamed Salah
 */



#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool primecheck(int input)
{
    for(int i = input-1; i>1; i-- )
    {
        if (input % i == 0)
         {
        return false;
         }
    }
     return true;

}    
    int main () 
{
	int input  ;

	scanf("%d", &input );
	
	 for ( int i = input ; i > 1 ; i--) 
	 { 
	   
	   bool check= primecheck(i);
	
		if (check)
		{	
 
		    printf("%d Is prime \n", i);
	
		}
	
	}
	
		return 0;
	
}