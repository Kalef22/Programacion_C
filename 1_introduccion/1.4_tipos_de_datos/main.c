/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvillanu <kvillanu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 01:23:55 by kvillanu          #+#    #+#             */
/*   Updated: 2026/07/24 02:03:53 by kvillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Tipos de datos primitivos (básicos)
int	main(void)
{
    char    ch;
    int     num1;
    float   num2;
	double	num3;
    
	return (0);
}
// ===== 1. Tipos de Datos Primitivos (Básicos) =====
// Tipo,   Descripción,                        Tamaño típico,  Rango aproximado / Ejemplo,					Especificador (printf)
// char,   Carácter o entero pequeño,          1 byte,         -128 a 127 o 'A',							%c (como char) / %d (como entero)
// int,    Entero estándar,                    4 bytes,		"-2,147,483,648 a 2,147,483,647",				%d o %i
// float,  Coma flotante (precisión simple),   4 bytes,		6 decimales de precisión (3.141592f),			%f
// double, Coma flotante (doble precisión),    8 bytes,		15 decimales de precisión (3.1415926535),		%lf
// void,   Sin tipo / Vacío,                   0 bytes,		Indica ausencia de valor o retorno,				N/A


// ===== 2. Modificadores de Tipo =====
// Puedes anteponer modificadores a los tipos enteros o de carácter para alterar su tamaño o la gestión del signo:
// 	- signed: Permite números positivos y negativos (opción por defecto en int).
// 	- unsigned: Solo permite números positivos ($\ge 0$), lo que duplica el rango positivo máximo.
// 	- short: Reduce el tamaño (habitualmente a 2 bytes para enteros).
// 	- long: Amplía el tamaño (habitualmente a 8 bytes en sistemas de 64 bits para enteros, o mayor precisión para flotantes).

unsigned int contador = 4000000000U; // Funciona porque no reserva espacio para el signo negativo (%u)
short int edad = 25;                  // Ocupa solo 2 bytes (%hd)
long long int distancia = 9000000000000000000LL; // Enteros muy grandes de 8 bytes (%lld)


// ===== 3. Tipos Derivados =====
// Permiten agrupar datos complejos o crear alias personalizados:

	// - struct: Agrupa variables de distintos tipos bajo una sola entidad.
	// - union: Similar a la estructura, pero todos sus miembros comparten la misma posición de memoria (el tamaño equivale al del miembro más grande).
	// - enum: Asigna nombres representativos a valores enteros automáticos.
	// - typedef: Crea un alias para simplificar un tipo existente (ej. typedef unsigned long ulong;).

// Ejemplo de struct con typedef
typedef struct {
  int x;
  int y;
} Punto;

Punto p1 = {10, 20};


// =======================
// ===== Uso de void =====
// =======================

// 1. Indicar que una función no devuelve nada
void saludar(void) {
  printf("¡Hola!\n");
  // No requiere instrucción return con valor
}

// 2. Indicar que una función no recibe parámetros
int obtener_numero_secreto(void) {
  return 42;
}

// Si la llamas así: obtener_numero_secreto(10); 
// El compilador lanzará un error porque especificaste (void).

// 3. Punteros genéricos (void *)
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // malloc devuelve void*, que se asigna automáticamente a un int*
  int *vector = malloc(5 * sizeof(int));

  int a = 10;
  void *ptr = &a; // Apunta a un entero sin problemas

  // Para leer el valor desde un void*, hay que castearlo (convertirlo)
  printf("Valor: %d\n", *(int *)ptr);

  free(vector);
  return 0;
}