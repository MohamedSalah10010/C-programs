/*
 * main.c
 *
 * Created: 5/4/2021  
 *   
 * printing statment depending on the character
 *
 * Author: Mohamed Salah
 */




/*implement program which takes char from the user and print the
Following statements A,a : Hello

B,b : Hello from the other side
C,c : Goodbye*/

#include <stdio.h>


int main()
{
	char input;
	
	printf("please enter a character ( a or b or c): ");
	\
	scanf ("%c", & input);
	
		if ((input== 'A') || (input== 'a'))
		{
			printf("Hello\n");
			printf("%c", input);
		}
	
		else if ((input== 'B') || (input== 'b'))
		{
			printf("welcom from the other side\n");
			printf("%c", input);
		}
	
		else if ((input== 'c') || (input== 'C'))
		{
			printf("Goodbye\n");
			printf("%c", input);
	
	    
		}
	
		else{
			printf("invalid input");
		}
	
	
	return 0;


}