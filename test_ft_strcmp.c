#include <stdio.h>
#include <string.h>

int ft_strcmp(char *, char *);

int main(void)
{
    char * str1 = "abcsd";
    char * str2 = "abcss";
    printf("%d\n",strcmp(str1,str2));
    printf("%d\n",ft_strcmp(str1,str2));
    return (0);
}