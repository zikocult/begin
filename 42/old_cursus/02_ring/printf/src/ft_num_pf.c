/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 00:01:43 by gbarulls          #+#    #+#             */
/*   Updated: 2023/05/27 00:45:59 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_nbr_pf(int number, int *count)
{
	if (number == -2147483648 && *count != -1)
	{
		ft_putstr_pf("-2147483648", count);
		return ;
	}
	if (number < 0 && *count != -1)
	{
		ft_putchar_pf('-', count);
		ft_nbr_pf(number * -1, count);
	}
	else if (*count != -1)
	{
		if (number > 9)
			ft_nbr_pf(number / 10, count);
		if (*count != -1)
			ft_putchar_pf(number % 10 + '0', count);
	}
}

void	ft_unint_pf(unsigned int number, int *count)
{
	if (number >= 10)
		ft_unint_pf(number / 10, count);
	if (*count != -1)
		ft_putchar_pf(number % 10 + '0', count);
}

void	ft_hexa_pf(unsigned int num, char *base, int *count)
{
	unsigned int	nb;

	nb = num;
	if (nb < 16 && *count != -1)
		ft_putchar_pf(base[nb], count);
	if (nb >= 16)
	{
		ft_hexa_pf(nb / 16, base, count);
		ft_hexa_pf(nb % 16, base, count);
	}
}
