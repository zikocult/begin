/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7-removingelemen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls->                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:29:17 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/07/24 17:31:02 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node 
{
	int x;
	struct s_node* next;
} t_node;

// para no encontrarme con todas las funciones aquí arriba, las iré declarando y bajando, dejando arriba sólo la del tema del fichero, en este caso, addelembegin
void insert_end(t_node** root, int value);
void deallocate(t_node** root);
void insert_begin(t_node** root, int value);
void insert_after(t_node* node, int value);
void insert_sorted(t_node** root, int value);
void insert_inv_sort(t_node** root, int value);

void remove_element(t_node** root, int value)
{
	t_node* curr;
	t_node* to_remove;

	if (!*root )
		return ;
	if ((*root)->x == value)
	{
		to_remove = *root;
		*root = (*root)->next;
		free(to_remove);
		return ;
	}
	curr = *root;
	while (curr->next != NULL) 
	{
		if (curr->next->x == value)
		{
			to_remove = curr->next;
			curr->next = curr->next->next;
			free(to_remove);
			return ;
		}
		curr = curr->next;
	}

}

int main(int argc, char *argv[])
{
	t_node* root;
	t_node* curr;

	root = NULL;
	insert_end(&root, 2);
	insert_end(&root, 4);
	insert_end(&root, 6);
	insert_end(&root, 10);
	insert_sorted(&root, 8);
	remove_element(&root, 2);
	remove_element(&root, 10);


	curr = root;
	while (curr != NULL) 
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}

	deallocate(&root);	
	return (0);
}

void insert_end(t_node** root, int value)
{
	t_node* new_node; 
	t_node* curr;

	new_node = malloc(sizeof(t_node));
	if(!new_node)
		exit(1);
	new_node->next = NULL;
	new_node->x = value;

	if (!*root)
	{
		*root = new_node;
		return ;
	}

	curr = *root;
	while (curr->next != NULL) 
	{
		curr = curr->next;
	}
	curr->next = new_node;
}

void insert_begin(t_node** root, int value)
{
	t_node* new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->x = value;
	new_node->next = *root;
	*root = new_node;
}

void deallocate(t_node** root)
{
	t_node* curr;
	t_node* aux;

	curr = *root;
	while(curr)
	{
		aux = curr;
		curr = curr->next;
		free (aux);
	}
	*root = NULL;
}

void insert_after(t_node* node, int value)
{
	t_node* new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->x = value;
	new_node->next = node->next;
	node->next = new_node;
}

void insert_sorted(t_node** root, int value)
{
	t_node* curr;

	//por si es mas pequeño que el primer elemento
	if (!*root || (**root).x >= value) 
	{
		insert_begin(root, value);
		return ;
	}

	curr = *root;
	while (curr->next != NULL)
	{
		if (curr->next->x >= value)
		{
			insert_after(curr, value);
			return ;
		}
		curr = curr->next;
	}
	insert_after(curr, value);
}

void insert_inv_sort(t_node** root, int value)
{
	// con un pequeño cambio de signo, podemos invertir el orden de mayor a menor
	t_node* curr;

	if (!*root || (**root).x <= value) 
	{
		insert_begin(root, value);
		return ;
	}

	curr = *root;
	while (curr->next != NULL)
	{
		if (curr->next->x <= value)
		{
			insert_after(curr, value);
			return ;
		}
		curr = curr->next;
	}
	insert_after(curr, value);
}
