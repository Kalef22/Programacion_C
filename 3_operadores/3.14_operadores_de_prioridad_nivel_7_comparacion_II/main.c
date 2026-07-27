/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 20:43:47 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/27 21:52:15 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Operador igual: ==
Operador distinto: !=
*/

#include <stdio.h>

int main(void)
{
    int a;
    int b;

    a = 42;
    b = 42;
    printf("%d\n", a == b); // Devuelve un 0
    printf("%d\n", a != b); // Devuelve un 1
    return (0);
}
