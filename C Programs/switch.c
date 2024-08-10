#include <stdio.h>
int main(void)
 {
    int number=0;
    printf("Enter a number greater than 0 less than 5: ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("This is one\n");
        break;
    case 2:
        printf("This is two\n");
        break;
    case 3:
        printf("This is three\n");
        break;
    case 4:
        printf("This is four\n");
        break;
    case 5:
        printf("This is five\n");
        break;

    default: 
        printf("Invalid Entry\n");
    }
 }