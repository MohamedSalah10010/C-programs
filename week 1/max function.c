/*
 * main.c
 *
 * Created: 5/4/2021  
 *   
 * max function
 *
 * Author: Mohamed Salah
 */


#include <stdio.h>


 int max(int a, int b)
{
        int max;

        if (a>b)
          {
            max=a;
          }

        else
          {
            max= b;
          }

        return max;
}
int main() {


    int a, b ;

    printf("please enter 2 numbers:");

    scanf("%d\n%d",&a , &b);

    printf("The maximum number is: %d\n", max(a,b));

    return 0;
}
