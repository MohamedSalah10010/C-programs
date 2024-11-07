/*
 * main.c
 *
 * Created: 9/4/2021 
 *   
 * deleting_number_in_array
 *
 * Author: Mohamed Salah
 */

#include <stdio.h>
#define MAX 120

int main()
{
    int arr[MAX];
    int i, size, pos;


    printf("Enter size of the array : ");
    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        printf("Enter element %d in array : ", i+1);
        scanf("%d", &arr[i]);
    }


    printf("Enter the element position to delete : ");
    scanf("%d", &pos);



    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {

        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;


        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
