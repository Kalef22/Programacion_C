/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:59:41 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/27 19:11:15 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Uso del operador de casting
Operador de tamaño sizeof
*/

#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	float	c;
	int		d;
	
	a = 45;
	b = a--;
	c = (float)a / b;
	d = sizeof(a);
	printf("%d\n", b);
	printf("%f\n", c);
	printf("%d\n", d);
	return (0);
}