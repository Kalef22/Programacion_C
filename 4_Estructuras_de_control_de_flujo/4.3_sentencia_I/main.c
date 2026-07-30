/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 21:26:29 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/30 21:38:54 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*

*/

int main(void)
{
    /*En c no existe un dato de tipo booleano, como maneja las condiciones o
    los tipos booleano o los tipos logicos, lo hace en números enteros.
    0 = falso
    1 = true
    */
    // Es un valor entero distinto de cero, lo COMPILADOR lo interpreta como
    // true, porque es distinta de 0.

    // Se suele usar con opedores de comparacion.

    // uso de bloque alternativo, la parte else no es obligatorio, la parte if
    // si, tambien se puede anidar los bloques if.

    // cuando hay una sola instruccion se pueden quitar las llaves.

    int a;
    
    a = 0;
    //a = -1;

    if (a) 
        printf("hola\n"); // no devuelve nada
    else
        printf("Adios");
    return (0);
}