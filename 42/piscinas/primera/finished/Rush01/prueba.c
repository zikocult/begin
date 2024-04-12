/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:15:02 by gbarulls          #+#    #+#             */
/*   Updated: 2022/12/03 17:50:04 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	int i;
	i = 0;

	for (int i = 0; i <= argc; i++){
		printf("Indice: %d, valor: %s\n", i, argv[i]);
	}

//	while (i < 15)
//	{
//		temp = *argv[i];
//      write (1, &temp, 1);
//		if (*argv[i] < '1' || *argv[i] > '4')
//			return (0);
//		i++;
//	}
	return (0);
}
