/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07-findnode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guillem Barulls <Guillem Barulls>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:18:40 by Guillem Barulls   #+#    #+#             */
/*   Updated: 2024/08/26 11:27:35 by Guillem Barulls  ###   ########.fr       */
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
void	remove_node(t_node* node);

t_node* find_node(t_node* tail, int value)
{
	t_node* curr;

	curr = tail;
	while (curr)
	{
		if (curr->x == value)
			return (curr);
		curr = curr->next;
	}
	return (NULL);	
}

t_node* find_node_recursive(t_node* node, int value)
{
	if (node == NULL)
		return (NULL);
	if (node->x == value)
		return (node);
	// A mi m'agrada més aquesta forma que he fet jo:
	// else if (node->next == NULL)
	// 	return (NULL);
	return (find_node_recursive(node->next, value));
}

int main(void)
{
	t_node*	tail = NULL;
	t_node* head = NULL;
	t_node* curr;
	t_node* aux;

	init(&tail, &head, 5);
	insert_begin(&tail, 3);
	insert_begin(&tail, 1);
	insert_end(&head, 7);
	aux = find_node(tail, 3);
	printf("El nodo está en: %p y tiene el valor: %d\n", aux, aux->x);
	aux = find_node_recursive(tail, 7);
	printf("El nodo está en: %p y tiene el valor: %d\n", aux, aux->x);
	aux = find_node(tail, 9);
	printf("Buscando valor que no está, devuelve: %p\n", aux);
	aux = find_node_recursive(tail, 9);
	printf("Buscando valor que no está recursivamente, devuelve: %p\n", aux);
	// la millor manera de posar el printf seria, així assegurem tenir valor:
	if (aux == NULL)
		printf("Node not found\n");
	else
		printf("El nodo está en: %p y tiene el valor: %d\n", aux, aux->x);
	printf("\n-----Lista completa------\n");
	curr = tail;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	printf("\n-----A la inversa------\n");
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
