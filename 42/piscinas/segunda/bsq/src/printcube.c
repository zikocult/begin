/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printcube.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:06:12 by gpolo             #+#    #+#             */
/*   Updated: 2024/04/10 17:44:08 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

void	printthecube(char *rules, char **map, int *maxcube)
{
	int	x;

	x = maxcube[1];
	while (maxcube[2] != maxcube[4])
	{
		while (maxcube[1] != maxcube[3])
		{
			map[maxcube[2]][maxcube[1]] = rules[2];
			maxcube[1]++;
		}
		maxcube[2]++;
		maxcube[1] = x;
	}
}

void	printcube(char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (map[y] != NULL)
	{
		while (map[y][x] != '\0')
			ft_putchar(map[y][x++]);
		ft_putchar('\n');
		x = 0;
		y++;
	}
}
