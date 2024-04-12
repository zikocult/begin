/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ColaDobleFunciones.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:27:02 by gbarulls          #+#    #+#             */
/*   Updated: 2023/04/13 21:16:09 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ColaDoble.h"

Cola crearCola(int tamano) {
  Cola c;
  c.primero = 1;
  c.ultimo = 0;
  c.tamano = tamano;
  c.disponible = c.tamano;
  c.lista = (int *)calloc(c.tamano, sizeof(int));
  return (c);
}

int isempty(Cola c) {
  if ((c.primero == c.ultimo + 1) && (c.disponible == c.tamano)) {
    return (1);
  }
  return (0);
}

void encolarFinal(Cola *c, int x) {
  if (c->disponible == 0)
    printf("Ya está en su máxima capacidad \n");
  else {
    c->ultimo = (c->ultimo % c->tamano) + 1;
    c->lista[c->ultimo - 1] = x;
    c->disponible--;
  }
}
void encolarInicio(Cola *c, int x) {
  if (c->ultimo == 0)
    encolarFinal(c, x);
  else if (c->disponible == 0)
    printf("Ya está en su máxima capacidad \n");
  else if (c->primero == 1) {
    c->primero += c->tamano - 1;
    c->lista[c->primero - 1] = x;
    c->disponible--;
  } else {
    c->primero = (c->primero + c->tamano) % (c->tamano + 1);
    c->lista[c->primero - 1] = x;
    c->disponible--;
  }
}

int desencolarInicio(Cola *c) {
  int aux;

  if (isempty(*c) == 1)
    printf("La cola está vacía\n");
  else {
    c->disponible++;
    aux = c->lista[c->primero - 1];
    c->lista[c->primero - 1] = 0;
    if (c->primero != c->ultimo) {
      c->primero = (c->primero % c->tamano) + 1;
    } else {
      c->primero++;
    }
    if (c->primero == c->ultimo + 1) {
      *c = crearCola(c->tamano);
    }
  }
  return (aux);
}

int desencolarFinal(Cola *c) {
  int aux;

  if (isempty(*c) == 1)
    printf("La cola está vacía\n");
  else {
    c->disponible++;
    aux = c->lista[c->ultimo - 1];
    c->lista[c->ultimo - 1] = 0;
    c->ultimo--;
  }
  if (c->ultimo == 0) {
    if (c->primero == c->ultimo + 1) {
      *c = crearCola(c->tamano);
    } else {
      c->ultimo += c->tamano;
    }
  }
  if (c->primero == c->ultimo + 1) {
    *c = crearCola(c->tamano);
  }
  return (aux);
}

void mostrarValores(Cola queue) {
  for (int i = 0; i < queue.tamano; i++) {
    printf("Posicion %d \t valor %d \n", i + 1, queue.lista[i]);
  }
}

void mostrarIndice (Cola queue){
  printf("Primero = %d\n", queue.primero);
  printf("Ultimo = %d\n", queue.ultimo);
  printf("Disponible = %d\n", queue.disponible);
}
