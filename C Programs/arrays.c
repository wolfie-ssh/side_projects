#include <stdio.h>
int main(void) 

    {
    int grade[] = {92, 85, 72, 73, 95} ;
    printf("Test Out of bound array: %d\n", grade[2]);
    grade[2]=grade[2]+18;
    
        for(int i=0;i<5;i++)
        printf("Grade[%d]=%d\n", i, grade[i]);

    int total=0;
    for (int i=0; i<5;i++)
        total+=grade[i];
    printf("average of the grades is %d\n", total/5);
     }