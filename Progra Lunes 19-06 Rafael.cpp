#include<conio.h>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char nombre[5];

    for(int i = 0; i < 5; i++){
        cout <<"nombre: ";
        cin.getline(nombre, 5, '\n');

        cout <<nombre <<endl;

        cout <<strlen(nombre) <<endl <<endl;
    }
}

