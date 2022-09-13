#include <iostream>
using namespace std;

int main (){
	float nota;
	int mayor = 0;
	int menor = 0;
	for (int i = 1; i<=5;i++){
		cout << "ingrese la nota" ;
		cin >> nota;
		if (nota >= 7){
			mayor = mayor + 1;	
		} else {
			menor = menor +1;
		}
	}
	cout << "la cuenta de mayores o iguales a 7 es: " << mayor << endl;
	cout << "la cuenta de menores a 7 es: " << menor << endl;
}
