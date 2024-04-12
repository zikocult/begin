/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:35:54 by gbarulls          #+#    #+#             */
/*   Updated: 2022/12/05 14:04:06 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	
	printf("El valor %p \n", str);
	printf("El valor %p \n", to_find);
	printf("El valor %p \n", &str[2]);
	printf("El valor %p \n", &to_find[2]);
	printf("El contenido %c\n", *str);
	printf("El contenido %c\n", *to_find);
	printf("El contenido %c\n", str[2]);
	printf("El contenido %c\n", to_find[2]);

	printf("\n");

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (NULL);
}

int main (void)
{
	printf("%s\n", ft_strstr("Guillem", "Barulls"));
	printf("%s\n", ft_strstr("Guillem", "Guillem"));
	return 0;
}
