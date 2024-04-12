/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ColaDoble.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:24:01 by gbarulls          #+#    #+#             */
/*   Updated: 2023/04/13 21:14:34 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLA_DOBLE_H
#define COLA_DOBLE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Cola {
  int primero;
  int ultimo;
  int tamano;
  int disponible;
  int *lista;
} Cola;

Cola crearCola(int tamano);
int isempty(Cola c);
void encolarInicio (Cola *c, int x);
void encolarFinal (Cola *c, int x);
int desencolarInicio (Cola *c);
int desencolarFinal (Cola *c);
void mostrarValores (Cola queue);
void mostrarIndice (Cola queue);

#endif // !COLA_DOBLE_H
