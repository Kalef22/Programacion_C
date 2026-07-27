/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 20:19:27 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/27 20:32:44 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Los operadores de nivel 5 son 2;

1. Desplazamiento a la izquierda
2. Desplazamieinto a la derecha

Estos operadores operan a nivel de bit
*/

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    
    a = 5630;
    b = a << 4;
    c = b >> 1;
    printf("%x\n", a);
    printf("%x\n", b);
    printf("%x\n", c);
    return (0);
}

/*
Tabla de converion:

a = 15fe
a = 00000000000000000001010111111110 = 4 Bytes

b = 15fe0
b = 00000000000000010101111111100000

c = aff0
c = 00000000000000001010111111110000

0000    0
0001    1
0010    2
0011    3
0100    4
0101    5
0110    6
0111    7
1000    8
1001    9
1010    A
1011    B
1100    C
1101    D
1110    E
1111    F

*/