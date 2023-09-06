// Escribe las librerías con las que se empieza un programa de C++, así como su estructura (no todas, pero por si acaso)
#include <iostream> // Libreria para entrada y salida estándar (cout, cin)
#include <stdlib.h>
#include <stdio.h>
#include <cctype>
#include <algorithm>
#include <math.h>
#include <locale>
using namespace std; // Necesario siempre al usar cout o cin

int edad = 0, edadMax = 0, n = 0;
string nombre = "", nombreMax = "";
char caracter;

int main() {
	//locale("en_US.utf8");
	//Comentario
	system("color 0a");
	int may = 0, min = 0, num = 0, sig = 0;
	while(caracter!='-') {
		//Hacer algo
		cout<<"Ingresa un caracter: ";
		cin>>caracter;

		if (isupper(caracter)) {
			//cout << "El carácter es una letra mayúscula." << endl;
			may++;
		} else if (islower(caracter)) {
			//cout << "El carácter es una letra minúscula." << endl;
			min++;
		} else if(isdigit(caracter)) {
			//cout << "El carácter es un número." << endl;
			num++;
		} else {
			//cout << "El carácter es un signo." << endl;
			sig++;
		}
	}

	cout<<"Letras mayúsculas: "<<may<<endl;
	cout<<"Letras minúsculas: "<<min<<endl;
	cout<<"Números: "<<num<<endl;
	cout<<"Signos: "<<sig<<endl;
	
	cin>>min;
}