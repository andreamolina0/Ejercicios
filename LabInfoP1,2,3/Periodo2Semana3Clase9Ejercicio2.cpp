#include <iostream>
#include <cmath>
using namespace std;

float pitagoras(float, float); //prototipo de funci�n

int main(){
	float cat1,cat2,hipo=0;
	cout << "ingrese cateto 1: ";
	cin >> cat1;
	cout << "ingrese cateto 2: ";
	cin >> cat2;
	hipo = pitagoras(cat1,cat2);
	cout<<"la hipotenusa del triangulo es: ";
	cout << hipo;
	return 0;
}

float pitagoras(float x, float y){
	float result = 0;
//sqrt = ra�z de un n�mero. pow = potencia de
//un n�mero elevado a otro. Ambas funciones
//Se encuentran en la biblioteca cmath.
result = sqrt(pow(x,2)+pow(y,2));
return result;
}
