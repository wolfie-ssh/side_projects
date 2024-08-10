#include <stdio.h>

int main(void) 

{
    double x=5.5, y=6.5;
    double add=x+y;
    double sub=x-y;
    double mult=x*y;
    double div=x/y;

    printf("Addition: %f\n", add);
    printf("Subtraction: %f\n", sub);
    printf("Multiplication: %f\n", mult);
    printf("Division: %f\n", div);
    
    int x1=11.0, y1=3.0;
    int div1=x1/y1;
    printf("Div: %d\n", div1);
    
    int x2=14, y2=2;
    int mod2=x2%y2;
    printf("Modulus: %d\n", mod2);
    return 0;


}