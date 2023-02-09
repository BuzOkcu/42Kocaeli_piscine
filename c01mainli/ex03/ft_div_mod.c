/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul <skarabul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:39:01 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/09 16:28:48 by skarabul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int	*mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
int main()
{
	int a, b, div, mod;
	a = 5;
	b = 2;
	ft_div_mod(5,2,&div,&mod);
	printf("div: %d,mod: %d", div, mod);
}
