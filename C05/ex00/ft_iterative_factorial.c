/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul <skarabul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:52:08 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/22 20:54:40 by skarabul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
