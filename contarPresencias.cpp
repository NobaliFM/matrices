// Escribe las librerías con las que se empieza un programa de C++, así como su estructura (no todas, pero por si acaso)
#include <iostream> // Libreria para entrada y salida estándar (cout, cin)
#include <stdlib.h>
#include <stdio.h>
#include <cctype>
#include <algorithm>
#include <math.h>
#include <locale>

int n = 5, cantidad, num;
int arreglo[n][3] = {1, 2, 3, 3, 6};

using namespace std; // Necesario siempre al usar cout o cin
// Algoritmo para saber si una matriz cuadrada es triangular (superior o inferior)

int main() {

	for(int i = 0; i<n; i++) { // Itera los índices del arreglo

		cantidad = 0;

		for (int j = 0; j <n; j++) { // Busca el número en todo el arreglo
			arreglo[i][2] = 0;
			if(arreglo[i] == arreglo[j]) { // Revisa si hay coincidencias
				arreglo[i][1]++; // Añade uno a la cantidad de existencias
				arreglo[i][2] = 1;
			}
		}
	}
	
}