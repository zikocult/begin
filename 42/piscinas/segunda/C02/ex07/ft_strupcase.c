/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:51:52 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/25 16:02:30 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/* int main( ){ */
/* 	char src1[] = "pRataatAAa"; */
/* 	char src2[] = "caCotaA"; */
/* 	char src3[] = ""; */
/* 	char src4[] = "traMbolIco"; */
/* 	printf("1: %s\n", ft_strupcase(src1)); */
/* 	printf("2: %s\n", ft_strupcase(src2)); */
/* 	printf("3: %s\n", ft_strupcase(src3)); */
/* 	printf("4: %s\n", ft_strupcase(src4)); */
/* } */
