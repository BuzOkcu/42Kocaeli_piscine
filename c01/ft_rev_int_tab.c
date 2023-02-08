#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
int	main()
{
	int tab[10] = {0, 3, 2, 1, 4, 5, 6, 9, 8,};
	ft_rev_int_tab(&tab[0], 9);
	for(int i =0; i < 9; i++)
	{
		printf("%d", tab[i]);
	}
}