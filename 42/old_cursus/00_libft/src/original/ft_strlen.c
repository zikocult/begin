/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:43:35 by gbarulls          #+#    #+#             */
/*   Updated: 2023/05/26 22:11:27 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		s++;
		count++;
	}
	return (count);
}
