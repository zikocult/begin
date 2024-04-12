/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pila.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:05:11 by gbarulls          #+#    #+#             */
/*   Updated: 2023/04/06 15:24:38 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PILA_H
#define PILA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Pila {
  int tope;
  int lista[100];
} Pila;

Pila crearPila();
int isempty(Pila p);
void Push(Pila *p, int x);
int pop(Pila *p);
int top(Pila);

#endif // !PILA_H
