#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char str1[11] = "abcsd";
    char str2[] = "ab2css";
    printf("%s\n",strcat(str1,str2));
    printf("%s\n",ft_strcat(str1,str2));
    return (0);
}