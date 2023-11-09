#include <iostream>

int numerosEnteros (int numero1, int numero2){
    int numeros = numero1 + numero2;
    return numeros;
}

int main() {
    int numero1, numero2;

        std::cout << "Ingresa numero 1: ";
        std::cin >> numero1;

        std::cout << "Ingresa numero 2: ";
        std::cin >> numero2;

        int numeros = numerosEnteros(numero1, numero2);

        std::cout << "la suma de los dos numeros enteros " << numero1 << "+" << numero2 << " = " << numeros << std::endl;

    return 0;
}
