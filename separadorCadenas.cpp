#include <iostream>

using namespace std;

string cadena = "Nomen mihi est Dante";
int palabras = 0, inicial;
int main() {

	for(int i = 0; i<cadena.length(); i++) {
		if(cadena[i] != ' ') {
			palabras++;
			
			if(palabras ==1){
				inicial = i;
			}
		}
		
		while(cadena[i] != ' '){
			i++;
		}
		
		
		
	}
	
	cout<<"Hay "<<palabras<<"."<<endl;

	string separadas[palabras];

	int a = inicial;

	for (int k = 0; k<palabras; k++) {
		separadas[k] = "";
		while(cadena[a] != ' ' && cadena[a] != '\0') {
			separadas[k] = (separadas[k] + cadena[a]);
			a++;
		}
		cout<<separadas[k]<<endl;
		a++;
	}
}