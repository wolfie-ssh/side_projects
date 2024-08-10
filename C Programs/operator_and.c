#include <stdio.h>

int main(void)

{
    int height;
    printf("Height: ");
    scanf("%d", &height);

    int weight;
    printf("Weight: ");
    scanf("%d", &weight);

    if (height > 160 && weight > 50)
    printf("Good To Ride\n");
    else printf ("Not Good Enough To Ride\n");
    return 0;

    
    }