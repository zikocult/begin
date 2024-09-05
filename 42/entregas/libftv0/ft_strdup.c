/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:50:01 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/06/18 13:16:05 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = ft_strlen(s);
	ptr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = (char)s[i];
		i++;
	}
	return (ptr);
}
/*
int main (int argc, char **argv)
{
	if (argc == 2)
	{
		char *ptr = ft_strdup(argv[1]);
		printf("%s\n", ptr);
		free(ptr);
	}
}*/
