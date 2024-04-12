/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 22:39:54 by gbarulls          #+#    #+#             */
/*   Updated: 2023/05/26 22:06:56 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putchar_pf(char c, int *count)
{
	int	i;

	i = write(1, &c, 1);
	if (i == -1)
		(*count) = -1;
	else
		(*count)++;
}

void	ft_putstr_pf(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_pf("(null)", count);
	}
	else
	{
		while (str[i] && *count != -1)
		{
			ft_putchar_pf(str[i], count);
			i++;
		}
	}
}
