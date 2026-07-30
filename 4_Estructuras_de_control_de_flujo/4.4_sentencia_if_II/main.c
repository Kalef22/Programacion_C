/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 21:37:04 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/30 22:01:43 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
- Recordar que las condiciones no deben solaparse.
- Una instruccion if es una unica instruccion.
*/

int main(void)
{
    unsigned int    a;
    
    a = 190;
    // operador AND devuelve verdadero si ambas son verdadero
    if (a >= 0 & a <= 100) 
        printf("Varible entre 0 y 100");
    else if (a >= 101 & a <= 200)
        printf("Variable entre 101 y 200");
    else if (a >= 201 & a <= 300)
        printf("Variable entre 201 y 300");
    else
        printf("Variable es mayor que 300");

    return (0);
}

/*
Condiciones excluyentes.
========================
0 - 100
101 - 200
201 - 300 --> si esta comprobacion es verdadera ninguna de las otras lo es.
>301
*/