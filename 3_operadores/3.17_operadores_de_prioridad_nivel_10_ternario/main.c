/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 22:23:28 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/27 22:31:41 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Operador ternario (es un operador condicional)
Es es unico operador que necesita 3 operandos para poder funcionar
(condicion)? verdadero : falso
*/

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 2;
	b = 100;
	c = 200;
	printf("%d\n", a?b:c);
	printf("%d\n", (a > 10)?b:c);

	return (0);
}