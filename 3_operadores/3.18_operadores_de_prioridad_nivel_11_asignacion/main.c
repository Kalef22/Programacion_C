/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 22:33:19 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/27 22:44:55 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Operador de asignaciòn =

a = a + 2; 
a += 2;   Son lo mismo

a -= 2;
a *= 2;
a /= 2;
a %= 3;
a <<= 2;
a >>= 2;
a &= 2;
a |= 2;
a ^= 2;

*/

int	main(void)
{
	int	a;
	
	a = 10;

	a = a + 2;	// El operador asignaciòn es el ultimo en prioridad
	printf("%d\n", a);
	return (0);
}