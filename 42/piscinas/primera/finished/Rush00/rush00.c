/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:31:25 by gbarulls          #+#    #+#             */
/*   Updated: 2022/11/26 15:31:58 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rush.h"

void	ft_rush00 (int x, int y){
	int i;
	int j;

	i = 1;
	while (i <= y){
		j = 1;
		while (j <= x){
			if ((i == 1 && j == 1) || (i == y && j == 1) || (i == 1 && j == x) || (i == y && j == x)){
				ft_putchar('o');
			}else if (i == 1 || i == y){
				ft_putchar ('-');
			}else if (j ==1 || j == x){
				ft_putchar('|');
			}else{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
