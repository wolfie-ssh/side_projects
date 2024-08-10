#include <stdio.h>

float triple(float a);

int main(void)
{
    float a =0.0;
    printf("Enter Float Value: ");
    scanf("%f", &a);
    float trip=triple(a);
    printf("tripled value is: %f\n", trip);
}

float triple(float a)
{
    a=a*3.0;
    return a;
}