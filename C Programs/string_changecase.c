#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[]="This Is The WAY";
    int length=strlen(s);
    for(int i=0; i<length; i++)
        {
            printf("%c ", s[i]);
            if(isupper(s[i]))
                s[i]= tolower(s[i]);
            else if (islower(s[i]))
                s[i]=toupper(s[i]);
        }
    printf("s: %s \n", s);
    return 0;
}