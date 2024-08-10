#include <stdio.h>

void print_two(float a, float b);

int main(void)
{
float x=0.0, y=0.0;
printf("Enter X and Y:");
scanf("%f\n %f", &x, &y);
print_two(x, y);
return 0;

}

void print_two(float a, float b)
{
    printf("%f\n%f\n", a, b);
}