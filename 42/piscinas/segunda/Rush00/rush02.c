/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:57:21 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/23 14:59:43 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_validation(int x, int y, int row, int column)
{
	if (row == 1)
	{
		if (column == 1 || column == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	if (row > 1 && row < y)
	{
		if (column == 1 || column == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
	if (row == y && row != 1)
	{
		if (column == 1 || column == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			ft_validation (x, y, row, column);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
