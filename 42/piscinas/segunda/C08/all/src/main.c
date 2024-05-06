/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:14:29 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/05/02 18:13:24 by ZikoCult         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stock_str.h>

int main (int argc, char **argv)
{
	t_stock_str	*stock;

	stock = ft_strs_to_tab(argc, argv);
	ft_show_tab(stock);
}
