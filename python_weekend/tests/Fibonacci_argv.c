/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fibonacci_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZikoCult <ZikoCult>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:16:48 by ZikoCult          #+#    #+#             */
/*   Updated: 2024/01/24 14:22:35 by ZikoCult         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	fibo_rec(int repes)
{
	if (repes < 0)
		return (-1);
	if (repes == 0 || repes == 1)
		return (repes);
	else
		return (fibo_rec(repes - 1) + fibo_rec(repes - 2));
}

void	fibo_sec(int repes)
{
	long	a;
	long	b;
	long	auxiliar;
	int		i;

	a = 0;
	b = 1;
	i = 0;
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
		{
			printf("En este caso lo haré de forma secuencial\n\n");
			fibo_sec(repes);
		}
		else if (argc > 2)
		{
			printf("Se recoge el primer parámetro y se desecha el resto\n");
			while (++i < repes)
				printf("%i - %i\n", i, fibo_rec(i));
		}
	}
	else
		printf("Parametros introducidos incorrectos\n");
	return (0);
}
