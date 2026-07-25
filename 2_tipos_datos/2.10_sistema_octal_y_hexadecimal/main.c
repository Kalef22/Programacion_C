/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 03:13:14 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/25 03:28:55 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Sistema Octal
0 1 2 3 4 5 6 7


Convertir de binario a octal
============================

010 100 100 111 101 010 --> Los binarios lo agrupamos en grupos de 3
|   |   |   |   |   |
2   4   4   7   5   2   --> Reemplazamos su valor en decimal de cada grupo

Convertir de octal a binario
============================

Cogemos cada cifra de octal y lo sustituimos por su grupo de 3 bits 
correspondiente.

000	0
001	1
010	2
011	3
100	4
101	5
110	6
111	7

*/