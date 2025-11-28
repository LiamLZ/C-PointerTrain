#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CLOS 20
#define MAX_INPUT 1000

int read_cloumn_numbers(int cloumns[], int max);
void rearrange(char *output, char const *input, int n_colunmns, int const cloumns[]);

int main(int argc, char const *argv[])
{

    int n_cloumns;
    int cloumns[MAX_CLOS];
    char input[MAX_INPUT];
    char output[MAX_INPUT];

    n_cloumns = read_cloumn_numbers(cloumns, MAX_CLOS);

    
    while (fgets(input,sizeof(input),stdin)!=NULL)
    {
        printf("original input : %s\n",input);
        rearrange(output,input,n_cloumns,cloumns);
        printf("Rearranged line: %s\n",output);
    }
    

    return EXIT_SUCCESS;
}

int read_cloumn_numbers(int cloumns[], int max)
{
    int num = 0;
    int ch;

    while (num < max && scanf("%d", &cloumns[num]) && cloumns[num] >= 0)
    {
        num += 1;
    }
    if (num % 2 != 0)
    {
        puts("Latst cloumn number is not paired");
        exit(EXIT_FAILURE);
    }
    while ((ch = getchar()) != EOF && ch != '\n')
        ;
    return num;
}

void rearrange(char *output, char const *input, int n_colunmns, int const cloumns[])
{
    int col;
    int output_col;
    int len;
    len = strlen(input);
    output_col = 0;

    for (col = 0; col < n_colunmns; col += 2)
    {
        int nchars = cloumns[col + 1] - cloumns[col] + 1;

        if (cloumns[col] >= len || output_col == MAX_INPUT - 1)
            break;

        
        if(output_col+nchars>MAX_INPUT-1)
        {
            nchars=MAX_INPUT-output_col-1;
        }

        strncpy(output+output_col,input+cloumns[col],nchars);
        output_col+=nchars;
    }
    output[output_col]='\0';

}