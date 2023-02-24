#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strjoin_sup(char *ret_val, char **strs, char *sep, int size)
{
	int	i;
	int	a;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		a = 0;
		while (strs[i][a])
		{
			ret_val[len] = strs[i][a];
			a++;
			len++;
		}
		a = 0;
		while (sep[a] && i + 1 != size)
		{
			ret_val[len] = sep[a];
			len++;
			a++;
		}
		i++;
	}	
}
"soner.karabulut.42"
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int				i;
	unsigned int	len;
	char			*ret_val;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i + 1 != size)
			len += ft_strlen(sep);
			i++;
	}
	ret_val = malloc(sizeof(char) * (len + 1));
	ret_val[len] = 0;
	ft_strjoin_sup(ret_val, strs, sep, size);
	return (ret_val);
}
#include <stdio.h>
int main()
{

}
