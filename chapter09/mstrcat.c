#include <string.h>
#include "string_len.h"

char * my_strcat(char * dst,char const *str,int size)
{
    int length;

    size-=1;
    length=size-(int)my_strnlen(dst,size);
    if(length>0)
    {
        strncat(dst,str,length);
        dst[size]='\0';
    }
    return dst;
}


void my_strncat(char *dest,char *src,int dest_size)
{
    if(dest==NULL||src==NULL||dest_size<=0)
    {
        return;
    }
    size_t dest_len=my_strnlen(dest,dest_size);
    if(dest_len>=dest_size)
    {
        dest[dest_len-1]='\0';
        return;
    }

    size_t space_left=dest_size - dest_len - 1;
    if(space_left>0)
    {
        size_t src_len=my_strnlen(src,space_left);

        size_t to_copy=(src_len<space_left)?src_len:space_left;
        memcpy(dest+dest_len,src,to_copy);
        dest[dest_len+to_copy]='\0';
    }

}