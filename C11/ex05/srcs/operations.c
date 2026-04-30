/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:57:45 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/30 16:07:24 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	add(int a, int b)
{
	return (a + b);
}

int	subtract(int a, int b)
{
	return (a - b);
}

int	multiply(int a, int b)
{
	return (a * b);
}

// Division by 0 error needs to be handled by the caller
int	divide(int a, int b)
{
	return (a / b);
}

// Modulo by 0 error needs to be handled by the caller
int	modulo(int a, int b)
{
	return (a % b);
}
