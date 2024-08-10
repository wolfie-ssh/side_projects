#include <stdio.h>
int main(void) 
{
    char s1[20];

    printf("Enter a String: ");
    scanf("%s", s1);

    int i=0;
    while(s1[i] != '\0')
    {
        if(s1[i]=='0')
            printf("Found 0 at index number %d \n", i);
        i++;
    }
}