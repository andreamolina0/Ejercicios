#include "iostream"

using namespace std;
int main()
{
	int opcion = 0;
	do
	{
		cout << "ingrese 1 para mostrar mensaje\n";
		cout << "ingrese 2 para hacer algo más\n";
		cout << "ingrese 0 para salir\n";
		
		cout << "ingrese una opción a ejecutar\n";
		cin >> opcion;
	}
	//mostrar el menú hasta que la opción sea cero
	while(opcion != 0);
	system("PAUSE");
	return 0;
}
