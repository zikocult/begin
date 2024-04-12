/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EjercicioColaDoble.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:36:49 by gbarulls          #+#    #+#             */
/*   Updated: 2023/04/13 22:03:49 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ColaDoble.h"

int main(void) {
  int tamanio;
  Cola queue;

  printf("Ingresa el tamaño: ");
  scanf("%d", &tamanio);
  queue = crearCola(tamanio);

  printf("\n*** Primera ejecucion ***\n\n");
  encolarFinal(&queue, 11);
  encolarFinal(&queue, 12);
  mostrarValores(queue);
  printf("-------------------------------------------\n");
  mostrarIndice(queue);
  printf("-------------------------------------------\n");

  printf("\n*** Segunda ejecucion ***\n\n");
  desencolarInicio(&queue);
  desencolarInicio(&queue);
  mostrarValores(queue);
  printf("-------------------------------------------\n");
  mostrarIndice(queue);
  printf("-------------------------------------------\n");

  printf("\n*** Tercera ejecucion ***\n\n");
  encolarFinal(&queue, 13);
  encolarFinal(&queue, 14);
  encolarInicio(&queue, 10);
  encolarInicio(&queue, 9);
  mostrarValores(queue);
  printf("-------------------------------------------\n");
  mostrarIndice(queue);
  printf("-------------------------------------------\n");

  free(queue.lista);
  return EXIT_SUCCESS;
}
