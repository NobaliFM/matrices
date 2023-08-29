// Escribe las librerías con las que se empieza un programa de C++, así como su estructura (no todas, pero por si acaso)
#include <iostream> // Libreria para entrada y salida estándar (cout, cin)
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std; // Necesario siempre al usar cout o cin

int edad = 0, edadMax = 0, n = 0;
string nombre = "", nombreMax = "";

int main() {
	//Comentario
	system("color 0a");
	cout<<"Ingresa la cantidad de alumnos: ";
	cin>>n;
	cout<<endl;
	
	for (int i=0; i<n; i++){
		cout<<"Nombre del alumno: ";
		cin>>nombre;
		cout<<endl;
		cout<<"Edad del alumno: ";
		cin>>edad;
		cout<<endl;
		
		if(edad>edadMax){
			edadMax = edad;
			nombreMax = nombre;
		}
	}
	
	cout<<nombreMax<<" es el alumno mayor, con "<<edadMax<<" años."<<endl;
	}