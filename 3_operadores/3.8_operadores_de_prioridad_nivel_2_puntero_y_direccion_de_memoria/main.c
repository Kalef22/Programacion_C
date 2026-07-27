/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:12:54 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/27 19:42:59 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Puedo saber la dirección de memoria donde se guarda una variable
Operador dirección de memoria &
Imprime en formato hexadecimal
0x7ffdcebe1d08 <-- 
*/

#include <stdio.h>

int	main(void)
{
	int	a;
	int *p;

	a = 3;
	p = &a;
	printf("%d\n", a);
	//	Esto puede provocar (undefined behavior) comportamiento indefinido
	//	printf("%d\n", &a); 
	printf("%p\n", &a); 
	printf("%p\n",(void *)&a); // forma correcta de imprimir una dirección
	printf("%p\n",p);
	return (0);
}

/*
01010101	2000
10101010	2002 
00000000	2003
11110000	2004
01100110	2005
	.
	.
	.
	
*/