/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:47:15 by gbaruls-          #+#    #+#             */
/*   Updated: 2025/03/21 21:26:20 by Guillem Barulls  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

// int	main(void)
// {
// 	rush(5, -13);
// 	return (0);
// }
//
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	rush (argv[1][0] - 48, argv[2][0] - 48);
	return (0);
}
