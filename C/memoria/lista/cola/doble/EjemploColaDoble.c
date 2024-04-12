/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ColaDoble.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:16:22 by gbarulls          #+#    #+#             */
/*   Updated: 2023/04/13 21:35:38 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ColaDoble.h"

int main(void) {
  Cola queue;

  queue = crearCola(10);

  // encolamos 5 valores random
  // el último, será el primero que encolemos
  // y el primero, el último encolado
  encolarInicio(&queue, 10);
  encolarInicio(&queue, 20);
  encolarFinal(&queue, 11);
  encolarInicio(&queue, 30);
  encolarInicio(&queue, 40);
  encolarInicio(&queue, 50);

  mostrarValores(queue);
  // desencolamos 3 veces, dejando 2 encolada

  // printf("%d\n", desencolarFinal(&queue));
  // printf("%d\n", desencolarFinal(&queue));
  printf("%d\n", desencolarFinal(&queue));
  printf("%d\n", desencolarInicio(&queue));
  printf("%d\n", desencolarInicio(&queue));

  // Mostramos valores
  mostrarValores(queue);
  mostrarIndice(queue);

  free(queue.lista);
  return EXIT_SUCCESS;
}
