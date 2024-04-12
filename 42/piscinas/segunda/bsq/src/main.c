/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:31:05 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/10 17:43:16 by gbaruls-         ###   ########.fr       */
/*   Updated: 2024/04/10 13:09:49 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

static int	execution(char *argv)
{
	char	*var;
	char	**map;
	int		j;
	int		fd;

	j = 0;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Lectura de fichero erronea.");
		return (1);
	}
	close(fd);
	var = init_vars(argv);
	map = init_map(argv);
	maxcubepos(var, map);
	free(var);
	while (map[j++])
		free(map[j]);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
	{
		ft_putstr("Lectura de fichero erronea.");
		return (1);
	}
	while (i <= argc - 1)
	{
		if (execution(argv[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
/* int main (void) */
/* { */
/* 	char	*var; */
/* 	char	**map; */
/* 	int		j; */
/* 	int		fd; */

/* 	j = 0; */
/* 	fd = open("example.dict", O_RDONLY); */
/* 	if (fd == -1) */
/* 	{ */
/* 		ft_putstr("Lectura de fichero erronea."); */
/* 		return (1); */
/* 	} */
/* 	close(fd); */
/* 	var = init_vars("example.dict"); */
/* 	map = init_map("example.dict"); */
/* 	maxcubepos(var, map); */
/* 	free(var); */
/* 	while (map[j++]) */
/* 		free(map[j]); */
/* 	return (0); */
/* } */
