/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:34:20 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/03/29 12:48:17 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 /* #include <stdio.h> */ 

int	ft_sw0(char *str, int sw)
{
	if (*str >= 'A' && *str <= 'Z')
		*str = *str + 32;
	else if ((*str <= 47) || (*str >= 58 && *str <= 64)
		|| (*str >= 91 && *str <= 96) || *str >= 123)
		sw = 1;
	return (sw);
}

int	ft_sw1(char *str, int sw)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
		sw = 0;
	}
	else if ((*str >= 'A' && *str <= 'Z')
		|| (*str >= '0' && *str <= '9'))
		sw = 0;
	return (sw);
}

char	*ft_strcapitalize(char *str)
{
	int	sw;
	int	i;

	sw = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (sw == 1)
		{
			sw = ft_sw1(&str[i], sw);
			i++;
		}
		if (sw == 0)
		{
			sw = ft_sw0(&str[i], sw);
			i++;
		}
	}
	return (str);
}

 /* int main (void){ */ 
 /*   	char proba[] = */ 
 /*    	"Hbgqu+eEx [#@A6p9e9gtin?drqy@9#"; */ 
 /*   	char proba2[] = */ 
 /*    	"Z*Uf=#St7ly#>9@sg8+)Zmsy1o0m*X#&{J]Kw"; */ 
 /*   	printf ("%s\n", ft_strcapitalize(proba)); */ 
 /*   	printf ("%s\n", ft_strcapitalize(proba2)); */ 
 /*   } */
