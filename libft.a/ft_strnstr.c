/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:45:00 by humartin          #+#    #+#             */
/*   Updated: 2022/03/04 13:16:48 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	litlen;

	i = 0;
	litlen = ft_strlen(little);
	if (litlen == 0)
		return ((char *)big);
	if (len != 0)
	{
		while (big[i] != '\0' && i <= len - litlen)
		{
			j = 0;
			while (big[i + j] == little[j] && little[j] != '\0')
				j++;
			if (j == litlen)
				return ((char *)&big[i]);
			i++;
		}
	}
	return (0);
}
