#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a;

    a = calloc(5, sizeof(5));
    printf("Initial Values: \n");
    for (int i = 0; i < 5; i++)          // printing values of array
        printf("a[%d] = %d\n", i, a[i]); // before initializing
    
    a[0]=1; //assigning values to the array
    a[1]=5;
    a[2]=7;
    a[3]=9;
    a[4]=11;

    printf("\nAssigned Values: \n");
    for (int i = 0; i < 5; i++)          // printing values of array
        printf("a[%d] = %d\n", i, a[i]); // after initializing

    free(a);

}