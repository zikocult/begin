/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:47:05 by gbarulls          #+#    #+#             */
/*   Updated: 2023/05/27 00:40:59 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static void	ft_hexa_point_pf(unsigned long int pointer, int *count)
{
	unsigned long int	nb;

	nb = pointer;
	if (nb >= 16)
	{
		ft_hexa_point_pf(nb / 16, count);
		ft_hexa_point_pf(nb % 16, count);
	}
	else
	{
		if (nb <= 9 && *count != -1)
			ft_putchar_pf((nb + '0'), count);
		else if (*count != -1)
			ft_putchar_pf((nb - 10 + 'a'), count);
	}
}

void	ft_pointer_pf(void *pointer, int *count)
{
	if (*count != -1)
		ft_putstr_pf("0x", count);
	if (pointer == 0 && *count != -1)
	{
		ft_putchar_pf('0', count);
		return ;
	}
	if (*count != -1)
		ft_hexa_point_pf((unsigned long int)pointer, count);
}
