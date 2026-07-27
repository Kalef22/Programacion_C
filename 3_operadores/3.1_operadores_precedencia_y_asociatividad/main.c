/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 18:13:38 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/26 18:28:29 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Tienen 2 caracteriscticas importantes hacer de ellos:
    1. La precedencia o tambien conocido como prioridad: Es el orden de
    ejecución de los operadores. 
	2. Asociatividad: Es la dirección en la que nosotros ejecutamos una serie de
	operadores iguales esa dirección puede ser a la izquierda o hacia la
	derecha. Si quieramos saltarnos la asociatividad usamos parentesis.
	Ejemplo:
	d = a / (b / c).
*/ 

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	
	a = 3;
	b = 4;
	c = 5;
	d = (a + b) * c;	// Podemos usar los parentesis para controlar el orden
	printf("%d\n,", d);
	return (0);
}