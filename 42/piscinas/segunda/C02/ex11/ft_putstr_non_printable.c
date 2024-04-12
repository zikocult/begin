/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:33:45 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/25 20:37:56 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(unsigned char str, char *hex)
{
	if (str / 16 > 0)
	{
		ft_putchar(hex[str / 16]);
		ft_putchar(hex[str % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hex[str]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_convert(str[i], "0123456789abcdef");
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/* int main (void) */
/* { */
/* 	char str[50] = "Coucou\ntu vas \tbien ?"; */
/* 	ft_putstr_non_printable(str); */
/* } */
