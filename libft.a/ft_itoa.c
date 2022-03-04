/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:58:12 by humartin          #+#    #+#             */
/*   Updated: 2022/03/04 12:56:55 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_split_itoa(char *str, size_t size, long int result)
{
	while (result > 0)
	{
		*(str + size--) = result % 10 + 48;
		result = result / 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = 48;
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		size;
	long int	result;

	result = n;
	if (n > 0)
	{
		size = 0;
	}
	else
	{
		size = 1;
		result = -result;
	}
	while (n)
	{
		n = n / 10;
		size++;
	}
	str = (char *)malloc(size + 1);
	if (!(str))
		return (0);
	*(str + size--) = '\0';
	ft_split_itoa(str, size, result);
	return (str);
}
