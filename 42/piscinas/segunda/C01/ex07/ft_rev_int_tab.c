/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:53:21 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/22 12:25:23 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size = size - 1;
	while (size > i)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size--;
		i++;
	}
}

/* void	print_array(int *arr, int size) */
/* { */
/* 	int	i; */

/* 	i = 0; */
/* 	while (i < size) */
/* 		printf("%d ", arr[i++]); */
/* 	printf("\n"); */
/* } */

/* int	main(void) */
/* { */
/* 	int	empty[0]; */
/* 	int	test_even[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; */
/* 	int	test_odd[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; */

/* 	ft_rev_int_tab(empty, 0); */
/* 	ft_rev_int_tab(test_even, 10); */
/* 	ft_rev_int_tab(test_odd, 11); */
/* 	print_array(empty, 0); */
/* 	print_array(test_even, 10); */
/* 	print_array(test_odd, 11); */
/* } */
