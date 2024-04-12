/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:55:43 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/25 19:34:44 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main( ){ */
/* 	char src1[] = "patata"; */
/* 	char src2[] = "cacota"; */
/* 	char src3[] = ""; */
/* 	char src4[] = "trambolico"; */
/* 	char dest1[50] = ""; */
/* 	char dest2[50] = ""; */
/* 	char dest3[50] = ""; */
/* 	char dest4[50] = ""; */
/* 	ft_strcpy(dest1, src1); */
/* 	printf("%s\n", dest1); */
/* 	ft_strcpy(dest2, src2); */
/* 	printf("%s\n", dest2); */
/* 	ft_strcpy(dest3, src3); */
/* 	printf("%s\n", dest3); */
/* 	ft_strcpy(dest4, src4); */
/* 	printf("%s\n", dest4); */
/* } */
