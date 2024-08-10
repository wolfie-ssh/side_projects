#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[50]="First Sentence";
    char s2[]=" Second Sentence";

    strcat(s1, s2);
    printf("%s\n", s1);
    return 0;
}