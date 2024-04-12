/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:50:22 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/25 14:34:10 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* # include <stdio.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
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

/* 	ft_strncpy(dest1, src1, 12); */
/* 	printf("%s\n", dest1); */
/* 	ft_strncpy(dest2, src2, 3); */
/* 	printf("%s\n", dest2); */
/* 	ft_strncpy(dest3, src3, 6); */
/* 	printf("%s\n", dest3); */
/* 	ft_strncpy(dest4, src4, 5); */
/* 	printf("%s\n", dest4); */
/* } */
