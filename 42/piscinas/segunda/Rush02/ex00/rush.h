/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:53:20 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/07 21:13:44 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		ft_count_file(char *file);
char	*ft_load_file(char *file, int count);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_find_line(int lines, char *buff);
int		ft_show_number(char *buff, char *ac);
int		ft_str_lenght(char *ac);

#endif
