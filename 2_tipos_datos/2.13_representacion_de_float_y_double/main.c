/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 04:08:06 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/25 04:25:09 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    muestra_formatos(int a)
{
    printf("decimal: %d\n", a);
    printf("octal: %o\n", a);
    printf("hexadecimal: %x\n", a);
    printf("ASCII: %c\n", a);
}

/*
long int	num;
num = 3L --> long int

long double	num;
num = 3.0L	--> long double

unsigned int	num;
num = 3U;
*/
int	main(void)
{
	float			num1;

	num1 = 3.0; // tambien puede ser num = 3.0F 
	muestra_formatos(num1);
	return (0);
}