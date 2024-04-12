/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:32:19 by gbarulls          #+#    #+#             */
/*   Updated: 2022/11/26 15:32:37 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rush.h"

void	ft_rush01 (int x, int y){
	int i;
	int j;

	i = 1;
	while (i <= y){
		j = 1;
		while (j <= x){
			if (i == 1){
				if (j == 1){
					ft_putchar('/');
				} else if (j < x){
					ft_putchar('*');
				} else {
					ft_putchar('\\');
				}
			} else if ( i < y){
				if (j == 1 || j == x){
					ft_putchar('*');
				} else {
					ft_putchar(' ');
				}
			} else {
				if (j == 1){
					ft_putchar('\\');
				} else if (j < x){
					ft_putchar('*');
				} else {
					ft_putchar('/');
				}
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
