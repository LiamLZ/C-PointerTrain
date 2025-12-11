#include <string.h>
#include <ctype.h>
#include <stdbool.h>



bool palindrome(char const *string)
{
    if(string==NULL)
    {
        return false;
    }
    size_t len=strlen(string);
    if(len==0)
    {
        return true;
    }

    const char *left =string;
    const char *right=string+len-1;
    
    while (left<right)
    {
        while (left<right&&!isalpha((unsigned char)*left))
        {
            left++;
        }
        while (left<right&&isalpha((unsigned char)*right))
        {
            right--;
        }
        if(tolower((unsigned char)*left)!=tolower((unsigned char)*right))
        {
            return false;
        }
        
        left++;
        right--;
    }

    return true;
    
}