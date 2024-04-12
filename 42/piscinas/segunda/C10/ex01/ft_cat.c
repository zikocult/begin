/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:00:16 by gbaruls-          #+#    #+#             */
/*   Updated: 2024/04/11 17:19:53 by gbaruls-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <unistd.h>
# include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_write_file(char *file)
{
	char	caracter;
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(strerror(2));
		return ;
	}
	while (read(fd, &caracter, 1) == 1)
		ft_putchar(caracter);
	close(fd);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		ft_putstr(strerror(2));
		return (1);
	}
	else if (argc >= 2)
	{
		while (argc > i)
		{
			ft_write_file(argv[i]);
			i++;
		}
	}
	return (0);
}
