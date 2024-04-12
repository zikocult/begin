/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:56:07 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/27 14:07:14 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		lnb *= -1;
		ft_putchar('-');
	}
	if (lnb >= 10)
	{
		ft_putnbr(lnb / 10);
		lnb = lnb % 10;
	}
	if (lnb < 10)
		ft_putchar(lnb + '0');
}

/* int main(){ */
/* 	ft_putnbr(-2147483648); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(2147483647); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(-352); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(0); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(32569); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(42); */
/* 	ft_putchar('\n'); */
/* } */
