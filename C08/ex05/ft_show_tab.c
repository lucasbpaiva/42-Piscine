/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:21:59 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/20 15:28:04 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	long	num;
	char	digit;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	if (!par)
		return ;
	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, ft_strlen(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}

// int	main(int argc, char *argv[])
// {
// 	int			i;
// 	char		*error_msg;
// 	t_stock_str	*par;

// 	if (argc < 2)
// 		return (0);
// 	par = ft_strs_to_tab(argc - 1, &argv[1]);
// 	if (!par)
// 	{
// 		error_msg = "Error in ft_strs_to_tab";
// 		write(1, error_msg, ft_strlen(error_msg));
// 		return (1);
// 	}
// 	ft_show_tab(par);
// 	i = 0;
// 	while (par[i].str)
// 		free(par[i++].copy);
// 	free(par);
// 	return (0);
// }
