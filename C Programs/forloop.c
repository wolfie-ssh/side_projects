#include <stdio.h>

int main(void)
{
    double initial=0, step=0, stop=0;

    do //Gets a non negative value
    {        
        printf("Enter Initial (m): ");
        scanf("%lf", &initial);
        if (initial < 0) 
            printf("Must Be >=0!\n");    
    } while (initial < 0);

    
    do //gets a positive value
    {        
        printf("Enter Step (m): ");
        scanf("%lf", &step);
        if (step <= 0) 
            printf("Must Be >=0!\n");    
    } while (step <= 0);


    do //
    {        
        printf("Enter Stop (m): ");
        scanf("%lf", &stop);
        if (stop <= 0) 
            printf("Must Be >=0!\n");    
    } while (stop <= 0);

    printf("\n");
    printf("Meters    Feet\n");
    printf("********************\n");

    for (double conv=initial; conv <= stop; conv +=step)
    {
        printf("%f %f\n", conv, conv * 3.28084 );
    }
}