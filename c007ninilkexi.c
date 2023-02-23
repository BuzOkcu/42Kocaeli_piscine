#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    i++;
    return (i);
}
char *ft_strdup(char*src)
{
    int i;
    char *dest;
    
    i = 0;
    dest = ((char *)malloc(ft_strlen(src) * sizeof(char) + 1));
    if (!dest)
    {
        return NULL;
    }
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int main()
{
    char dest[] = "Merhaba dunya";
    char *src;

    src = ft_strdup(dest);

    printf("dest: %s\n", dest);
    printf("src: %s\n", src);

    free(src);

    return 0;
}