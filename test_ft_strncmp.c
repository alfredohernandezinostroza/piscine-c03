#include <stdio.h>
#include <string.h>

int ft_strncmp(char *, char *, unsigned int);

int main(void)
{
    char * str1 = "abcsd";
    char * str2 = "abcss";
    printf("%d\n",strncmp(str1,str2,5));
    printf("%d\n",ft_strncmp(str1,str2,5));
    return (0);
}