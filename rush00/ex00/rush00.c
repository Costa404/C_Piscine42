/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopes-d <nlopes-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 15:58:07 by nlopes-d          #+#    #+#             */
/*   Updated: 2026/09/06 15:58:18 by nlopes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_borders(int x, int y, int i, int j)
{
	if (i == 1 || i == y)
		write(1, "-", 1);
	else
		write(1, "|", 1);
}

void	print_objects(int x, int y, int i, int j)
{
	int	corner_se;
	int	corner_sd;
	int	corner_id;
	int	corner_ie;
	int	borders;

	while (j <= x)
	{
		corner_se = (i == 1 && j == 1);
		corner_sd = (i == 1 && j == x);
		corner_ie = (i == y && j == 1);
		corner_id = (i == y && j == x && y != 1 && x != 1);
		borders = (i == 1 || i == y || j == 1 || j == x);
		if (corner_se || corner_id || corner_ie || corner_sd)
			write(1, "o", 1);
		else if (borders)
			print_borders(x, y, i, j);
		else
			write(1, " ", 1);
		j++;
	}
}

void	rush(x, y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "Only positive values are accepted.\n", 35);
		return ;
	}
	while (i <= y)
	{
		print_objects(x, y, i, j);
		j = 1;
		i++;
		write(1, "\n", 1);
	}
}
