#include <iostream>
 
using namespace std;
 
int main() {
    int n;
 
    do{
        cout << "\nIntroduzca un numero entero par: ";
        cin >> n;
    }while( n % 2 != 0 );
 
    int array[n];
 
    cout << "\nIntroducir datos:\n";
    for( int i = 0; i < n; i++ ) {
        cout << i + 1 << ": ";
        cin >> array[i];
    }
 
    cout << "\nSuma de los extremos:";
    for( int i = 0; i < n/2; i++ )
        cout << "\n" << array[i] << " + " << array[n-1-i] << " = " << array[i] + array[n-1-i];
 
    cout << endl;
 
    return 0;
}
