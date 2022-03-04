/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:44:01 by humartin          #+#    #+#             */
/*   Updated: 2022/03/04 12:48:43 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int character)
{
	if ((character >= 'A' && character <= 'Z')
		|| (character >= 'a' && character <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
