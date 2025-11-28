#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch=0;
    int braces=0;
    
    while ((ch=getchar()) != EOF)
    {
        if(ch=='{')
        {
            braces+=1;
        }
        if(ch=='}')
        {
           if(braces==0)
           {
                printf("Extra closing brace!\n");
           }
           else
           {
            braces-=1;
           }
        }
    }
    if(braces>0)
    {
        printf("%d unmatched operating braces!\n",braces);
    }
    

    return EXIT_SUCCESS;
}