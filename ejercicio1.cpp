#include <iostream>

using namespace std;

void mostrarParidad(int numero){
    if (numero % 2){
        cout << "Es un numero impar" << endl;
    }
    else if (numero==0){
        cout << "0 es 0";
    }
    else {
        cout << "Es un numero par" << endl;
    }
}

int main (){
    int valor;
    cout << "Ingrese un valor: " << endl;
    cin >> valor;
    mostrarParidad (valor);

    return 0;
}