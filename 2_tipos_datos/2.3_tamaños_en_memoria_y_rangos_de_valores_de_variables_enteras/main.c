/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 03:54:17 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 04:18:18 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// En limits.h estan almacenados las constantes que representan los 
// limites inferior y superiror de los distintos tipos de datos que puede tener
// nuestra variable
#include <limits.h>

// uso del sizeof() para saber el tamaño de la varible
int	main(void)
{
	short		num1;
	int			num2;
	long		num3;
	long long 	num4;
	
	num1 = 45;
	num2 = 45;
	num3 = 45;
	num4 = 45;
	printf("%ld\n",sizeof(num1));
	printf("%ld\n",sizeof(num2));
	printf("%ld\n",sizeof(num3));
	printf("%ld\n",sizeof(num4));

	printf("\n");
	printf("%d\t", INT_MIN);
	printf("%d\n", INT_MAX);
	printf("%d\t", 0); // no existe un UINT_MIN
	printf("%u\n", UINT_MAX);

	printf("\n");
	printf("\n");
	printf("%d\t", SHRT_MIN);
	printf("%d\n", SHRT_MAX);
	printf("%d\t", 0); // no existe un UINT_MIN
	printf("%u\n", USHRT_MAX);

	printf("\n");
	printf("\n");
	printf("%ld\t", LONG_MIN);
	printf("%ld\n", LONG_MAX);
	printf("%d\t", 0); // no existe un UINT_MIN
	printf("%lu\n", ULONG_MAX);
	
	return (0);
}