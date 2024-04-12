/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls->                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:38:07 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/28 23:06:09 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int main (int argc, char **argv){
// 	int i;
//
// 	if (argc < 2)
// 		return (0);
// 	printf("0\n");
// 	for (i = 1; i <= argv[1][0] - 48; i++) {
// 		printf("%i\n", ft_fibonacci(i));
// 	}
// }
