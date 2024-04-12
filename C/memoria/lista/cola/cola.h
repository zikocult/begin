/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cola.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:23:45 by gbarulls          #+#    #+#             */
/*   Updated: 2023/04/06 15:45:54 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLA_H
#define COLA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Cola {
  int primero;
  int ultimo;
  int lista[100];
} Cola;

Cola crearCola();
int isempty(Cola c);
void encolar (Cola *c, int x);
int desencolar (Cola *c);
int firstCola (Cola c);

#endif // !COLA_H
