/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 19:28:42 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/26 19:43:35 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Operadores unarios:
	- De signo: +, -
	- Incremento y decremento: ++, -- 
	(pre incremento y pre incremento)
	++a, --a
	(post incremente y post decremento)
	a++; a--
	
	Diferencia entre post incremento:
	-	El operador de pre incremento tiene preferencia con respecto a la
		asignacion.
	-	El operador de post incremento tiene menor preferencia con respecto a
		la asignación.
*/
int	main(void)
{
	int	a;
	int b;
	int c;
	int d;

	a = 42;
	b = ++a;
	c = 42;
	d = c++;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	return (0);
}
