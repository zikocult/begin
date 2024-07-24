/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-addelem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls->                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:29:17 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/07/24 13:01:53 by gbaruls-         ###   ########.fr       */
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

	// creando nuevo nodo
	new_node = malloc(sizeof(t_node));
	if(!new_node)
		exit(1);
	new_node->next = NULL;
	new_node->x = value;

	// comprobando que la lista no este vacia, si lo está, sólo añadir el nodo
	if (!*root)
	{
		*root = new_node;
		return ;
	}

	// añadiendo el nodo a la última posición
	curr = *root;
	while (curr->next != NULL) 
	{
		curr = curr->next;
	}
	curr->next = new_node;
}

int main(int argc, char *argv[])
{
	t_node* root;
	t_node* curr;

	// toda la parte de root es inicializando el primer nodo manualmente
	// root = malloc(sizeof(t_node));
	// if (!root)
	// 	exit (2);
	// root->x = 15;
	// root->next = NULL;

	// A partir de aqui ya hemos arreglado que el primer nodo se incluya
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

	//Recuerdo que esto esta haciendo memory leaks, llegaremos  a ello en el tercer ejercicio

	return (0);
}
