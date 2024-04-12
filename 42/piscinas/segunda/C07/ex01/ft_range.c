/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:03:52 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/01 11:56:54 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*mal;

	i = 0;
	if (max <= min)
		return (NULL);
	mal = (int *)malloc(sizeof(*mal) * ((max - min) + 1));
	if (!mal)
		return (NULL);
	mal[0] = min;
	while (min + i != max)
	{
		mal[i] = min + i;
		i++;
	}
	return (mal);
}

/* int main () */
/* { */
/* 	int max, min, *valor, i; */
/* 	i = 0; */
/* 	min = 8; */
/* 	max = 18; */
/* 	while (i + min != max) */
/* 	{ */
/* 		valor = ft_range(min, max); */
/* 		printf("%i\n", valor[i]); */
/* 		i++; */	
/* 	} */
/* 	free(valor); */
/* } */
