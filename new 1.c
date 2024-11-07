/*
 * main.c
 *
 * Created: 23/4/2021 
 *   
 * swapping in cyclic order
 *
 * Author: Mohamed Salah
 */


#include <stdio.h>

void swap(int *num1, int *num2, int *num3) {
    int temp;
    // swapping in cyclic order
    temp = *num2;
    *num2 = *num1;
    *num1 = *num3;
    *num3 = temp;
}

int main() {
    int a, b, c;

    printf("Enter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    swap(&a, &b, &c);

    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}
