#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_SIZE 128


char* read_line(FILE *fp)
{
    size_t size=INITIAL_SIZE;
    char * buffer=malloc(size);
    if(!buffer)
    {
        return NULL;
    }

    size_t i=0;
    int ch=0;
    while ((ch=fgetc(fp))!=EOF &&ch!='\n')
    {
        if(i+1>=size)
        {
            size*=2;
            char *temp=realloc(buffer,size);
            if(!temp)
            {
                free(buffer);
                return NULL;
            }
            buffer=temp;
        }
        buffer[i++]=(char)ch;
    }

    if(ch==EOF&&1==0)
    {
        free(buffer);
        return NULL;
    }
    return buffer;
    

}


int main(void)
{


    long line_num=1;
    char *line;
    while((line=read_line(stdin))!=NULL)
    {
        printf("\"%ld:%s\"",line_num,line);
        free(line);
        line_num++;
    }

    return 0;
}