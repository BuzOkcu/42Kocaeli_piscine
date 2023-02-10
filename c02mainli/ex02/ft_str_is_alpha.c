/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul <skarabul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:25:33 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/10 18:56:57 by skarabul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "skdmfskdfgds";
    char str1[] = "-12354654";
	int result = ft_str_is_alpha(str);
	printf("%d\n", result);
	result = ft_str_is_alpha(str1);
	printf("%d\n", result);
}

