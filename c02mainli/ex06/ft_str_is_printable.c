#include <stdio.h>
#include <string.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int main()
{
	char str[] = "";
	int sayigor = ft_str_is_printable(str);
	printf("%d\n", sayigor);
	char str1[] = "\0";
	sayigor = ft_str_is_printable(str1);
	printf("%d\n", sayigor);
}
