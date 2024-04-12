/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:37:10 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/29 10:58:45 by gbaruls-         ###   ########.fr       */
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

/* int main (void) */
/* { */
/* 	printf("Resultado = %i\n", ft_is_prime(-4)); */
/* 	printf("Resultado = %i\n", ft_is_prime(3)); */
/* 	printf("Resultado = %i\n", ft_is_prime(49)); */
/* 	printf("Resultado = %i\n", ft_is_prime(29)); */
/* 	printf("Resultado = %i\n", ft_is_prime(48)); */
/* 	printf("Resultado = %i\n", ft_is_prime(97)); */
/* } */
