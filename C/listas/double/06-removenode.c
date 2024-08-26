/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06-removenode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guillem Barulls <Guillem Barulls>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:18:40 by Guillem Barulls   #+#    #+#             */
/*   Updated: 2024/08/26 10:58:27 by Guillem Barulls  ###   ########.fr       */
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
void	init(t_node** tail, t_node** head, int value);
void	insert_begin(t_node** tail, int value);
void	insert_end(t_node** head, int value);

void	remove_node(t_node* node)
{
	// Amb això posem el next i el prev dels que envolten el node a borrar
	if (node->prev != NULL)
		node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	// Borrem el node en si
	free(node);
}

int main(void)
{
	t_node*	tail = NULL;
	t_node* head = NULL;
	t_node* curr;

	init(&tail, &head, 5);
	insert_begin(&tail, 3);
	insert_begin(&tail, 1);
	insert_end(&head, 7);
	remove_node(tail->next);
	// Si volguessim borrar el primer element tenim que modificar tail, quedaria
	//  així (idem per head, el final de la llista):
	t_node* aux = tail->next;
	remove_node(tail);
	tail = aux;

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
	(*tail)->prev = new_node;
	*tail = new_node;
}

void	insert_end(t_node** head, int value)
{
	t_node* new_node = malloc(sizeof(t_node));
	if(!new_node)
	{
		exit (1);
		return ;
	}
	new_node->x = value;
	new_node->next = NULL;
	new_node->prev = *head;
	(*head)->next = new_node;

	*head = new_node;
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
}
