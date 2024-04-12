/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:36:09 by gbarulls          #+#    #+#             */
/*   Updated: 2023/05/26 21:22:09 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void ft_case_pf(va_list args, const char format, int *count) {
  if (format == 'c')
    ft_putchar_pf(va_arg(args, int), count);
  else if (format == 's')
    ft_putstr_pf(va_arg(args, char *), count);
  else if (format == '%')
    ft_putchar_pf('%', count);
  else if (format == 'd' || format == 'i')
    ft_nbr_pf(va_arg(args, int), count);
  else if (format == 'u')
    ft_unint_pf(va_arg(args, unsigned int), count);
  else if (format == 'x')
    ft_hexa_pf(va_arg(args, unsigned int), "0123456789abcdef", count);
  else if (format == 'X')
    ft_hexa_pf(va_arg(args, unsigned int), "0123456789ABCDEF", count);
  else if (format == 'p')
    ft_pointer_pf(va_arg(args, void *), count);
}

int ft_printf(const char *str, ...) {
  va_list args;
  int i;
  int count;

  count = 0;
  i = 0;
  va_start(args, str);
  while (str[i] && count != -1) {
    if (str[i] == '%') {
      ft_case_pf(args, str[i + 1], &count);
      i++;
    } else
      ft_putchar_pf(str[i], &count);
    i++;
  }
  va_end(args);
  return (count);
}
