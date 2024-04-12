/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cola.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:47:20 by gbarulls          #+#    #+#             */
/*   Updated: 2023/04/06 15:57:17 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cola.h"
#include <stdio.h>

int main(void) {
  Cola colita = crearCola();

  printf("El primer elemento de la cola es %d\n", colita.primero);
  printf("El ultimo elemento de la cola es %d\n", colita.ultimo);

  printf("La cola está vacía? %d\n", isempty(colita));

  encolar(&colita, 10);
  encolar(&colita, 13);
  encolar(&colita, 17);
  printf("La cola está vacía? %d\n", isempty(colita));

  printf("------------------\n");
  printf("%d\n", desencolar(&colita));
  printf("%d\n", desencolar(&colita));
  printf("%d\n", desencolar(&colita));
  printf("La cola está vacía? %d\n", isempty(colita));

  return EXIT_SUCCESS;
}
