/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul <skarabul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:40:03 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/09 19:07:33 by skarabul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int *a, int *b)
{
	int x;
	int y;

		if (!(*b == 0))
	{
		x = (*a) / (*b);
		y = (*a) % (*b);
		*b = y;
		*a = x;
	}
}
int main()
{
	int m, n;
	m = 5;
	n = 2;
	ft_div_mod(&m,&n);
    printf("div:(*a) %d,mod:(*b) %d", m, n);
}



