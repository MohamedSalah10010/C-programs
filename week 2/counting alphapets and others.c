/*
 * main.c
 *
 * Created: 9/4/2021 
 *   
 * counting alphapets and others
 *
 * Author: Mohamed Salah
 */

#include <stdio.h>

int main()
{
  	char str[100];
  	int i, alphabets, digits, special;
  	i = alphabets = digits = special = 0;

  	printf("\n Please Enter any String: ");
  	gets(str);

  	while (str[i] != '\0')
  	{
  		if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
  		{
  			alphabets++;
 		}
  		else if (str[i] >= '0' && str[i] <= '9')
  		{
  			digits++;
  		}
  		else
    		special++;
    	i++;
	}
    printf("\n Number of Alphabets in this String = %d", alphabets);
	printf("\n Number of Digits in this String = %d", digits);
	printf("\n Number of Special Characters in this String = %d", special);

  	return 0;
}
