/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 22:36:38 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/30 22:51:17 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
Sentencia de control de flujo, sentencia switch
*/

int main(void)
{
    int a;
    
    a = 5;
    
    // No evaluamos si una expresion es verdadera o falsa, No evaluamos desde
    // el punto de logico lo evaluamos desde el punto de vista númerico.
    switch (a)  
    {
    case 2:
        printf("El númeor es 2");
        break;
    case 3:
        printf("El número es 3");
        break;
    default:
        printf("No es ni 2 ni 3");
        break;
    }
    return (0);
}
