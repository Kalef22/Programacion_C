/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 22:10:34 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/30 22:35:19 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
Existe una relacion entre los operadores a nivel de bits y operadores logicos.
*/

int main(void)
{
    int a;
    int b;

    a = 6;
    b = 7;
    if (a & b) // devuelve un resultado a nivel de bit
        printf("Hola %d \n", a & b);

    if (a && b) // devuelve un resultado a nivel de variable
        printf("Hola %d \n", a && b);
    
    // el resultado numerico no es el mismo pero el resultado logico si lo es.
    return (0);
}

/*
a =     11001010
b =     01101011
a & b = 01001010
a | b = 11101011
a ^ b = 10100001

a && b = 00000001       Evalua el contenido completo de la variable no solo bit a bit
b || b = 00000001   


a =     11001010
b =     00000000

a && b = 00000000   valor que devuelve
b || b = 00000001   valor que devuelve

A nivel logico tiene una implicacion que es la siguiente:
& y && tienen el mismo resultado logico
| y || tienen el mismo resultado logico tambien
*/