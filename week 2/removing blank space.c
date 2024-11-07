/*
 * main.c
 *
 * Created: 9/4/2021 
 *   
 * removing blank space
 *
 * Author: Mohamed Salah
 */

#include <stdio.h>
# define Max 300
int main()
{
   char str[Max], temp[Max];
   int i ,j;
   i=j=0;
   
 // reciving string from user
   printf("Enter a text: ");
    gets(str);
    
    
 // while loop to loop until it hits the null character
   while (str[i] != '\0')
   {
      if (!(str[i] == ' ' && str[i+1] == ' ')) // if condition to detect the extra space
      {
        temp[j] = str[i]; // storing the string after deleting the extra space in a temp array
        j++;
      }
      i++;
   }
 
   temp[j] = '\0';
 
 
 // printing the final string
   printf("Text after removing extra spaces: %s\n", temp);
 
   return 0;
}