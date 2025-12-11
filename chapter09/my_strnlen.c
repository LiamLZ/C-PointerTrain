#include <string.h>
#include <stddef.h>

size_t my_strnlen(char const *str,size_t size)
{
    for(size_t len =0;len<size;len++)
    {
        if(str[len]=='\0')
        {
            break;
        }
    }
    return size;
}