/*
 * main.c
 *
 * Created: 9/4/2021 
 *   
 * right rotating
 *
 * Author: Mohamed Salah
 */

#include  <stdio.h>


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
	scanf("%d", &arr[i]);
  }

	int rot_number; // defining how many element we will rotate

	printf(" by how many u want to rotate: "); 		// receving how many element we will rotate from user
	scanf("%d",& rot_number);


	printf("\nArray Before rotating  ");
	for (i = 0; i < arr_size; i++) 			// for looping to print the elements of the entered array
  {
	printf("%d \t", arr[i]);
  }


	// rotating process

	for(int j=1; j<= rot_number ; j++)
	{
	int temp = arr[arr_size - 1]; 			// defining a temp to store the last element in the array

	for (i =arr_size - 1; i >=1; i--)
	{
		arr[i] = arr[i - 1];

	}
	arr[i] = temp;
	}

// printing the array after rotating right by k times

   printf("\nArray After rotating right: ");
   for (i = 0; i < arr_size; i++) 			 	// for looping to print the elements of the array after rotating right by k times
   printf("%d ", arr[i]);

  return 0;

}
