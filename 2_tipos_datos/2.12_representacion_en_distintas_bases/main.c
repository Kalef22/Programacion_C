/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 03:45:19 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/25 04:07:23 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Vamos a contar con 3 sistemas de numeración por su facilidad de conversion a
formato binario porque ambos son una forma compactada del formato binario:
%d = formato decimal.
%o = formato octal.
%x = formato hexadecimal.
%c = formato caracter.
*/


int	main(void)
{
	int	a;
	int	character;
	
	a = 9242;
	character = 75;
	
	printf("formato decimal: %d\n", a);
	printf("formato octal: %o\n", a);
	printf("formato hexadecimal: %x\n", a);
	printf("formato ASCII: %c\n", character);
	return (0);
}
/*
a = 023 --> con el cero delante representa que es un octal
a = 0xFF --> con el cero y la x delante representa un hexadecimal
*/