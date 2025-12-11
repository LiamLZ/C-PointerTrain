#include <string.h>


char* my_strtchr(char const *str,int ch)
{
    char const * last_occurence=NULL;
    while(*str!='\0')
    {
        if(*str==(char)ch)
        {
            last_occurence=str;
        }
        str++;
    } 
    if(ch=='\0')
    {
        return (char *)str;
    }
    return (char *)last_occurence;
}