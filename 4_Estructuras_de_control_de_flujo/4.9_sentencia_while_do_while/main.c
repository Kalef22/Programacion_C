/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 22:43:51 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/30 23:15:44 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Instrucción de control de flujo While
// Es verdades mientras se cumpla una condición

/*
while (condición)
{
    sentencias;
    !Hay que señalar una cosa fundamental entre las sentencias tiene que haber
    una condicion que CAMBIE EN ALGUN MOMENTO LA CONDICION QUE SE ESTA 
    EVALUANDO si no crearia un bucle infinito.
}
*/

int main(void)
{
    int a;

    a = 0;
    while (a < 10)
    {
        if (a < 9)
            printf("%d - ", a);
        else
            printf("%d", a);
        a++;
    }
    
    a = 10;
    printf("\n");
    
    do
    {
            
        if (a == 10)
            printf("%d", a);
        else
            printf("%d - ", a);
        a++;
    }while (a < 10);
    printf("\n");
    return (0);
}