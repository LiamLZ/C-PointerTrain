#include <string.h>


int count_chars(char const* str,char const *chars)
{
    if(str==NULL||chars==NULL)
    {
        return 0;
    }
    int count=0;
    while(*str!='\0')
    {
        const char *p =chars;
        while (*p!='\0')
        {
            if(*str==*p)
            {
                count++;
                break;
            }
            p++;
        }
        str++;
        
    }
    return count
}