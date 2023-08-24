#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	string nombre[2]; //vector que va a almacenar los nombres
	
	double nota[3]; //vector para almacenar las notas
	
	double suma = 0, promedio = 0;
	
	
	for(int i = 0; i < 2; i++){ //ciclo que alamacena los nombres
		
		cout << "Ingrese el nombre del estudiante no." <<i+1 <<": " <<endl;
		
		cin >> nombre[i];
		suma = 0;
		promedio = 0;
		
	    for(int j = 0; j < 3; j++){ //ciclo que almacena las notas
		
		    cout << "Ingrese la nota no." <<j+1 <<": " <<endl;
		
	        cin >> nota[j];
		
		suma = suma + nota[i]; // sumando todas las posiciones del vector para el promedio
			
		}
		
		promedio = suma / 3;
		
		cout << "El promedio es: " << promedio <<endl;
		
	    for(int i = 0; i < 1; i++){ //ciclo que manda las notas de cada estudiante
		
		cout << "Notas del estudiante " <<  nombre[i] << ": "<<endl;
		
		if(promedio <= 60){
			
			cout << "El estudiante no fue aprobado" << endl; 
		
		
		}else{
			
			cout << "El estudiante fue aprobado"<< endl; 
		}
		
		cout << "Notas generales" << endl;
		
		for(int j = 0; j < 1; j++){ //Notas de cada estudiante
		
		    cout << nombre[j] << "\t" << nota[0] << "\t" << nota[1] << "\t" << nota[2];
			
		}	
		
		cout << endl;
	}
		
	}
	
	return 0;
	
}
