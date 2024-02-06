// Escribe las librerías con las que se empieza un programa de C++, así como su estructura (no todas, pero por si acaso)
#include <iostream> // Libreria para entrada y salida estándar (cout, cin)

int divisor, dividendo, cociente = 0;

using namespace std; // Necesario siempre al usar cout o cin
// Algoritmo para saber si una matriz cuadrada es triangular (superior o inferior)

int main() {
	system("color 0a");
	cout<<"Indica el dividendo: ";
	cin>>dividendo;
	cout<<endl;

	cout<<"Indica el divisor: ";
	cin>>divisor;

	system("cls");

	cout<<"El cociente entero de "<<divisor<<" entre "<<dividendo<<" es ";

	if(divisor == 0) {
		cout<<"indeterminado."<<endl;
	} else {
		while(dividendo >= divisor) {
			dividendo =  (dividendo - divisor);
			cociente++;
		}

		cout<<cociente<<"."<<endl;
	}
}