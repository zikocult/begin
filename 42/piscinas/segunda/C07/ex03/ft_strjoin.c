/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:20:46 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/02 16:37:33 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_construct(int size, char **strs, char *sep)
{
	int		siz_sep;
	int		tot_size;
	int		i;
	char	*mal;

	siz_sep = ft_strlen(sep);
	i = 0;
	tot_size = 0;
	while (i < size)
	{
		tot_size = tot_size + ft_strlen(strs[i]);
		i++;
	}
	tot_size = siz_sep + tot_size;
	mal = (char *)malloc((sizeof(strs) * tot_size) + 1);
	return (mal);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*mal;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	mal = ft_construct(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			mal[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				mal[k++] = sep[j++];
		}
		i++;
	}
	mal[k] = '\0';
	return (mal);
}

/* int	main(void) */
/* { */
/* 	char	*tab[4]; */
/* 	tab[0] = "Potato"; */
/* 	tab[1] = "Guindilla"; */
/* 	tab[2] = "Chanchito"; */
/* 	tab[3] = "Malo"; */
/* 	char	*test; */
/* 	test = ft_strjoin(4, tab, " / "); */
/* 	printf("%s\n", test); */
/* 	free(test); */
/* 	return (0); */
/* } */
