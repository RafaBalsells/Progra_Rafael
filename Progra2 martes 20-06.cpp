#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){ 

char nombre[35];
	
	cout << "Ingrese una frase: " << endl;
	
	cout << " " << endl;
		
	cin.getline(nombre, 35, '\n');
	
	cout << " " << endl;
		
	cout << "Vocales utilizadas: " << endl;
	
	cout << " " << endl;
	
	int longitud = strlen(nombre);
	
    int Vocales = 0;

    for (int i = 0; i < longitud; i++) {
    	
        char caracter = tolower(nombre[i]);

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            Vocales++;
        }
    }

    cout << "Cantidad de vocales utilizadas: " << Vocales << endl;

    return 0;
    return 0;

}
