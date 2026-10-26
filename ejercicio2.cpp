#include <iostream>

using namespace std;

float celsiusAFarenheit (float celsius){
    float farenheit;
    farenheit = celsius * (9 / 5) + 32;
    return farenheit;
}

int main (){
    float valor = 0.0;
    cout << "Ingrese un el valor en grados Celsius: " << endl;
    cin >> valor;
    float resultado=  celsiusAFarenheit (valor);
    cout << "Sus grados en Celsisus es: " << resultado << endl; 

    return 0;
}