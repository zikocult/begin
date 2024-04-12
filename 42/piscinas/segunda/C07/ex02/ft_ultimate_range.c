/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:21:09 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/04 12:39:20 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*mal;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	mal = (int *)malloc(sizeof(*mal) * (max - min));
	if (!mal)
		return (0);
	while (min + i != max)
	{
		mal[i] = min + i;
		i++;
	}
	mal[i] = '\0';
	*range = mal;
	return (i);
}

/* int main() { */
/* 	int a; */
/* 	int *arr; */
/* 	int min = -2; */
/* 	int max = 4; */
/* 	a = ft_ultimate_range(&arr, min, max); */
/* 	printf("Valor de i: %i\n", a); */
/* 	for(int i = 0; i < (max - min); i++) */
/* 		printf("%i\n", arr[i]); */
/* 	free(arr); */
/* 	return 0; */
/* } */
