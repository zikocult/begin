/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:25:12 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/29 10:44:16 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_sqrt(int nb)
{
	long	lnb;
	long	index;

	lnb = nb;
	index = 1;
	if (lnb <= 0)
		return (0);
	while (lnb >= (index * index))
	{
		if ((index * index) == lnb)
			return (index);
		index++;
	}
	return (0);
}

/* int main (void) */
/* { */
/* 	printf("Resultado = %i\n", ft_sqrt(-1)); */
/* 	printf("Resultado = %i\n", ft_sqrt(0)); */
/* 	printf("Resultado = %i\n", ft_sqrt(1)); */
/* 	printf("Resultado = %i\n", ft_sqrt(49)); */
/* 	printf("Resultado = %i\n", ft_sqrt(48)); */
/* 	printf("Resultado = %i\n", ft_sqrt(121)); */
/* } */
