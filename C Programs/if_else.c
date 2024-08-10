#include <stdio.h>

int main(void)
{   int grade=0;
    printf("Enter Grade: ");
    scanf("%d", &grade);

    if(grade>=50)
      {
        printf("Pass\n");
      }
    printf("If Statement Has Jumped Outside The Loop\n");
    return 0;
}