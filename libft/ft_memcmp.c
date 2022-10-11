/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:43:49 by humartin          #+#    #+#             */
/*   Updated: 2022/03/04 13:01:16 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if ((((unsigned char *)pointer1)[i]) < (((unsigned char *)pointer2)[i]))
			return (-1);
		if ((((unsigned char *)pointer1)[i]) > (((unsigned char *)pointer2)[i]))
			return (1);
		else
			i++;
	}
	return (0);
}
