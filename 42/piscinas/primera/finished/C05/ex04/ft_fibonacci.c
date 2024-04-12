/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:42:10 by gbarulls          #+#    #+#             */
/*   Updated: 2023/11/23 00:11:20 by ZikoCult         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}

// int main() {
//
//   int numero, i;
//
//   printf("Escriba el número de elementos de la serie: ");
//   scanf("%d", &numero);
//
//   for (i = 0; i <= numero; i++) {
//     printf("%i\n", ft_fibonacci(i));
//   }
//   return 0;
// }
