#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int);

int main(void)
{
    char str1[11] = "abcsd";
    char str2[] = "ab2css";
    printf("%s\n",strlcat(str1,str2,7));
    printf("%s\n",ft_strlcat(str1,str2,7));
    return (0);
}