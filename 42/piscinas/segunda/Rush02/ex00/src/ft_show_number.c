/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:28:23 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/07 22:14:05 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

int	ft_hundred(char ac, int sw, char *buff)
{
	if (ac - 48 > 0)
	{
		ft_find_line(ac - 48, buff);
		ft_putchar(' ');
		ft_find_line(28, buff);
		ft_putchar(' ');
	}
	return (sw);
}

int	ft_decimal(char ac, char acnext, int sw, char *buff)
{
	if (ac - 48 == 1)
	{
		sw = 1;
		ft_find_line((ac - 48) + (acnext - 48) + 9, buff);
		ft_putchar(' ');
	}
	else if (acnext - 48 != 0)
	{
		sw = 0;
		ft_find_line((ac - 48) + 18, buff);
		ft_putchar('-');
	}
	else
	{
		sw = 0;
		ft_find_line((ac - 48) + 18, buff);
	}
	return (sw);
}

int	ft_unit(char ac, int resto, int sw, char *buff)
{
	if (sw == 0)
	{
		if (resto >= 3 && ac - 48 > 0)
		{
			ft_find_line(ac - 48, buff);
			ft_putchar(' ');
		}
		else if (ac - 48 > 0)
		{
			ft_find_line(ac - 48, buff);
		}
	}
	else
		sw = 0;
	if (resto >= 3)
	{
		ft_find_line(28 + (resto / 3), buff);
		ft_putchar(' ');
	}
	else
		ft_putchar('\n');
	return (sw);
}

void	ft_write(char *ac, int lenght, int begin, char *buff)
{
	int	i;
	int	p;
	int	sw;

	i = begin;
	sw = 0;
	p = 0;
	if (lenght == 1 && *ac == '0')
		ft_find_line(0, buff);
	while (i < lenght && ac[i] != '\0')
	{
		if ((lenght - p) % 3 == 1)
			sw = ft_unit(ac[i], lenght - p, sw, buff);
		if ((lenght - p) % 3 == 2)
		{
			sw = ft_decimal(ac[i], ac[i + 1], sw, buff);
		}
		if ((lenght - p) % 3 == 0)
			sw = ft_hundred(ac[i], sw, buff);
		i++;
		p++;
	}
}

int	ft_show_number(char *buff, char *ac)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (ac[i] <= 32)
		i++;
	if (ac[i] < 48 || ac[i] > 57)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while ((ac[i + count] >= 48 && ac[i + count] <= 57)
		&& ac[i + count] != '\0')
		count++;
	ft_write(ac, count, i, buff);
	return (0);
}
