/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01-ejemplobasico.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guillem Barulls <Guillem Barulls>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:18:40 by Guillem Barulls   #+#    #+#             */
/*   Updated: 2024/07/30 19:35:34 by Guillem Barulls  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node
{
	int				x;
	struct s_node*	next;
	struct s_node*	prev;
} 					t_node;

int main(void)
{
	// Tail es el nodo de inicio, el que sólo tiene algo en next
	t_node*	tail = malloc(sizeof(t_node));
	if(!tail)
		return (1);
	tail->x = 1;
	tail->prev = NULL;
	tail->next = malloc(sizeof(t_node));
	if(!tail->next)
		return (2);
	tail->next->x = 3;
	tail->next->prev = tail;
	tail->next->next = malloc(sizeof(t_node));
	if (!tail->next->next)
		return (3);
	tail->next->next->x = 7;
	tail->next->next->prev = tail->next;
	tail->next->next->next= NULL;
	
	// head será nuestro nodo final, recuerdo que ya tiene una reserva de memoria
	t_node* head = tail->next->next;

	return (0);
}
