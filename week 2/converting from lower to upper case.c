/*
 * main.c
 *
 * Created: 9/4/2021 
 *   
 * converting from lower to upper case
 *
 * Author: Mohamed Salah
 */

#include<stdio.h>
#include<string.h>
#define max_element 2000

int main(){
   char str[max_element];
   int i;

   printf("Enter the string:");
   gets(str);

   for(i=0;i<=strlen(str);i++){
      if(str[i]>=97&&str[i]<=122)
      {
         str[i]=str[i]-32;
      }

   }
   printf("\nUpper Case String is: %s",str);
   return 0;
}
