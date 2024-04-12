/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:33:52 by gbarulls          #+#    #+#             */
/*   Updated: 2023/05/26 21:22:26 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_pf(char c, int *count);
void	ft_putstr_pf(char *str, int *count);
void	ft_nbr_pf(int number, int *count);
void	ft_unint_pf(unsigned int number, int *count);
void	ft_hexa_pf(unsigned int num, char *base, int *count);
void	ft_pointer_pf(void *pointer, int *count);

#endif
