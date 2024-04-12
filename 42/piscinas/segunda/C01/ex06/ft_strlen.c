/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:20:43 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/21 18:56:54 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

/*int main (){
	char str[] = "Hola Mundo!";
	printf("Longitud = %i\n", ft_strlen(str));
	printf("Longitud = %lu\n", strlen(str));
}*/
