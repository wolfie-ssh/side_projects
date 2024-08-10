#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[]="This is a string";
    char s2[]="This is a string";

    if (strcmp(s1,s2)==0) // string compare (strcmp(1,2)) returns 0 if condition is true
        printf("Equal Strings\n");
    else
        printf("Not Equal\n");
    return 0;
}