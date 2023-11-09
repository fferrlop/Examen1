#include <iostream>
#include <string>

//Ejercicio 1: Operaciones basicas

int numerosEnteros (int numero1, int numero2){
    int numeros = numero1 + numero2;
    return numeros;
}

//Ejercicio 2: Gestión de estudiantes

class estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;

    estudiante (std::string nombre,int edad, std::string grado) {
        this->nombre = nombre;
        this->edad = edad;
        this->grado = grado;
    }
    void mostrarDatos() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
};

int main() {

// Ejercicio 1: Operaciones basicas

    int numero1, numero2;

        std::cout << "Ingresa numero 1: ";
        std::cin >> numero1;

        std::cout << "Ingresa numero 2: ";
        std::cin >> numero2;

        int numeros = numerosEnteros(numero1, numero2);

        std::cout << "la suma de los dos numeros enteros " << numero1 << " + " << numero2 << " = " << numeros << std::endl;

// Fin Ejercicio 1

// Ejercicio 2: Gestión de estudiantes

    estudiante estudiante1 ("Francisco", 20, "Primero");

    estudiante1.mostrarDatos();



return 0;
}
