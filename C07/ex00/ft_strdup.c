

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (str == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
			i++;
	}
	str[i] = '\0';
	return (str);
}
int main()
{
	char a[] = "selam";
	printf("%s",ft_strdup(a));
}
