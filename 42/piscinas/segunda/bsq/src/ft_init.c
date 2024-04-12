/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:24:30 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/10 17:41:10 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

int	init_count_var(char *file)
{
	int		count;
	int		fd;
	char	caracter;

	count = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &caracter, 1) == 1 && caracter != '\n')
		count++;
	close(fd);
	return (count);
}

char	*init_vars(char *file)
{
	char	*var;
	char	caracter;
	int		fd;
	int		i;
	int		j;

	i = 0;
	j = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	var = (char *)malloc(sizeof(char) * init_count_var(file) + 1);
	if (!var)
		return (NULL);
	while (read(fd, &caracter, 1) == 1 && caracter != '\n')
	{
		if (i >= init_count_var(file) - 3)
			var[j++] = caracter;
		i++;
	}
	close(fd);
	return (var);
}

int	init_count_map(char *file)
{
	int		count;
	int		fd;
	int		control;
	char	caracter;

	count = 0;
	control = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &caracter, 1) == 1)
	{
		if (caracter == '\n')
			control = 1;
		if (control == 1)
			count++;
	}
	close(fd);
	return (count);
}

char	*init_tmp_map(char *file)
{
	char	*map;
	char	caracter;
	int		fd;
	int		control;
	int		i;

	i = 0;
	control = 0;
	map = (char *)malloc(sizeof(char) * init_count_map(file));
	if (!map)
		return (NULL);
	fd = open(file, O_RDONLY);
	while (read(fd, &caracter, 1) == 1)
	{
		if (control == 1)
			map[i++] = caracter;
		if (caracter == '\n')
			control = 1;
	}
	close(fd);
	return (map);
}

char	**init_map(char *file)
{
	char	*map_tmp;
	char	**map;

	map_tmp = init_tmp_map(file);
	map = ft_split(map_tmp, '\n');
	free (map_tmp);
	return (map);
}

/* int main () */
/* { */
/* 	char *var; */
/* 	char **map; */
/* 	int	i; */
/* 	i = 0; */
/* 	var = init_vars("patata"); */
/* 	printf("%s\n", var); */
/* 	map = init_map("patata"); */
/* 	while (map[i]) */
/* 		printf("%s\n", map[i++]); */
/* 	free(var); */
/* 	free(map); */
/* 	i = 0; */
/* 	while (map[i]) */
/* 		free (map[i++]); */
/* 	return (0); */
/* } */
