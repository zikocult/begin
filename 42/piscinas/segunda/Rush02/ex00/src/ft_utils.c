/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:49:09 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/07 21:29:54 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

void	ft_find_line(int lines, char *buff)
{
	int	i;

	i = 0;
	while (lines > 0)
	{
		if (buff[i++] == '\n')
			lines--;
	}
	while (buff[i] != ':')
		i++;
	i += 2;
	while (buff[i] != '\n' && buff[i] != '\0')
	{
		ft_putchar(buff[i]);
		i++;
	}
}

int	ft_str_lenght(char *ac)
{
	int	i;

	i = 0;
	while (ac[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
