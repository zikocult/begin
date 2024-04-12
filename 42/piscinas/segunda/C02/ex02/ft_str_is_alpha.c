/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:34:56 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/25 14:51:54 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z' && *str < 'a') || (*str > 'z'))
			return (0);
		str ++;
	}
	return (1);
}

/* int main( ){ */
/* 	char src1[] = "pat5ata"; */
/* 	char src2[] = "cacota"; */
/* 	char src3[] = "hijodecraquen"; */
/* 	char src4[] = "trambolico number 5"; */
/* 	printf("1: %i\n", ft_str_is_alpha(src1)); */
/* 	printf("2: %i\n", ft_str_is_alpha(src2)); */
/* 	printf("3: %i\n", ft_str_is_alpha(src3)); */
/* 	printf("4: %i\n", ft_str_is_alpha(src4)); */
/* } */
