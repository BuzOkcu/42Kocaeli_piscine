/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul <skarabul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:00:34 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/10 20:12:14 by skarabul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] >= 97 && str[i] <= 122))
	{
		return (0);
	}
	return (1);
}
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "zxxhjc";
	int sayiyap = ft_str_is_lowercase(str);
	printf("%d", str);
	char str1[] = "12345";
    sayiyap = ft_str_is_lowercase(str1);
	printf("%d", str1);
	return 0;
}
