#include <string.h>

char *my_strnchr(char const *str,int ch,int which)
{
    if(str==NULL||which<=0)
    {
        return NULL;
    }
    int count=0;
    while (1)
    {
        if(*str==ch)
        {
            count++;
            if(count==which)
            {
                return (char *)str;
            }
        }
        if(*str=='\0')
        {
            break;
        }
        str++;
    }
    return NULL;
    

}