/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 23:16:33 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/30 23:32:23 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    int a;
    int b;

    for (a = 0; a < 10; a++) // inicialización, condición, incremento
    {
        printf("%d\n", a);
    }

    // doble condicion, la primera que se cumple hace salir del bulcle
    
    for (a = 20, b = 0; a > 10 || b < 10; a--, b++) // condicion compuesta
    {
        printf("%d\n", a);
    }
    return (0);
}
