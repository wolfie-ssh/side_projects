#include <stdio.h>

int main(void)
{
    int i=0;
    int number=0;
    int total=0;
    int total_numbers=0;

    printf("How Many Numbers:  ");
    scanf("%d", &total_numbers);

    while (i<total_numbers)
    {
        printf("Enter NUmber: %d: ", i+1); // variable "i" is used as a counter to keep track of the amount of numbers the user has entered
        scanf("%d", &number); // number variable is used to store the input from the user
        total=total+number;
        i++;
    }
    printf("Total: %d\n", total);
    printf("Average: %d\n", total/total_numbers);
    return 0;
}