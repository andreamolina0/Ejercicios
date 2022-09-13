#include <iostream>
using namespace std;

long potenciaDe(int base, int esponente);

int main (){
	int base, exponente;
	long resultado;
	cout<<"ingrese la base "; cin>>base;
	cout<<"ingrese el exponente "; cin>>exponente;
	resultado = potenciaDe(base,exponente);
	cout<<"el resultado: "<<resultado<<endl;
	return 0;
}
	
long potenciaDe(int base, int exponente){
	if(exponente != 1){
		return base * potenciaDe(base, exponente - 1);
	}else{
		return base;
	}
}
