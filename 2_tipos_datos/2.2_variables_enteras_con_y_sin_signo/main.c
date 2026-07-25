/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 02:42:26 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 03:05:40 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int				num1;
	signed int		num2;	// signed es por defecto no es necesario ponerlo
	unsigned int	num3;
	
	short unsigned int	num4; // short ocupa 16 bits
	long unsigned int num5; // long es un numero de 32 bits y no poner nada es lo mismo 
	
	num1 = 5;
	return (0);
}
/*
Combinación con 2 bits
00	0
01	1
10	2
11	3

combinación con 3 bits
000	0
001	1
010	2
011	3
100	4
101	5
110	6
111	7

combinacion con 4 bits
0000	0
0001	1
0010	2
0011	3
0100	4

2^n = formula para saber cuanto valores podemos obtener dependiendo de la cantidad de bits disponibles.

cantidad minima y maxima que puede tener un valor int

2^32 = 4 Bytes = 1 int
						0..........4294967295			// unsigned int
	-2147483648..........0..........2147483647			// signed int (signed es valor por defecto, no es necesario ponerlo)
*/