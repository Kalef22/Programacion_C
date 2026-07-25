/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 04:45:18 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/25 04:56:35 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Orden de conversion de tipos de datos:
int -> u int -> long -> u long -> long long -> u long long -> float -> double -> long double
*/

int	main(void)
{
	int	a;
	int	b;
	
	a = 2;
	b = 3;
	printf("%d\n", a / b);	// devuelve 0 porque hace la division entera

	// casting de tipos, el dividendo pasa a ser float y como digimos sobre la
	// lista el resultado sera el que este mas a la derecha en este caso float
	printf("%f\n", (float)a / b);	
	return (0);
}