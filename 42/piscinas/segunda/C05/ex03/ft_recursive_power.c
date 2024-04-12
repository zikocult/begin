/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls->                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:23:59 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/28 22:33:20 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power -1));
	return (nb);
}

// int main (int argc, char **argv)
// {
// 	if (argc < 2)
// 		return (0);
// 	printf("%i\n",ft_recursive_power(argv[1][0] - 48, argv[2][0] - 48));
// 	return (0);
// }
