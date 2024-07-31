/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04-addelembegin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guillem Barulls <Guillem Barulls>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:18:40 by Guillem Barulls   #+#    #+#             */
/*   Updated: 2024/07/30 20:36:04 by Guillem Barulls  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct		s_node
{
	int				x;
	struct s_node*	next;
	struct s_node*	prev;
} 					t_node;

// Como en el anterior caso, dejo los prototipos y sólo iré poniendo las nuevas 
// funciones en el actual ejercicio
void	deallocate(t_node** tail, t_node** head);

void	insert_begin(t_node** tail, int value)
{
	t_node* new_node = malloc(sizeof(t_node));
	if(!new_node)
	{
		exit (1);
		return ;
	}
	new_node->x = value;
	new_node->prev = NULL;
	new_node->next = *tail;
	// Esto es nuevo, pues tenemos que setear en el anterior nodo el prev actual
	// pero hay que chequear que la lista no estuviera vacía antes de realizar
	// esta acción o el programa daría error
	// Al crear la función init, ya no es necesario este if
	// if(*tail != NULL)
	(*tail)->prev = new_node;
	*tail = new_node;
}

void	init(t_node** tail, t_node** head, int value)
{
	t_node* new_node = malloc(sizeof(t_node));
	if (!new_node)
	{
		exit(2);
		return ;
	}

	new_node->x = value;
	new_node->next = NULL;
	new_node->prev = NULL;

	*tail = new_node;
	*head = new_node;
	// Ahora, como iremos añadiendo al inicio, este nodo quedará al final y 
	// no necesitaremos volver a tocar a head
}

int main(void)
{
	t_node*	tail = NULL;
	t_node* head = NULL;
	t_node* curr;

	//para no tener errores en la inicialización de tail y head, debemos
	//inicializarlas con el valor del primer nodo que vayamos a incluir en la lista
	//para eso usamos la funcion init
	init(&tail, &head, 7);
	insert_begin(&tail, 3);
	insert_begin(&tail, 1);

	curr = tail;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	printf("--------------\n");
	curr = head;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->prev;
	}
	deallocate(&tail, &head);
	return (0);
}

void	deallocate(t_node** tail, t_node** head)
{
	if (*tail == NULL)
		return ;

	t_node* curr = *tail;
	while (curr->next != NULL)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);

	*tail = NULL;
	*head = NULL;
}
