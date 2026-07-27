/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 19:45:43 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/27 18:56:30 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Operadores de prioridad de nivel 2 (operadores de negación)
===========================================================

    Not lógico:
		Operador not aplicable a variables.
		- ! : Representa del valor lógico del operando que tiene a su derecha
		
		
    Not a nivel de bit:
		- Para poder ver esto necesitamos ver los bits completo uno a uno de mi
		  variable, en C no se permite la impresion del valor binatio pero si
		  podemos ver 

	En C no existe la variable lógicas las variables booleana.
	
	En C:
		Falso cuando el valor es 0
		Verdadero cuando es valor es distinto de 0
*/
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	// int	d;

	a = 42; // desde el punto de vista lógico sera verdadero
	b = 0;	// desde el punto de vista lógico sera falso
	c = 3243;
	

	// Si usamos el operador logico ! devolvera su valor lógico que en este
	// caso es falso = 0
	printf("%d\n", !a); 
	printf("%d\n", !b); 
	printf("%x\n", c); 
	
	return (0);
}
