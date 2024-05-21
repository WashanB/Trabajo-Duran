#include <iostream>

using namespace std;

int main() {
    // Declarar un arreglo para almacenar los números enteros
    int numeros[10];

    // Solicitar al usuario ingresar 10 números enteros y almacenarlos en el arreglo
    cout << "Ingrese 10 números enteros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Número " << (i+1) << ": ";
        cin >> numeros[i];
    }

    // Encontrar el número más grande en el arreglo
    int numero_mas_grande = numeros[0]; // Asignar el primer número como el más grande inicialmente
    for (int i = 1; i < 10; ++i) {
        if (numeros[i] > numero_mas_grande) {
            numero_mas_grande = numeros[i];
        }
    }

    // Mostrar el número más grande
    cout << "El número más grande ingresado es: " << numero_mas_grande << endl;

    return 0;
}