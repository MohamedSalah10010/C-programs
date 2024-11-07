/*
 * main.c
 *
 * Created: 9/4/2021 
 *   
 * Vowels and constants
 *
 * Author: Mohamed Salah
 */

#include <stdio.h>

int main()
{
  	char str[100];
  	int i, vowels, constants;
  	i = vowels =  constants = 0;

  	printf("\n Please Enter any String: ");
  	gets(str); // function to get all the string and white spaces

  	// while loop to compare every single element within the str[] as long as it doesn't eqaul null
	
	while (str[i] != '\0') 
  	{
  		if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'|| str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'|| str[i] == 'U') // to chech vowels
  		{
  			vowels++;
 		}

  		else
    		constants++; // to check constants

		i++;
	}

	// printing results

	printf("\n Number of Alphabets in this String = %d", vowels);
	printf("\n Number of Digits in this String = %d", constants);


  	return 0;
}
