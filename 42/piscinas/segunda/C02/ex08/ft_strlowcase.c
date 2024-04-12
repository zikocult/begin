/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:03:23 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/25 16:28:22 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/* int main( ){ */
/* 	char src1[] = "pRataatAAa"; */
/* 	char src2[] = "caCotaA"; */
/* 	char src3[] = ""; */
/* 	char src4[] = "traMbolIco"; */
/* 	printf("1: %s\n", ft_strlowcase(src1)); */
/* 	printf("2: %s\n", ft_strlowcase(src2)); */
/* 	printf("3: %s\n", ft_strlowcase(src3)); */
/* 	printf("4: %s\n", ft_strlowcase(src4)); */
/* } */
