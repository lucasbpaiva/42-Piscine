/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:00:03 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/15 16:03:34 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solution(int *board)
{
	int		i;
	char	digit;

	i = 0;
	while (i < 10)
	{
		digit = board[i] + '0';
		write(1, &digit, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_safe(int *board, int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row)
			return (0);
		if ((col - i == row - board[i]) || (col - i == board[i] - row))
			return (0);
		i++;
	}
	return (1);
}

void	solver(int *board, int *solutions, int col)
{
	int	row;

	if (col == 10)
	{
		print_solution(board);
		*solutions += 1;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_safe(board, row, col))
		{
			board[col] = row;
			solver(board, solutions, col + 1);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	solutions;

	solutions = 0;
	solver(board, &solutions, 0);
	return (solutions);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	num_solutions;

// 	num_solutions = ft_ten_queens_puzzle();
// 	printf("# of solutions found: %d\n", num_solutions);
// 	return (0);
// }
