/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcionescola.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:47:29 by gbarulls          #+#    #+#             */
/*   Updated: 2023/04/06 16:08:18 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cola.h"

Cola crearCola() {
  Cola c;
  c.primero = 1;
  c.ultimo = 0;
  return c;
}

int isempty(Cola c) {
  if (c.primero == c.ultimo + 1)
    return (0);
  return (1);
}

void encolar(Cola *c, Documento x) {
  c->lista[c->ultimo] = x;
  c->ultimo++;
}

int desencolar(Cola *c) {
  if (isempty(*c) == 0) {
    printf("La cola está vacía \n");
    return (-1);
  } else {
    int aux = c->lista[c->primero - 1];
    c->primero++;
    if (c->primero == c->ultimo + 1) {
      *c = crearCola();
    }
    return aux;
  }
}

int firstCola(Cola c) {
  c.primero++;
  return c.lista[c.primero - 1];
}
