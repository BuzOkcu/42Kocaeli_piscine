/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul <skarabul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:37:02 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/09 16:16:08 by skarabul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		bosbardak;

	bosbardak = *a;
	*a = *b;
	*b = bosbardak;
}
int main()
{
  int a;
  int b;
  a = 5;
  b = 8;
  printf("a: %d, b: %d", a ,b);
  ft_swap(&a,&b);
  printf("a: %d ,b:  %d", a, b); 
}
