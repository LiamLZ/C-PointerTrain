#include <string.h>

char * my_strcpy(char *dst,char const * str,int size)
{
    strncpy(dst,str,size);
    dst[size-1]='\0';
    return dst;
}