/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:36:58 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/02 11:16:49 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	count;

	count = 0;
	while (src[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// 	char *str;
// 	char *str2;
// 	char *str3;
// 	char frase [100]= "Otra pregunta mas";
// 	char frase2 [100]= "mnopqrstuvwxyz.";
// 	char frase3 [100] = "";
// 	str = ft_strdup(frase);
// 	printf("El mio = %s\n", str);
// 	str = strdup(frase);
// 	printf("Original = %s\n", str);
// 	free(str);
// 	str2 = ft_strdup(frase2);
// 	printf("El mio = %s\n", str2);
// 	str2 = strdup(frase2);
// 	printf("Original = %s\n", str2);
// 	free(str2);
// 	str3 = ft_strdup(frase3);
// 	printf("El mio = %s\n", str3);
// 	str3 = strdup(frase3);
// 	printf("Original = %s\n", str3);
// 	free(str3);
// }
