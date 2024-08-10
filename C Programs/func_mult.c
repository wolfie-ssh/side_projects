#include <stdio.h>

double mult(double x, double y);
double power(double x, int n);

int main(void)
{
    printf("%f\n", power(2,3)); //cals power function
    return 0;
}

double mult(double x, double y)
{
    return x*y;
}

double power(double x, int n)
{
    double result=x;
    for (int i=1; i<n; i++)          // loop works as follows
    {                              //first loop..result=2, x=2, n=3, i=1   mult(2, 2)=>4||result=4;
         result = mult(result, x);//second loop..result=4, x=2, n=3, i=2...mult(4, 2)=>8||result=8;  
    }                            //third loop: loop doesn't move forward as (3<3) is false
    return result;              //return result = > returns 8;
}