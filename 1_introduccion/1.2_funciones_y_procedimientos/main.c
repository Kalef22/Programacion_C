/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 01:00:25 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 01:10:29 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		suma(int a, int b);
int		resta(int a, int b);
int		producto(int a, int b);
void	procedimiento(int a, int b);

int	main(void)
{
	printf("la suma de %d y %d es %d\n", 23, 24, suma(23, 24));
	printf("la resta de %d y %d es %d\n", 23, 24, resta(23, 24));
	printf("el producto de %d y %d es %d\n", 23, 24, producto(23, 24));

	procedimiento(23, 24);
    return (0);
}