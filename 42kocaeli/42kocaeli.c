/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42kocaeli.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul < skarabul@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:13:58 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/22 15:59:57 by skarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bol(int a)
{
	if (a > 9)
	{
		ft_bol(a / 10);
		ft_bol(a % 10);
	}
	write(1, &"0123456789"[a], 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "42 Kocaeli", 9);
		else if (i % 5 == 0)
			write(1, "Kocaeli", 7);
		else if (i % 3 == 0 )
			write(1, "42", 2);
		else
			ft_bol(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
