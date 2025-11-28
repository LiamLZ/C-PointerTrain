#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000

int main(void)
{
    char buffer[MAX_SIZE];
    char max_str[MAX_SIZE];
    int max_len=0;
    while (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        if(max_len < strlen(buffer))
        {
            max_len = strlen(buffer);
            strcpy(max_str,buffer);
        }
    }
    printf("Longest string: %s", max_str);
    return EXIT_SUCCESS;

}