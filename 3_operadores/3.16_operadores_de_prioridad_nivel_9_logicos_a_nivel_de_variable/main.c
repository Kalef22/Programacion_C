/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 22:14:59 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/27 22:22:20 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Operadores logicos a nivel de variable
AND &&
OR ||
*/
#include <stdio.h>

int main(void)
{
    int	a;
	int b;
	int	c;
	
	a = 10;	// verdadero
	b = 0; 	// falso
	c = 1;
	printf("%d\n",  (a || b) && c);
    return (0);
}

/*
tabla de verdad
a	b	a&&b	a||b
---------------------
0	0	|  0	0
0	1	|  0	1
1	0	|  0	1
1	1	|  1	1
*/