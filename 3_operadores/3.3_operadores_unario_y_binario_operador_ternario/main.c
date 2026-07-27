/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 18:48:57 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/26 19:10:04 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
En cuanto a los operadores lo podemos clasificar en 3 grandes grupos:
1- Unarios: son los operadores el cual necesitan para relizar su función tan
solo un operando.
2- Binarios: son aquellos que nesecita 2 operandos para poder realizar su
función.

=: tambien es un operador
sizeof:  tambien es un operador

operador especial operador ternario:
Lo que hace es lanzar al exterior el valor a o b en funcion si se cumple o no
la condición
(a < b)? a : b; 
*/

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int d;
	int e;

	a = 4;
	b = -a;
	d = (c = a) + b;
	e = (a < b) ? a : b;
	
	printf("%d\n", b);
	printf("%d\n", d);
	printf("%d\n", e);
	return (0);
}
