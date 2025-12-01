#include <stdarg.h>
#include <stdio.h>

float average(int n_values,...);


int main(int argc,char const *argv[])
{
    printf("Average of 10,20,30 is %.2f\n",average(3,10,20,30));
    return 0;
}

float average(int n_values,...)
{

    va_list   var_arg;
    int count=0;
    float sum=0.0;

    va_start(var_arg,n_values);
    
    for (count=0;count<n_values;count++)
    {
        sum+=va_arg(var_arg,int);
    }

    va_end(var_arg);

    return (sum/n_values);

}

