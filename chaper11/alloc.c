#include <stdlib.h>
#include <string.h>

void *calloc(size_t n_elements,size_t element_size)
{
    char *new_memory;
    n_elements*=element_size;
    new_memory=malloc(n_elements);
    if(new_memory!=NULL)
    {
        char *p=new_memory;
        while(n_elements--)
        {
            *p++=0;
        }
    }
    return new_memory;
}