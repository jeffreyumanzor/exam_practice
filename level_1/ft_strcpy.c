#include <stdio.h>
#include <stdlib.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s2);
}

int main(void)
{
    char *src;
    char dest[28];

    src = "Hello, this is a 42 test";
    ft_strcpy(dest, src);
    printf("s1: %s \ns2: %s", src, dest);
    return (0);
}