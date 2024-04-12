/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls->                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:30:33 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/09 18:08:29 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
#include <stdlib.h>

int	find_char(char c, char *str)
{
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int	str_lenght(char *str, char *charset)
{
	int	control;
	int	count;

	control = 1;
	count = 0;
	while (*str)
	{
		if (!find_char(*str, charset) && control)
		{
			count++;
			control = 0;
		}
		else if (find_char(*str, charset))
			control = 1;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src, char *charset)
{
	char	*dest;
	char	*buffer;
	int		length;

	length = 0;
	buffer = src;
	while (*buffer && !find_char(*buffer++, charset))
		length++;
	dest = (char *)malloc(sizeof(*src) * length);
	buffer = dest;
	while (*src && length-- > 0)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	**tmp;
	int		control;

	strs = (char **)malloc(sizeof(*strs) * str_lenght(str, charset) + 1);
	tmp = strs;
	control = 1;
	while (*str)
	{
		if (!find_char(*str, charset) && control)
		{
			control = 0;
			*tmp = ft_strdup(str, charset);
			tmp++;
		}
		else if (find_char(*str, charset))
			control = 1;
		str++;
	}
	*tmp = 0;
	return (strs);
}

 int		main(void)
 {
 	char **strs;

	strs = ft_split("Hola\n Mundo\n Que\n Tal!\n", "\n");
 	while (*strs)
 			printf("%s\n", *strs++);
 	return (0);
 }
