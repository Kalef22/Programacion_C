/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:45:22 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/27 20:01:08 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
En una divisiòn ocurre unos detalle a tener en cuenta para que se pueda
imprimir correctamente el resultado. Porque una division entre enteros devuelve
la parte entera.

1. En el printf el formato debe ser %f
2. El que obtiene el resultado debe ser un float
3. Cualquiera de los 2 operandos transformarlo en punto flotante o ambos

Tambien al literal se le puede poner un punto flotante ej. 
3.0 / 2
3 / 2.0
3.0 / 2.0
*/

#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		c;
	float	d;
	
	a = 10;
	b = 8;
	c = 5 * 7 * a * b * 9; 
	d = (float)a / b;
	printf("%f", d);
	return (0);
}

