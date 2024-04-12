/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:52:05 by gbarulls          #+#    #+#             */
/*   Updated: 2023/03/31 00:58:46 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destiny;

	i = 0;
	destiny = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		destiny[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
