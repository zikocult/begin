/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:10:35 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/25 15:22:32 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'a') || (*str > 'z'))
			return (0);
		str ++;
	}
	return (1);
}

/* int main( ){ */
/* 	char src1[] = "patata"; */
/* 	char src2[] = "caCota"; */
/* 	char src3[] = ""; */
/* 	char src4[] = "traMbolico"; */
/* 	printf("1: %i\n", ft_str_is_lowercase(src1)); */
/* 	printf("2: %i\n", ft_str_is_lowercase(src2)); */
/* 	printf("3: %i\n", ft_str_is_lowercase(src3)); */
/* 	printf("4: %i\n", ft_str_is_lowercase(src4)); */
/* } */
