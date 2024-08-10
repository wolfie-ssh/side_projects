#include <stdio.h>

int main()

{
    int height;
    printf("Height: ");
    scanf("%d", &height);

    if(height != 160)
    printf("Height Not Equal To 160\n");
    else
    printf("Height Equal To 160\n");

    int weight;
    printf("Weight: ");
    scanf("%d", &weight);

    if(weight>70)
    printf("Above Weight Criteria\n");
    else 
    printf("Pass\n");

    return 0;
    }