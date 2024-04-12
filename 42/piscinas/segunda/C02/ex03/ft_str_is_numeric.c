/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:23:15 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/25 15:27:36 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '0') || (*str > '9'))
			return (0);
		str ++;
	}
	return (1);
}

/* int main( ){ */
/* 	char src1[] = "18704983"; */
/* 	char src2[] = "879792"; */
/* 	char src3[] = ""; */
/* 	char src4[] = "traMbolico"; */
/* 	printf("1: %i\n", ft_str_is_numeric(src1)); */
/* 	printf("2: %i\n", ft_str_is_numeric(src2)); */
/* 	printf("3: %i\n", ft_str_is_numeric(src3)); */
/* 	printf("4: %i\n", ft_str_is_numeric(src4)); */
/* } */
