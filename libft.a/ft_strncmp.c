/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:19:13 by humartin          #+#    #+#             */
/*   Updated: 2022/03/04 13:15:58 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t lenght)
{
	size_t	i;

	i = 0;
	if (lenght == 0)
		return (0);
	while (i + 1 < lenght && (first[i]
			== second[i]) && (first[i]) && (second[i]))
		i++;
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}
