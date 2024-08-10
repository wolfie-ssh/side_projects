#include <stdio.h>
int main()
{
    int number=10;
    int max=-1;

    while (number != -1)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > max) max=number;
        printf("Max: %d\n", max);
    }
    printf("Maximum Number is: %d\n", max);
}