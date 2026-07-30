/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 20:59:35 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/30 21:11:02 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
En una instruccion no tiene porque efectuarse una sola operación, se pueden
ejecutar varias operaciones, por lo tanto debemos diferencias lo que es una
instruccion de lo que es una operacion basica de lo que realiza una determinada
operacion.

Flujo de ejecución  de un programa es una secuencia de la que se ejecutan
distintas instrucciones. Ejemplo de instrucciones:

    int a;              --> instruccion 1
    a = (2 + 35) / 5;   --> instruccion 2
    return (0);         --> instruccion 3

Que conseguimos con las instrucciones de control de flujo, es alteral el flujo
de ejecución, alteral el orden y la secuencia en la que se ejecutan las 
distintas ejecuciones de un programa.
*/

int main(void)
{
    int a;
    a = (2 + 35) / 5;
    return (0);
}