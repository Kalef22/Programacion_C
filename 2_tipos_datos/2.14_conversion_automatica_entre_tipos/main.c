/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 04:26:10 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/25 04:43:41 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Que clases de conversiones automaticas el compilador cuando estamos trabajando
con variables y literales en C.

Orden de conversion de tipos de datos:
int -> u int -> long -> u long -> long long -> u long long -> float -> double -> long double

Si tenemos una expresion matematica que mezcle datos de cada uno de estos tipos
el resultado de la expresion sera del tipo que este mas a la derecha de esa lista.
*/
int	main(void)
{
	char		a;
	short int	b;
	int			c;
	double		d;
	long double	e;

	printf("tamaño char: %zu\n", sizeof(a));
	printf("tamaño short int: %zu\n", sizeof(b));
	printf("suma de char + short int: %zu\n", sizeof(a + b));	// el compilador a efectuado una conversion de tipo automatico
	printf("suma int + double: %zu\n",sizeof(c + d));
	printf("suma int + double + long double: %zu\n",sizeof(c + d + e));
	return (0);
}