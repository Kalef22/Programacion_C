/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 02:23:33 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 02:40:56 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Una variable es un nombre que se asocia a una dirección de memoria
// Una memoria es una region donde se puede almacenar informacion
// esa informacion esta en formato binario
// esos ceros y unos son la representacion de señales altas y bajas (altas 1)
// (bajas 0)

/*
10101010 = 8 bits = 1 Byte

- La memoria de un ordenario esta organizada en celdas (cajitas), en cada celda 
cabe 1 byte.
- Cada una de las celdas de la memoria esta asociado a un número.

00000000 - 1
00000000 - 2
00000000 - 3
00011001 - 4
    .
    .
    .
10101111 - 500

- Que pasa cuando declaramos un variable en nuestro programa, por ejemplo un 
int.
- Lo que hace el programa es reservar memoria, por norma general a variables
int reserva 4 celdas de memoria seguidas.
- En esos 4 bytes que he reservado de memoria guardara el valor 25 en formato
binario (4 bytes)
- Para escribir el valor 25 lo representamos en su valor en bits 


*/
int main (void)
{
    char    ch;
    int     num1;
    float   num2;
    double  num3;

    num1 = 25;  // valor binario en 32 bits 00000000000000000000000000011001
    return (0);
}