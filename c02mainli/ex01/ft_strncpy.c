/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul <skarabul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:13:37 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/10 16:37:06 by skarabul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "soner";
	char dest[] = "karabulut1";
	char dest1[] = "karabulut2";

	printf("%s", ft_strncpy(dest, src, 4));
	printf("\n%s", ft_strncpy(dest1, src, 4));
}
