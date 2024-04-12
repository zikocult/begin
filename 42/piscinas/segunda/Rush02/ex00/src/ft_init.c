/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:55:11 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/07 20:03:07 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

int	ft_count_file(char *file)
{
	int		counter;
	char	caracter;
	int		fd;

	counter = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	while (read(fd, &caracter, 1) == 1)
		counter++;
	close(fd);
	return (counter);
}

char	*ft_load_file(char *file, int count)
{
	int		fd;
	ssize_t	nr_bytes;
	char	*buff;

	buff = (char *)malloc(sizeof(char) * count + 1);
	if (!buff)
		return (0);
	fd = open(file, O_RDONLY);
	nr_bytes = read(fd, buff, count);
	if (fd == -1)
		return (0);
	if (nr_bytes == 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	close(fd);
	return (buff);
}
