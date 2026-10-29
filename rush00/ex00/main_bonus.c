/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopes-d <nlopes-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 15:58:54 by nlopes-d          #+#    #+#             */
/*   Updated: 2026/09/05 15:59:02 by nlopes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	rush(int col, int row);

int	main(int argc, char *argv[])
{
	int	column;
	int	row;

	if (argc != 3)
	{
		write(1, "Missing arguments.\n", 19);
		return (1);
	}
	column = 0;
	row = 0;
	column = atoi(argv[1]);
	row = atoi(argv[2]);
	rush(column, row);
	return (0);
}
