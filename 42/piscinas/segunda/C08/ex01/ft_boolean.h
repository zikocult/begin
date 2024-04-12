/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:30:02 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/08 18:07:19 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define EVEN(nbr) (nbr % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

typdef enum e_list
{
	FALSE = 0,
	TRUE = 1,
} t_bool;

#endif

/* # define SUCCESS 0 */
/* # define FALSE 0 */
/* # define TRUE 1 */
/* # ifndef EVEN */
/* #  define EVEN(nbr) (nbr % 2 == 0) */
/* # endif */
