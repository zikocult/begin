/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZikoCult <ZikoCult>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:24:21 by ZikoCult          #+#    #+#             */
/*   Updated: 2024/01/29 08:01:53 by ZikoCult         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fibo(int repes, int i)
{
	long	a;
	long	b;
	long	auxiliar;

	a = 0;
	b = 1;
	while (i < repes)
	{
		printf("%i - %li\n", i, a);
		auxiliar = b;
		b = a + b;
		a = auxiliar;
		i++;
	}
}

int	main(void)
{
	int		repes;

	printf("Introduzca número de repeticiones: ");
	scanf("%i", &repes);
	fibo (repes, 0);
	return (0);
}
