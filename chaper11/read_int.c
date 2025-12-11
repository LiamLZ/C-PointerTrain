#include <stdio.h>
#include <malloc.h>

#define DELTA 100

int * readints()
{
    int *array=NULL;
    int size=0;
    int capacity=0;
    int value;

    printf("Enter integers (non-integer to stop):\n");
    while (scanf("%d",&value)==1)
    {
        if(size>=capacity)
        {
            capacity+=DELTA;
            int *new_array=(int *)realloc(array,capacity*sizeof(int));
            if(new_array==NULL)
            {
                free(array);
                printf("Memory allocation failed\n");
                return NULL;
            }
            array=new_array;

        }
        array[size++]=value;
    }
    if(array!=NULL)
    {
        int * final_array=(int *)realloc(array,size*sizeof(int));
        if(final_array==NULL)
        {
            free(array);
            printf("Memory allocation failed\n");
            return NULL;
        }
    }
    return array;
    
}
