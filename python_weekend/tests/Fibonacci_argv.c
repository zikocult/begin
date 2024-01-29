/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fibonacci_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZikoCult <ZikoCult>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:16:48 by ZikoCult          #+#    #+#             */
/*   Updated: 2024/01/29 07:59:34 by ZikoCult         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Faré la proba amb una funció recursiva i una altre secuencial
int	fibo_rec(int repes)
{
	if (repes < 0)
		return (-1);
	if (repes == 0 || repes == 1)
		return (repes);
	else
		return (fibo_rec(repes - 1) + fibo_rec(repes - 2));
}

void	fibo_sec(int repes, int i)
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
	printf("\n");
}

int	main(int argc, char *argv[])
{
	int	repes;
	int	i;

	repes = 0;
	i = -1;
	if (argc >= 2)
		repes = atoi(argv[1]);
	if (repes > 0)
	{
		if (argc == 2)
			fibo_sec(repes, 0);
		else if (argc > 2)
			while (++i < repes)
				printf("%i - %i\n", i, fibo_rec(i));
	}
	else
		printf("Parametros introducidos incorrectos\n");
	return (0);
}
