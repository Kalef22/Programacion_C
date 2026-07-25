/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 01:13:11 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 01:22:50 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Directivas del compilador, permite realizar determinadas operaciones antes
// de la compilación, esas operaciones se realizan debido a la existencia de la
// directiva del compilador.
#include <stdio.h>
// Define una cadena de caracteres y que en todas las apariciones de nuestro
// codigo fuente lo cambie por otra cadena de caracteres, esto se utiliza mucho
// por ejemplo para la definicion de constantes.
#define PI 3.1415927

int	main(void)
{
	printf("El número PI vale: %f\n", PI);
	return (0);
}