/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:56:06 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/27 12:29:45 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0' && i < nb)
	{
		dest[i + count] = src[i];
		i++;
	}
	dest[i + count] = '\0';
	return (dest);
}

/* int main (void) */
/* { */
/* 	char src[20] = " loca"; */
/* 	char dest[50] = "patata"; */
/* 	printf("%s\n", ft_strncat(dest, src, 10)); */
/* } */
