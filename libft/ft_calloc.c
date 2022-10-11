/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:43:05 by humartin          #+#    #+#             */
/*   Updated: 2022/03/04 12:47:23 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	void	*array;
	size_t	c;

	c = elementCount * elementSize;
	array = malloc(sizeof(c));
	bzero(array, c);
	return (array);
}
