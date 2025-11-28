#include <stdio.h>
#include <stdlib.h>


int increment(int value);
int negate(int value);

int main(void)
{
    printf("increment:%d negate:%d\n",increment(10),negate(10));
    printf("increment:%d negate:%d\n",increment(0),negate(0));
    printf("increment:%d negate:%d\n",increment(-10),negate(-10));


    return EXIT_SUCCESS;
}