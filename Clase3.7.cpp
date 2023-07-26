#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	int a;
	int b;
	cout<<"Por favor, dime cuantos espacios quieres que tenga el vector"<<endl;
	cin>>a;
	b=a-1;
	
	int tampico[b];
	
	for(int i=0; i<=b; i++){
	cout<<"Ingresa el valor que ira en la posicion "<<i+1<<endl;
	cin>>tampico[i];
}
	cout<<"Tu vector es: "<<endl;
	for(int j=0; j<=b; j++){
    cout<<tampico[j]<<" ";
    }
    cout<<" "<<endl;
	cout<<"Tu vector invertido es: "<<endl;
	for(int j=b; j>=0; j--){
    cout<<tampico[j]<<" ";
	}
	return 0;
}
