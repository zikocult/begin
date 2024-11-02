/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:20:07 by gbarulls          #+#    #+#             */
/*   Updated: 2024/07/04 13:33:21 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printfv0/include/ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <time.h>

int main(void)
{
	int a, b, min, max, *ptr_a;
	a = 5;
	b = 3;
	min = -2147483648;
	max = 2147483647;
	ptr_a = &a;

	ft_printf("\n");
	ft_printf("Probando el CONTAJE de salida\n");
	ft_printf("%i\n", ft_printf("Hola Mundo = "));
	printf("%i\n", printf("Hola Mundo = "));
	ft_printf("\n");
	ft_printf("Probando los CARACTERES\n");
	ft_printf(" = %i \n", ft_printf("Hola %cundo%s %%", 'M', ", hola de nuevo"));
	printf(" = %i \n", printf("Hola %cundo%s %%", 'M', ", hola de nuevo"));
	ft_printf("\n");
	ft_printf("Probando los NUMERALES\n");
	ft_printf("= %i \n", ft_printf("%d %i %u ", -1, 12, -42949));
	printf("= %i \n", printf("%d %i %u ", -1, 12, -42949));
	ft_printf(" = %i\n", ft_printf("%i, %i", min, max));
	printf(" = %i\n", printf("%i, %i", min, max));
	ft_printf("\n");
	ft_printf("Probando los HEXADECIMALES\n");
	ft_printf("%i \n", ft_printf("%x %X = ", 134684, -234189));
	printf("%i \n", printf("%x %X = ", 134684, -234189));
	ft_printf("\n");
	ft_printf("Probando PUNTEROS\n");
	ft_printf(" = %i \n", ft_printf("%p, %p, %p", &a, &b, ptr_a));
	printf(" = %i \n", printf("%p, %p, %p", &a, &b, ptr_a));
	ft_printf(" = %i \n", ft_printf("%p", NULL));
	printf(" = %i \n", printf("%p", NULL));
	// ft_printf(" = %i \n", ft_printf());
	// printf(" = %i \n", printf());
	return 0;
}
