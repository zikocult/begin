/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12-serialize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls->                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:29:17 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/08/26 12:17:13 by Guillem Barulls  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct s_node 
{
	int x;
	struct s_node* next;
} t_node;

// Este es el listado de TODAS las funciones que podemos necesitar con una
// lista linkada simple
// Los ejemplos de cada una, los iremos encontrando en los anteriores ejercicios
void	insert_end(t_node** root, int value);
void	deallocate(t_node** root);
void	insert_begin(t_node** root, int value);
void	insert_after(t_node* node, int value);
void	insert_sorted(t_node** root, int value);
void	insert_inv_sort(t_node** root, int value);
void	remove_element(t_node** root, int value);
void	reverse(t_node** root);
int		detect_loop(t_node* root);
int		iterative_count(t_node* root);
int		recursive_count(t_node* root);

// En aquest cas no seguiré la norma, simplement copiaré el vist al tutorial
void	serialize(t_node* root)
{
	FILE* file = fopen("list.txt", "w");
	if (file == NULL)
		exit (1);
	for (t_node* curr = root; curr != NULL; curr = curr->next) {
		if (curr->next != NULL)
			fprintf(file, "%d, ", curr->x);
		else
			fprintf(file, "%d\n", curr->x);
	}
	fclose(file);
}

void	deserialize(t_node** root)
{
	int	val;

	FILE* file = fopen("list.txt", "r");
	if (file == NULL)
		exit (1);
	while (fscanf(file, "%d, ", &val) > 0)
		insert_end(root, val);
	while (fscanf(file, "%d\n", &val) > 0)
		insert_end(root, val);
	fclose(file);
}

int main(void)
{
	t_node* root;
	t_node* root2;
	t_node* curr;

	root = NULL;
	root2 = NULL;
	insert_end(&root, 1);
	insert_end(&root, 2);
	insert_end(&root, 3);
	insert_end(&root, 6);
	insert_end(&root, 7);
	serialize(root);
	deserialize(&root2);
	curr = root2;
	while (curr != NULL) 
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	deallocate(&root);	
	deallocate(&root2);	
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

void reverse(t_node** root)
{
	t_node* prev;
	t_node* curr;
	t_node* next;

	prev = NULL;
	curr = *root;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*root = prev;
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

int detect_loop(t_node* root)
{
	t_node* slow;
	t_node* fast;

	slow = root;
	fast = root;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}

int		iterative_count(t_node* root)
{
	int	count = 0;

	for (t_node* curr = root; curr != NULL; curr = curr->next)
		count++;
	return (count);
}

int		recursive_count(t_node* root)
{
	if(!root)
		return (0);
	return (1 + recursive_count(root->next));
}
