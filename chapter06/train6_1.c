#include <stdio.h>

#define NULL ((void *)0)


char const * find_char(char  const *str,char const * chars)
{
    printf("called str pointer address:%p\n",str);

    char const *cp=NULL;

    if(str!=NULL && chars!=NULL)
    {
        for(; *str!='\0'; str++)
        {
           for(cp=chars;*cp!='\0';cp++)
            {
                if(*str==*cp)
                {
                    return str;
                }
            }
        }
    }

    return NULL;


}

int main(int argc,char const * argv[])
{
    char  * str="hello,world!";
    char const * chars="ow";

    printf("pre pointer address:%p\n",str);
    printf("pre char :%c\n", *str);

    char const * ret=find_char(str,chars);


    if(ret!=NULL)
    {
        printf("find char:%c\n",*ret);
    }
    else
    {
        printf("not find\n");
    }
    printf("after pointer address:%p\n",str);
    printf("after char:%c\n",*str);

    return 0;
}