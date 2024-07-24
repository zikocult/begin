/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-deallocate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls->                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:29:17 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/07/24 13:19:01 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node 
{
	int x;
	struct s_node* next;
} t_node;

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

int main(int argc, char *argv[])
{
	t_node* root;
	t_node* curr;

	root = NULL;
	insert_end(&root, 2);
	insert_end(&root, 12);
	insert_end(&root, -2);

	curr = root;
	while (curr != NULL) 
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}

	// Aquí es donde llamamos a la liberación de toda la memoria alojada
	deallocate(&root);	
	return (0);
}
