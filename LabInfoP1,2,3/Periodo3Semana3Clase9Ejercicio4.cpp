#include "iostream"

using namespace std;
int main()
{
	int opcion = 0;
	do
	{
		cout << "ingrese 1 para mostrar mensaje\n";
		cout << "ingrese 2 para hacer algo m�s\n";
		cout << "ingrese 0 para salir\n";
		
		cout << "ingrese una opci�n a ejecutar\n";
		cin >> opcion;
	}
	//mostrar el men� hasta que la opci�n sea cero
	while(opcion != 0);
	system("PAUSE");
	return 0;
}
