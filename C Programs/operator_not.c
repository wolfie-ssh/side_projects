#include <stdio.h>

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%d", &height);
    
    if (!(height>170))
    printf("You Are Tall\n");
    else 
    printf("You Are Short\n");
    return 0;
}
