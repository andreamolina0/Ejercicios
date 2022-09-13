#include<iostream>
using namespace std;

int main(){
	int cant_nums,nums,cont=0,suma=0;
	
	cout<<"digite los numeros: ";cin>>cant_nums;
	while(cont<cant_nums){
		cout<<"Ingresar numero: ";cin>>nums;
		suma+=nums;
		cont++;
	}
	
	cout<<"la suma de los numeros es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
