/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.1_funciones_y_procedimientos.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 00:57:21 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 01:14:27 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	suma(int a, int b)
{
	int res;
	
	res = a + b;
	return (res);
}

int	resta(int a, int b)
{
	int res;
	
	res = a - b;
	return (res);
}

int	producto(int a, int b)
{
	int res;
	
	res = a * b;
	return (res);
}

// Las funciones de procedimiento solamente hacen algo, no devuelven nada
void	procedimiento(int a, int b)
{
	int res;
	res = a * b;
}