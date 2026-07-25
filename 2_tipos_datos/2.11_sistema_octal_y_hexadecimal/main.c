/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 03:29:33 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/25 03:44:41 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Sistema hexadecimal
===================
0 1 2 3 4 5 6 7 8 9 A B C D E F

Convertir de hexadecimal a octal
================================

Transformar primero a binario:
Cogemos grupos de 4 bits.

0001  1010  0101  0001  1110  1010  1011  1101  0110
|     |     |     |     |     |     |    |     |
1     A     5     1     E     A     B    D     6

Y luego pasamos a octal colocando en grupos de 3 con la tabla de 3 bits

1A51EABD6

Hexadecimal         Octal
===========         =====
0000    0           000 0
0001    1           001 1
0010    2           010 2
0011    3           011 3
0100    4           100 4
0101    5           101 5
0110    6           110 6
0111    7           111 7
1000    8
1001    9
1010    A
1011    B
1100    C
1101    D
1110    E
1111    F

*/