/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:21:26 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/28 22:18:33 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = nb * temp;
		power--;
	}
	return (nb);
}

// int main (int argc, char **argv)
// {
// 	if (argc < 2)
// 		return (0);
// 	printf("%i\n",ft_iterative_power(argv[1][0] - 48, argv[2][0] - 48));
// 	return (0);
// }
