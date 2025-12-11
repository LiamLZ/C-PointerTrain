#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

#define DELTA 256

char * readstring()
{
    static char *buffer=NULL;
    static int buffer_size=0;
    int ch;
    int len;
    char *bp;


    bp=buffer;
    len=0;

    do
    {
        /* code */
        ch=getchar();
        if(ch=='\n'||ch==EOF)
        {
            ch='\0';
        }

        if(len>=buffer_size)
        {
            buffer_size+=DELTA;
            buffer=(char *)realloc(buffer,buffer_size*sizeof(char));
            assert(buffer!=NULL);
            bp=buffer+len;
            
        }
        *bp++=(char)ch;
        len++;

    } while (ch!='\0');

    bp=malloc(len*sizeof(char));
    assert(bp!=NULL);
    strcpy(bp,buffer);
    return bp;
    
}