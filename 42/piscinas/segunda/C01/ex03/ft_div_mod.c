/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:14:31 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/21 17:26:50 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main (void){
	int div = 0, mod = 0;
	ft_div_mod(308, 13, &div, &mod);
	printf("308 / 13 = %i \n308 %% 13 = %i\n", div, mod);
	ft_div_mod(108, 8, &div, &mod);
	printf("108 / 8 = %i \n108 %% 8 = %i\n", div, mod);
	ft_div_mod(10, 3, &div, &mod);
	printf("10 / 3 = %i \n10 %% 3 = %i\n", div, mod);
}*/
