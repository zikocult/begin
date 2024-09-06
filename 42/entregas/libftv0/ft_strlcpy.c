/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:19:00 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/06/12 18:17:26 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main (void)
{
	char a[10] = "patata";
	char b[50] = "qeveve";
	int ret = ft_strlcpy(b, a, 1000);
	printf("Ret = %i - %s\n", ret, b);
	char c[10] = "boniato";
	char d[10] = "qeveve";
	ret = ft_strlcpy(d, c, 0);
	printf("Ret = %i - %s\n", ret, d);
	char e[10] = "mor";
	char f[10] = "cande";
	ret = ft_strlcpy(f, e, 5);
	printf("Ret = %i - %s\n", ret, f);
}*/
