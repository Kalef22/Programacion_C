/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 00:43:21 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 00:43:33 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funciones.h"

int	main(void)
{
	printf("la suma de %d y %d es %d\n", 23, 24, suma(23, 24));
	printf("la resta de %d y %d es %d\n", 23, 24, resta(23, 24));
	printf("el producto de %d y %d es %d\n", 23, 24, producto(23, 24));
    return (0);
}