/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:47:05 by gbarulls          #+#    #+#             */
/*   Updated: 2023/05/26 22:07:08 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_hexa_point_pf(unsigned long int pointer, char *base, int *count)
{
	unsigned long int	nb;

	nb = pointer;
	if (nb >= 16)
	{
		ft_hexa_point_pf(nb / 16, base, count);
		ft_hexa_point_pf(nb % 16, base, count);
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
		ft_hexa_point_pf((unsigned long int)pointer, "0123456789abcdef", count);
}
