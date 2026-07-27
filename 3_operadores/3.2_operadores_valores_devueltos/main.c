/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 18:29:13 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/26 18:48:22 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Otra caracteristica importante de los operadores es el número de operandos
sobre los cuales un operador puede trabajar.

d = (c = a) + b; Se puede cambiar la presedencia tambien a la hora de
asignar incluso si hay 2 operadores de asignación.
*/

#include <stdio.h>

int	main(void)
{
	int	a; 
	int	b; 
	int	c;

	a = 2; // asignación de un valor literal
	b = a; // asignación de una variable
	c = a + b; // asignacion de una expresión
	printf("%d\n", c);
	return (0);
}