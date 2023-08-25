// Escribe las librerías con las que se empieza un programa de C++, así como su estructura (no todas, pero por si acaso)
#include <iostream> // Libreria para entrada y salida estándar (cout, cin)
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <math.h>
int matrices, m1, n1, m2, n2;
using namespace std; // Necesario siempre al usar cout o cin
int main() {
	/* Este bloque solicita el número de matrices
	para declararlas en un ciclo, lo cual aún no se requiere
	cout<<"Introduce el número de matrices";
	cin>>matrices;
	*/

// Suma de matrices
Opciones:
	cout << "Elige la operación con matrices a realizar:" << endl;
	cout << "1.- Suma" << endl;
	cout << "2.- Resta" << endl;
	cout << "3.- Multiplicación" << endl;
	cout << "4.- Salir" << endl;
	int op;
	cin >> op;
	switch (op) {
		case 1: {
			int m, n;
			cout << "Introduce las dimensiones de las matrices:" << endl;
			cout << "m: ";
			cin >> m;
			cout << "n: ";
			cin >> n;

			int matriz1[m][n], matriz2[m][n];

			cout << "Ingresa las datos de la matriz 1:" << endl;
			for (int j = 0; j < n; j++) {
				for (int i = 0; i < m; i++) {
					cout << "Ingresa m" << i << "j" << j << ": ";
					cin >> matriz1[i][j];
					cout << endl;
				}
			}
			for (int i = 0; i < m; i++) {
				cout << "   ";
				for (int j = 0; j < n; j++) {
					// cout<<"Dato ["<<i<<"]["<<j<<"]: "<<matriz1[i][j]<<endl;
					cout << matriz1[i][j] << "   ";
				}
				cout << endl;
			}

			cout << "Ingresa las datos de la matriz 2:" << endl;
			for (int j = 0; j < n; j++) {
				for (int i = 0; i < m; i++) {
					cout << "Ingresa m" << i << "j" << j << ": ";
					cin >> matriz2[i][j];
					cout << endl;
				}
			}
			for (int i = 0; i < m; i++) {
				cout << "   ";
				for (int j = 0; j < n; j++) {
					// cout<<"Dato ["<<i<<"]["<<j<<"]: "<<matriz1[i][j]<<endl;
					cout << matriz2[i][j] << "   ";
				}
				cout << endl;
			}

			// Efectuar suma
			for (int i = 0; i < m; i++) {
				cout << "   ";
				for (int j = 0; j < n; j++) {
					// cout<<"Dato ["<<i<<"]["<<j<<"]: "<<matriz1[i][j]<<endl;
					cout << ((matriz1[i][j]) + (matriz2[i][j])) << "   ";
				}
				cout << endl;
			}
		}
		break;
		case 2: {
			int m, n;
			cout << "Introduce las dimensiones de las matrices:" << endl;
			cout << "m: ";
			cin >> m;
			cout << "n: ";
			cin >> n;

			int matriz1[m][n], matriz2[m][n];

			cout << "Ingresa las datos de la matriz 1:" << endl;
			for (int j = 0; j < n; j++) {
				for (int i = 0; i < m; i++) {
					cout << "Ingresa m" << i << "j" << j << ": ";
					cin >> matriz1[i][j];
					cout << endl;
				}
			}
			for (int i = 0; i < m; i++) {
				cout << "   ";
				for (int j = 0; j < n; j++) {
					// cout<<"Dato ["<<i<<"]["<<j<<"]: "<<matriz1[i][j]<<endl;
					cout << matriz1[i][j] << "   ";
				}
				cout << endl;
			}

			cout << "Ingresa las datos de la matriz 2:" << endl;
			for (int j = 0; j < n; j++) {
				for (int i = 0; i < m; i++) {
					cout << "Ingresa m" << i << "j" << j << ": ";
					cin >> matriz2[i][j];
					cout << endl;
				}
			}
			for (int i = 0; i < m; i++) {
				cout << "   ";
				for (int j = 0; j < n; j++) {
					// cout<<"Dato ["<<i<<"]["<<j<<"]: "<<matriz1[i][j]<<endl;
					cout << matriz2[i][j] << "   ";
				}
				cout << endl;
			}

			// Efectuar resta
			for (int i = 0; i < m; i++) {
				cout << "   ";
				for (int j = 0; j < n; j++) {
					// cout<<"Dato ["<<i<<"]["<<j<<"]: "<<matriz1[i][j]<<endl;
					cout << ((matriz1[i][j]) - (matriz2[i][j])) << "   ";
				}
				cout << endl;
			}
		}
		break;

		case 3: {
			// Mutiplicación de matrices
			cout << "Introduce los valores de m y r para la primera matriz:" << endl;
			cout << "m: ";
			cin >> m1;
			cout << "n: ";
			cin >> n1;
			cout << endl;
			cout << "Introduce los valores de m y r para la segunda matriz:" << endl;
			cout << "m: ";
			cin >> m2;
			cout << "n: ";
			cin >> n2;
			cout << endl;
			if (n1 != m2) {
				cout << "El producto de las matrices está indefinido." << endl;
				exit;
			}
			int matriz1[m1][n1];
			cout << "Ingresa las datos de la matriz 1:" << endl;
			for (int j = 0; j < n1; j++) {
				for (int i = 0; i < m1; i++) {
					cout << "Ingresa m" << i << "j" << j << ": ";
					cin >> matriz1[i][j];
					cout << endl;
				}
			}
			for (int i = 0; i < m1; i++) {
				cout << "   ";
				for (int j = 0; j < n1; j++) {
					// cout<<"Dato ["<<i<<"]["<<j<<"]: "<<matriz1[i][j]<<endl;
					cout << matriz1[i][j] << "   ";
				}
				cout << endl;
			}

			int matriz2[m2][n2];
			cout << "Ingresa las datos de la matriz 2:" << endl;
			for (int j = 0; j < n2; j++) {
				for (int i = 0; i < m2; i++) {
					cout << "Ingresa m" << i << "j" << j << ": ";
					cin >> matriz2[i][j];
					cout << endl;
				}
			}
			for (int i = 0; i < m2; i++) {
				cout << "   ";
				for (int j = 0; j < n2; j++) {
					// cout<<"Dato ["<<i<<"]["<<j<<"]: "<<matriz1[i][j]<<endl;
					cout << matriz2[i][j] << "   ";
				}
				cout << endl;
			}
			int matriz3[m1][n2];
			int valor;
			// Código para calcular las direcciones de matriz 3
			for (int a = 0; a < m1; a++) {
				// Iterador a
				// Aquí se harán los cálculos para los datos de m iterado (empieza en m: a = 0)
				for (int b = 0; b < n2; b++) {
					// Iterador b
					// Aquí se harán los cálculos para los datos de m iterado (empieza en n: b = 0)
					int acumulador = 0;
					for (int c = 0; c < m1; c++) {
						// Iterador c
						// Aquí se harán los cálculos para los datos de m iterado (empieza en l: c = 0)
						int sumador = 0;
						sumador = ((matriz1[a][c]) * (matriz2[c][b]));
						acumulador = (acumulador + sumador);
						sumador = 0;
					}
					matriz3[a][b] = acumulador;
					acumulador = 0;
				}
			}

			cout << endl;

			for (int i = 0; i < m1; i++) {
				cout << "   ";
				for (int j = 0; j < n2; j++) {
					// cout<<"Dato ["<<i<<"]["<<j<<"]: "<<matriz1[i][j]<<endl;
					cout << matriz3[i][j] << "   ";
				}
				cout << endl;
			}

			string nombre = "";
			cin >> nombre;
		}
		break;

		default:
			goto Opciones;
			break;
	}
}