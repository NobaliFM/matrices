// Escribe las librerías con las que se empieza un programa de C++, así como su estructura
#include <iostream> // Libreria para entrada y salida estándar (cout, cin)
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <math.h>

int matrices, m1, n1, m2, n2;

using namespace std; // Necesario siempre al usar cout o cerr
int main() {
	/* Este bloque solicita el número de matrices
	para declararlas en un ciclo, lo cual aún no se requiere
	cout<<"Introduce el número de matrices";
	cin>>matrices;
	*/

	cout<<"Introduce los valores de m y r para la primera matriz:"<<endl;
	cout<<"m: ";
	cin>>m1;
	cout<<"n: ";
	cin>>n1;

	cout<<endl;

	cout<<"Introduce los valores de m y r para la segunda matriz:"<<endl;
	cout<<"m: ";
	cin>>m2;
	cout<<"n: ";
	cin>>n2;

	cout<<endl;

	if(n1 != m2) {
		cout<<"El producto de las matrices está indefinido."<<endl;
		exit;
	}


	int matriz1[m1][n1];

	cout<<"Ingresa las datos de la matriz 1:"<<endl;

	for(int j = 0; j<n1; j++) {
		for(int i = 0; i < m1; i++) {
			cout<<"Ingresa m"<<i<<"j"<<j<<": ";
			cin>>matriz1[i][j];
			cout<<endl;a
		}
	}


	int matriz2[m2][n2];

	cout<<"Ingresa las datos de la matriz 2:"<<endl;

	for(int j = 0; j<n2; j++) {
		for(int i = 0; i < m2; i++) {
			cout<<"Ingresa m"<<i<<"j"<<j<<": ";
			cin>>matriz2[i][j];
			cout<<endl;
		}
	}

	int matriz3[m1][n2];
	int valor;
	for (int i=0; i<m1; i++) {
		// Sumar 3 números calculados individualmente (productos)
		for(int j=0; j<n2; j++) {
			valor = 0;
			for(int k=0; k<m1; k++){
				for (int l = 0; l<n2; l++){
					valor = ((matriz1[i][])*(matriz2[][]))
				}
			}
			
		}
	}
}