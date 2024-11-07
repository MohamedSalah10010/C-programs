/*
 * main.c
 *
 * Created: 9/4/2021 
 *   
 * Removing dublicates in array
 *
 * Author: Mohamed Salah
 */

#include <stdio.h>


int main ()
{
	int arr_size;

  // telling the user to determine the size of the array

	printf("Enter the size of the array: ");
	scanf("%d", &arr_size);

  // receving array's element's from the user

	int arr[arr_size];
	int i;						 // defining iteration

	for (i = 0; i < arr_size; i++)
  {
	printf("Enter element %d: ", i+1);
	scanf("%d", &arr[i]);
  }

	
	printf("\nArray Before deleting dublicates:  ");
	for (i = 0; i < arr_size; i++) 			// for looping to print the elements of the entered array
  {
	printf("%d \t", arr[i]);
  }

  // deleting the dublicates process using nested and if 

    for (i=0; i< arr_size-1; i++)
    {
        for (int j= i+1; j< arr_size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k= j; k< arr_size; k++)
                {
                    arr[k]= arr[k+1];
                }
                arr_size--;
                j--;
            }
        }
        
    }
// printing the array after deleting dublicates

   printf("\nArray After removing dublicates: ");
   
   for (i = 0; i < arr_size; i++) 			 	
    printf("%d\t", arr[i]);



  return 0;
}
