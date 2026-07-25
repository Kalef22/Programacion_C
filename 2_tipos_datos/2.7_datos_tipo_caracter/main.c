/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 23:45:16 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/25 02:43:42 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

// Se puede usar numeros que corresponde a su posición en la tabla ascii o 1 
// solo caracter de la tabla ascii
int main(void)
{
	char	ch1;
	char	ch2;
	
	ch1 = 65;
	ch2 = 'A';
	printf("%zu\n", sizeof(ch1));
	printf("%zu\n", sizeof(ch2));
	printf("%c\n", ch1);
	printf("%c\n", ch2);
	printf("\n");
	printf("%d\t",CHAR_MIN);
	printf("%d\n",CHAR_MAX);
	printf("%d\n",UCHAR_MAX);
	
    return (0);
}