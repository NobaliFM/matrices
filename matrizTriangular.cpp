// Escribe las librerías con las que se empieza un programa de C++, así como su estructura (no todas, pero por si acaso)
#include <iostream> // Libreria para entrada y salida estándar (cout, cin)
#include <stdlib.h>
#include <stdio.h>
#include <cctype>
#include <algorithm>
#include <math.h>
#include <locale>

char opcion;
int n, dato;


using namespace std; // Necesario siempre al usar cout o cin
// Algoritmo para saber si una matriz cuadrada es triangular (superior o inferior)

int main() {
	system("color 0a");
	system("title Detector de matrices triangulares");
	cout<<"Ingresa la dimensión de la matriz: ";
	cin>>n;
	cout<<endl;

	int matriz[n][n];

	cout<<"Introduce los datos de la matriz"/*<< k <<*/<< ":" <<endl;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<"Ingresa el dato ["<<i<<"]["<<j<<"]: ";
			cin>>dato;
			matriz[i][j] = dato;
			cout<<endl;
		}
	}

	bool triangular = true;
	// Detectar matriz triangular superior (triángulo superior)
	for(int i = 0; i<n; i++) {
		for (int j = (n-1); j>=i; j--) {
			if((matriz[i][j]) == 0) {
				// Campo nulo -> no sería triangular
				triangular = false;
			}
		}
	}
	// Detectar matriz triangular superior (triángulo inferior)
	for (int i = (n-1); i >= 1; i--) {
		for (int j = (i-1); j>=0; j--) {
			if(matriz[i][j] != 0) {
				triangular = false;
			}
		}
	}

	// Detectar matriz triangular inferior
	if(triangular==true) {
		// Es triangular (superior)
		cout<<"La matriz es triangular superior."<<endl;
	} else {
		cout<<"La matriz no es triangular superior."<<endl;

		bool triangular = true;
		// Detectar matriz triangular superior (triángulo superior)
		for(int i = 0; i<n; i++) {

			for (int j = 0; j<=i; j++) {

				if((matriz[i][j]) == 0) {
					// Campo nulo -> no sería triangular
					triangular = false;
				}
			}
		}

		// Detectar matriz triangular superior (triángulo inferior)
		for (int i = 0; i <= (n-2); i++) {

			for (int j = (i+1); j<=(n-1); j++) {

				if(matriz[i][j] != 0) {
					triangular = false;
				}
			}
		}

		if(triangular==true) {
			// Es triangular (superior)
			cout<<"La matriz es triangular inferior."<<endl;
		} else {
			cout<<"La matriz no es triangular inferior."<<endl;
			cout<<"La matriz no es triangular."<<endl;
		}

		for(int i = 0; i<n; i++) {
			for(int j = 0; j < n; j++) {
				cout<<matriz[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}


