/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:00:14 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/29 11:23:37 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div <= nb - 1)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	sw;

	sw = 1;
	if (nb <= 1)
		return (2);
	while (sw == 1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (nb);
}

/* int main (void) */
/* { */
/* 	printf("Resultado = %i\n", ft_find_next_prime(-4)); */
/* 	printf("Resultado = %i\n", ft_find_next_prime(3)); */
/* 	printf("Resultado = %i\n", ft_find_next_prime(49)); */
/* 	printf("Resultado = %i\n", ft_find_next_prime(29)); */
/* 	printf("Resultado = %i\n", ft_find_next_prime(48)); */
/* 	printf("Resultado = %i\n", ft_find_next_prime(97)); */
/* } */
