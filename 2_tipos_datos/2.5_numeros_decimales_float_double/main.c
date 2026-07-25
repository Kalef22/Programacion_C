/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 19:53:07 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 22:26:13 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <float.h>

// El double tiene una caracteristica, que se puede hacer long y ocupar 16 bytes
int	main(void)
{
	float	num1;
	float	num2;
	double	num3;
	double	num4;

	num1 = 42.5;
	num2 = 42.6;
	num3 = 42.6;
	num4 = 42.6;
	printf("float tamaño: %zu\n", sizeof(num1));
	printf("double tamaño: %zu\n", sizeof(num3));
	printf("\n");
	
	printf("float: %g\n", num1);
	printf("float: %f\n", num2);
	printf("double: %f\n", num3);
	printf("double: %f\n", num4);
	printf("\n");
	
	printf("%f\t", FLT_MIN);
	printf("%f\n", FLT_MAX);
	printf("%f\t", DBL_MIN);
	printf("%f\n", DBL_MAX);
	
	return (0);
}