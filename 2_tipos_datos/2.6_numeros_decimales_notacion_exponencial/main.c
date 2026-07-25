/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 22:26:59 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 23:43:00 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <float.h>

int	main(void)
{
	double	num;
	
	num = 3.567E-5;
	printf("%e\n", num); // para representar en notación cientifica

	printf("Minimo float: %e\t", FLT_MIN);
	printf("Maximo float: %e\n", FLT_MAX);
	printf("Minimo double: %e\t", DBL_MIN);
	printf("Maximo double: %e\n", DBL_MAX);
	return (0);
}

/*
Representacion de valores muy grandes y tambien muy pequeños
Usamos la notación cientifica.

10 000 000 000 = 1E10 = 1 * 10^10
100 = 10*10 = 10^2
1 000 = 10*10*10 = 10^3
1 000 000 = 10*10*10*10*10*10 = 10^6
2 000 000 = 2*1 000 000 = 2*10^6 = 2E6
2 345 000 = 2.345*1 000 000 = 2.345*10^6 = 2.345E6

0.001 = 1/1000 = 1/10^3 = 10^-3

Mantiza E Exponente

2.42E22 --> La mantiza dice que el numero es positivo muy lejano a cero
-2.42E22 --> La mantiza dice que el numero es negativo

-2.42E-22 --> La mantiza negativa y exponente negativo estamos hablando de un 
número negativo muy pequeño proximo a cero.
2.42E-22 --> La mantiza positiva y exponente negativo estamos hablando de un
número muy pequeño positivo proximo a cero.

*/