#include<iostream>
using namespace std;

int main (){
	int suma,f,valor,promedio;
	suma = 0;
	for(f=1; f<=3; f++){
		cout <<"ingrese el valor";
		cin >> valor;
		suma = suma + valor;
	}
	cout << "la suma es: " << suma << "\n";
	promedio = suma / 3;
	cout << "el promedio es: " <<promedio <<endl;
}
