/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:39:08 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/21 18:27:44 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*int main (){
	int a = 25, b = 6;
	printf("a = %i, b = %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div = %i rest = %i\n", a, b);
}*/
