/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:23:02 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/27 22:03:02 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int main (void) {
// 	ft_putchar('H');
// 	ft_putchar('o');
// 	ft_putchar('l');
// 	ft_putchar('a');
// 	ft_putchar(' ');
// 	ft_putchar('M');
// 	ft_putchar('u');
// 	ft_putchar('n');
// 	ft_putchar('d');
// 	ft_putchar('o');
// 	return (0);
// }
