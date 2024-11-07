/*
 * main.c
 *
 * Created: 9/4/2021 
 *   
 * Max_and_min_in_array
 *
 * Author: Mohamed Salah
 */

#include <stdio.h>
#define MAX 120 				// defining max length

int main()
{
    int arr[MAX]; 				// declaring an array
    int i, size, min, max;


    printf("Enter size of the array : ");	// reciving the size of the array from the user
    scanf("%d", &size);

    // reciving the elements of the array from user



    for(i=0; i<size; i++)
    {
        printf("Enter element %d in array : ",i+1);
        scanf("%d", &arr[i]);
    }

// initializing varibles to check the min and max

   min= arr[0];
   max= arr[0];

// for loop to determine the min and max using if statment

	for(i=0; i<size ; i++)
	{
		if (arr[i]> arr[0])
		{
			max= arr[i];
		}
		if (arr[i]< arr[0])
		{
			min= arr[i];
		}
	}

	// printing the min and max element in the array

	printf("Maximum element = %d\n", max);
	printf("Minimum element = %d", min);

    return 0;
}
