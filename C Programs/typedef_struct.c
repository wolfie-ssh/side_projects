#include <stdio.h>


struct  Point
{
    int x;
    int y;
};

int main(void)
{
    struct Point p1;
        p1.x=5;
        p1.y=3;
        printf("(%d, %d)\n", p1.x, p1.y);

    struct Point p2;
        p2.x=10;
        p2.y=6;
        printf("(%d, %d)\n", p2.x, p2.y);

    struct Point p3;
        p3.x=20;
        p3.y=12;
        printf("(%d, %d)\n", p3.x, p3.y);

    return 0;
}