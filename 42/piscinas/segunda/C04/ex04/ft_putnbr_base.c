/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:26:40 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/27 21:35:33 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_base_count(char *base)
{
	int	count;

	count = 0;
	while (base[count])
		count++;
	return (count);
}

int	ft_control(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_base_count(base) < 2)
		return (1);
	while (base[i + 1] != '\0')
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base [j])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (ft_control(base) == 0)
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		if (nb >= ft_base_count(base))
		{
			ft_putnbr_base(nb / ft_base_count(base), base);
			nb = nb % ft_base_count(base);
		}
		if (nb < ft_base_count(base))
			ft_putchar(base[nb]);
	}
}

// int main ()
// {
// 	ft_putnbr_base(310, "01234");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(310, "01234567");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-310, "1");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-310, "0123456789abcdef");
// 	write(1, "\n", 1);
// }
