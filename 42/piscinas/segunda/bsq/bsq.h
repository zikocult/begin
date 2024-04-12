/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:31:25 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/10 17:50:21 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_str_lenght(char *ac);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		length_dict(char *file);
char	*init_vars(char *file);
char	**init_map(char *file);
char	**ft_split(char const *s, char c);
void	printcube(char **map);
void	printthecube(char *rules, char **map, int *maxcube);
void	maxcubepos(char *rules, char **map);

#endif
