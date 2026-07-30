/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 23:32:57 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/30 23:56:42 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Sentencias break y continue
 - La sentencia break lo que hace es salir del bloque dentro del que estamos
trabajando en ese momento

- La sentencia continue es especifica para lo bucles, lo que hace es que en el
momento que se ejecuta dicha sentencia salta a la siguiente iteracion del bucle
sin realizar el resto de la iteraciones que halla en la iteracion actual
*/

int main(void)
{
    int a;
    int b;
    
    for (a = 0; a < 10; a++)
    {   if (a%2 == 0)
            continue;
        if (a == 7)
            break;
        printf("%d\n", a);
    }

    b = 0;
    // Tener cuidado con el continue en un bucle while para que cambie la
    // variable si no puede crear un bucle infinito.
    while (b < 10)
    {
        if (b%2 == 0)
        {
            b++;
            continue;
        }
        b++;
    }
    return (0);
}

// ¿que palabra clave termina completamente la ejecución de un program?
// stop