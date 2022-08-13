#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *, char *);

int main(void)
{
    char * str1 = "sadasacsd";
    char * str2 = "abc";
    // printf("%s\n",strstr(str1,str2));
    printf("%s\n",ft_strstr(str1,str2));
    return (0);
}