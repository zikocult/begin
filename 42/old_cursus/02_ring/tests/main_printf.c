/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:20:07 by gbarulls          #+#    #+#             */
/*   Updated: 2023/05/26 21:51:25 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <stdio.h>
#include <limits.h>

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
	ft_printf("\n");
	ft_printf("PACO tests\n");
	ft_printf(" = %i \n", ft_printf("%s", "some string with %s hehe"));
	printf(" = %i \n", printf("%s", "some string with %s hehe"));
	ft_printf(" = %i \n", ft_printf("%ss%ss%ss", "And ", "some other", "joined"));
	printf(" = %i \n", printf("%ss%ss%ss", "And ", "some other", "joined"));
	ft_printf(" = %i \n", ft_printf("5&c[Q%p>%xQ%cPF?+Kx%sc%p1}%% \to4o%Xc]\f9%%mme &]HD)%ic%po\flQQ[\v", (void *)-8904836195920858500, -232531005, 2096923335, "4v0uW\"@*c@)BUV{(81\nc|v6ZXhg", (void *)-904503830595559160, -106753796, 620805766, (void *)-3262560697441785876));
	printf(" = %i \n", printf("5&c[Q%p>%xQ%cPF?+Kx%sc%p1}%% \to4o%Xc]\f9%%mme &]HD)%ic%po\flQQ[\v", (void *)-8904836195920858500, -232531005, 2096923335, "4v0uW\"@*c@)BUV{(81\nc|v6ZXhg", (void *)-904503830595559160, -106753796, 620805766, (void *)-3262560697441785876));
	ft_printf("%i \n", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
	printf("%i \n", printf(" %p %p ", LONG_MIN, LONG_MAX));
	ft_printf(" = %i \n", ft_printf(" %p %p", 0, 0));
	printf(" = %i \n", printf(" %p %p", 0, 0));
//	ft_printf(" = %i \n", ft_printf(" %p %p", 1, 1));
//	printf(" = %i \n", printf(" %p %p", 1, 1));
	// ft_printf(" = %i \n", ft_printf());
	// printf(" = %i \n", printf());
	return 0;
}
