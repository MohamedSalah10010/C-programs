/*
 * main.c
 *
 * Created: 9/4/2021 
 *   
 * store n elements in an array and print the elements using pointers
 *
 * Author: Mohamed Salah
 */

#include <stdio.h>

int main(){
    int arr_size,arr[arr_size];
    int *p=arr;
    
    printf("Enter the size of the array:");
    scanf("%d",&arr_size);
   
    for (int i=0; i<arr_size;i++)
    {
        printf("Enter number %d:", i+1);
        scanf("%d",& *p);
        p++;
    }
    p=arr;
    
    printf("The numbers in the array are:\t");
    for (int i=0; i< arr_size; i++)
    {
        printf("%d\t", *p);
        p++;
    }
    
    
}