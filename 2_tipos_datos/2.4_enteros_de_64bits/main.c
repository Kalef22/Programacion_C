/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 04:20:06 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 04:42:53 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

// En este caso el long y long long tienen la misma capacidad.
// depende del SO si es windows(64-bit) = 4 bytes o linux/macOS/Unix(64-bit) = 
//8 bytes.
// debe tener el tamaño minimo de 8 bytes en todas las plataformas

void	muestra_limites(void)
{
	printf("%lld\t", LLONG_MIN);
	printf("%lld\n", LLONG_MAX);
	printf("%d\t", 0);
	printf("%llu\n", ULLONG_MAX);
}

int	main(void)
{
	int				num1;
	long int		num2;	
	long long int	num3;	
	printf("%lu\n", sizeof(num1));
	printf("%lu\n", sizeof(num2));
	printf("%lu\n", sizeof(num3));

	muestra_limites();
	return (0);
}