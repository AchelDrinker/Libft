/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:43:40 by humartin          #+#    #+#             */
/*   Updated: 2022/03/04 13:00:29 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *memoryBlock, int searchedChar, size_t size )
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if ((((unsigned char *)memoryBlock)[i])
			== ((unsigned char)searchedChar))
		{
			return (((unsigned char *)memoryBlock) + i);
		}
		i++;
	}
	return (NULL);
}
