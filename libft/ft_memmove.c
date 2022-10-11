/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:44:03 by humartin          #+#    #+#             */
/*   Updated: 2022/03/04 13:03:10 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t	i;
	char	*sd;
	char	*sr;

	sd = dst;
	sr = (void *)src;
	i = 0;
	if (sr < sd)
	{
		i++;
		while (i <= size)
		{
			sd[size - i] = sr[size - i];
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			sd[i] = sr[i];
			i++;
		}
	}
	return (dst);
}
