#include <stdio.h>

void reverse_string(char *str)
{
    char *last_char=NULL;

    for (last_char = str; *last_char != '\0';last_char++)
    {
        ;
    }
    last_char--;

    while (str<last_char)
    {
        char temp=*str;
        *str++=*last_char;
        *last_char--=temp;

    }
    
}

