/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strerror.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:26:10 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/11 17:26:14 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
   int errnum;

   for( errnum=0; errnum<39; errnum++ )
     printf( "strerror(%d) = %s\n", errnum, strerror( errnum ) );

   return 0;
}
