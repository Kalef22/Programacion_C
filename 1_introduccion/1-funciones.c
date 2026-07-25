/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 23:47:37 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 00:28:28 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	suma(int a, int b)
{
	return (a + b);
}

int	resta(int a, int b)
{
	return (a - b);
}

int producto(int a, int b)
{
	return (a * b);
}

int	main(void)
{
	printf("la suma de %d y %d es %d\n", 23, 24, suma(23, 24));
	printf("la resta de %d y %d es %d\n", 23, 24, resta(23, 24));
	printf("el producto de %d y %d es %d\n", 23, 24, producto(23, 24));
    return (0);
}
