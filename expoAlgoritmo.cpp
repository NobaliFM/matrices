#include <iostream> // Libreria para entrada y salida estándar (cout, cin)
#include <stdlib.h>
#include <stdio.h>
#include <cctype>
#include <algorithm>
#include <math.h>
#include <locale>

using namespace std; // Necesario siempre al usar cout o cin

int opcion, cantidad;
double suma;

int main() {
	system("color 0a");
	cout<<"Regalos FCCDevs S. A. de C. V."<<endl<<"Elija el artículo o proceda al cobro: "<<endl<<"1.- Muñeca B ($250)"
	    <<endl<<"2.- Caja de plumones de colores ($120)"<<endl
	    <<"3.- Pluma de color ($20)"<<endl
	    <<"4.- Carro de bomberos ($350)"<<endl
	    <<"5.- Dinosaurio ($280)"<<endl
	    <<"6.- Proceder al cobro."
	    <<endl<<"Indique la opción: ";
	    cin>>opcion;

	switch(opcion) {
	}

	/*
	if (suma > 1000) {
		suma = (suma * .8);
	} else if (suma > 500) {
		suma = (suma * .9);
	}
	*/
}

/*
Equipo 2
2.	Una empresa de regalos, como estrategia de mercadotecnia,
ha lanzado una campaña en donde se premia
con un 10 % de descuento a quienes compren mas de $500.00,
y con un 20% de descuento a quienes compren más de $1000.00.
Los artículos que tiene en existencia son:

Muñeca B     $250.00
Caja de plumones de colores    $120.00
Pluma de color          $20.00
Carro de bomberos  $350.00
Dinosaurio          $280.00
Construya un algoritmo que permita al encargado de la tienda calcular el monto de la compra.
Este cálculo deberá realizarse cada vez que llegue un cliente, y terminará cuando la tienda cierre.
"
*/