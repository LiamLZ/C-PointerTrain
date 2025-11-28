/* train1-3.c - simple Hello World */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c=0;
    char sum=-1;

    while ((c=getchar())!=EOF)
    {
        putchar(c);
        sum+=c;
    }
    printf("%d\n",sum);
    
    return EXIT_SUCCESS;
    
    
}