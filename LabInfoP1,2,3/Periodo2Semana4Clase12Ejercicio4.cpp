#include <iostream>
using namespace std;

int main (){
	int arreglo[10];
	double suma = 0, promedio;
	for( int i=0; i<=9;i++){
		cout << "ingrese el numero: ";
		cin >> arreglo[i];
		suma = suma + arreglo[i];
	}
	
promedio = suma / 10;
cout << " el promedio es: " << promedio;
return 0;	
}
