/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:32:42 by gbarulls          #+#    #+#             */
/*   Updated: 2022/11/27 10:56:06 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_if(int i, int j, int y, int x)
{
	if ((i == 1) || (i == y))
	{
		if (j == 1)
			ft_putchar('A');
		else if (j < x)
			ft_putchar('B');
		else
			ft_putchar('C');
	}
	else if (i < y)
	{
		if (j == 1 || j == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			ft_if(i, j, y, x);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
