#include <string.h>

char * my_strcpy_end(char *dst,char const *src)
{
    while ((*dst++=*src++)!='\0')
    {
        ;
    }
    return dst-1;
    
}