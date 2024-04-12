/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:18:31 by gbarulls          #+#    #+#             */
/*   Updated: 2022/11/29 00:05:37 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *a, int *b) {
  int temp;
  printf("El valor de %d %d = \n", *a, *b);
  temp = *b;
  *b = *a;
  *a = temp;
  printf("El valor de %d %d = \n", *a, *b);
}

int main() {

  int a, b;

  a = 25;
  b = 800;

  ft_swap(&a, &b);

  return EXIT_SUCCESS;
}
