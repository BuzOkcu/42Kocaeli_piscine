#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main()
{
    char str[] = "ornek";
    int uzunluk = ft_strlen(str);
    printf("stringin uzunlugu : %d\n", ft_strlen(""));
}