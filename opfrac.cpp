// Escribe las librerías con las que se empieza un programa de C++, así como su estructura (no todas, pero por si acaso)
#include <iostream> // Libreria para entrada y salida estándar (cout, cin)
#include <stdlib.h>
#include <stdio.h>
#include <cctype>
#include <algorithm>
#include <math.h>
#include <locale>
using namespace std; // Necesario siempre al usar cout o cin

char opcion = '';
int num1, den1, num2, den2;

int main() {
	while(opcion != '5') {
		cout<<"Menú:"<<endl<<"1.- Suma"<<"2.- Resta"<<"3.- Multiplicación"<<endl<<"4.- División"<<endl<<"5.- Salir"<<endl<<"Opción: ";
		cin>>opcion;

		switch(opcion) {
			case '1':
				//Lectura de datos
				cout<<"Ingrese el numerador 1 y el denominador 1"<<endl;
				cin>>num1;
				cin>>den1;
				
				cout<<"Ingrese el numerador 2 y el denominador 2"<<endl;
				cin>>num2;
				cin>>den2;
				
				if(den1 = 0 || den2 = 0){
					cout<<"Datos inválidos"<<endl;
				} else{
					cout<<""<<endl;
				}
				break;
			case '2':
				break;
			case '3':
				break;
			case '4':
				break;
			default:
				break;
		}

	}

}