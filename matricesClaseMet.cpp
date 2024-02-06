// Escribe las librerías con las que se empieza un programa de C++, así como su estructura (no todas, pero por si acaso)
#include <iostream> // Libreria para entrada y salida estándar (cout, cin)
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <math.h>
int acumulador = 0, x, y, n, dato;
using namespace std; // Necesario siempre al usar cout o cin
int main() {
	system("color 0a");
	cout<<"Ingresa la cantidad de matrices: ";
	cin>>n;

	cout<<"Ingresa la cantidad de filas: ";
	cin>>x;
	cout<<"Ingresa la cantidad de columnas: ";
	cin>>y;

	int matriz[x][y];

	for(int k = 1; k<=n; k++) {
		cout<<"Introduce los datos de la matriz"<< k << ":" <<endl;
		for(int i = 0; i<x; i++) {
			for(int j = 0; j < y; j++) {
				cout<<"Ingresa el dato ["<<i<<"]["<<j<<"]: ";
				cin>>dato;
				matriz[i][j] = dato;
				cout<<endl;
			}
		}

		for(int a = 0; a<y; a+2) {
			for(int b = 0; b < x; b++) {
				acumulador = (acumulador+matriz[b][a]);
			}
		}
	}
	cout << "El resultado es: " << acumulador;
}
/*
		Para a<-0 hasta y-1 incremento 2
			Para b<-0 hasta x-1 incremento 1
				acumulador<-acumulador+matriz[b][a]
			FinPara
		FinPara
	FinPara

	Escribir("El resultado es: ", acumulador)
Fin
*/