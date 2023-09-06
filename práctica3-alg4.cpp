// Escribe las librerías con las que se empieza un programa de C++, así como su estructura (no todas, pero por si acaso)
#include <iostream> // Libreria para entrada y salida estándar (cout, cin)
#include <stdlib.h>
#include <stdio.h>
#include <cctype>
#include <algorithm>
#include <math.h>
#include <locale>
using namespace std; // Necesario siempre al usar cout o cin

int n = 0;

int main() {
	system("color 0a");
	cin>>n;
	
	for (int i = 1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<i<<","<<j<<endl;
		}
	}
}