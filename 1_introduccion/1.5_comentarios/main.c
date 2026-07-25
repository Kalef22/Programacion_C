/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 02:07:26 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 02:17:50 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
comentario
de
varias lineas
*/

// comentario de una linea


// **************************************************************
// returns the sum of the arguments (comentario a modo de titulo)
// **************************************************************
int	suma(int a, int b)
{
	int	res;

	res = a + b;
	return (res);
}

int main(void)
{
	printf("el valor de la suma es: %d\n", suma(4, 6));
	return (0);
}