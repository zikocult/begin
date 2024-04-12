/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:46:33 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/07 21:50:08 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

int	main(int argc, char **argv)
{
	char	*buff;

	if (argc == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (argc == 2)
		buff = ft_load_file("numbers.dict", ft_count_file("numbers.dict"));
	if (argc == 3)
		buff = ft_load_file(argv[1], ft_count_file(argv[1]));
	ft_show_number(buff, argc[argv - 1]);
	free(buff);
	return (0);
}
