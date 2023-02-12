/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul <skarabul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:35:40 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/11 11:50:03 by skarabul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int main()
{
	char str[] = "AASDASDA";
	int sayigor = ft_str_is_uppercase(str);
	printf("%d\n", sayigor);
	char str1[] = "1234";
	sayigor = ft_str_is_uppercase(str1);
	printf("%d\n", sayigor);
}
