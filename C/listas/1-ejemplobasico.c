/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-ejemplobasico.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls->                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:29:17 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/07/24 12:40:22 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node 
{
	int x;
	struct s_node* next;
} t_node;


int main(int argc, char *argv[])
{
	t_node root;
	t_node* curr;

	root.x = 15;
	root.next = malloc(sizeof(t_node));
	root.next->x = 2;
	root.next->next = malloc(sizeof(t_node));
	root.next->next->x = 11;
	root.next->next->next = NULL;

	curr = &root;
	while (curr != NULL) 
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}

	//Recuerdo que esto esta haciendo memory leaks, llegaremos  a ello en el tercer ejercicio

	return (0);
}
