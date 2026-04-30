/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:57:45 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/30 16:26:50 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}

// Division by 0 error needs to be handled by the caller
int	div(int a, int b)
{
	return (a / b);
}

// Modulo by 0 error needs to be handled by the caller
int	mod(int a, int b)
{
	return (a % b);
}
