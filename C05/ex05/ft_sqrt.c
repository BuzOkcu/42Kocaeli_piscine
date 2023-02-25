/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul <skarabul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:26:26 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/22 21:32:05 by skarabul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	nbr;

	nbr = nb;
	if (nbr <= 0)
		return (0);
	i = 1;
	while (i * i <= nbr)
	{
		if (i * i == nbr)
			return (i);
		i++;
	}
	return (0);
}
