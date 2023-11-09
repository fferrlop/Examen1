#include <iostream>
#include <string>
#include <vector>

//Ejercicio 1: Operaciones basicas

int numerosEnteros (int numero1, int numero2){
    int numeros = numero1 + numero2;
    return numeros;
}

//Fin Ejercicio 1
//--------------------------------------------------------------------------------------------
//Ejercicio 2/5: Gestión de estudiantes/Registro de materias

class estudiante {
    public:
        std::string nombre;
        int edad;
        std::string grado;
        std::vector<std::string> materias; //Ejercicio 5

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

        void agregarMateria(std::string materia) { //Ejercicio 5
            materias.push_back(materia);
        }

        void enseñarMateria() {
            for (int i = 0; i < materias.size(); i++) {
                std::cout << materias[i] << std::endl;
            }
        }
};

//Fin Ejercicio 2/5
//--------------------------------------------------------------------------------------------
//Ejercicio 3: Optimizacion de memoria

void intercambiarValor (int* puntero1, int* puntero2){
    int temp = *puntero1;
    *puntero1 = *puntero2;
    *puntero2 = temp;
}

//Fin Ejercicio 3
//--------------------------------------------------------------------------------------------
//Ejercicio 4: Manejo de excepciones

int dividir (int numerador, int denominador){
    if (denominador == 0){
        throw "Indivisible entre 0";
    }
    return numerador / denominador;
}

//Fin Ejercicio 4
//--------------------------------------------------------------------------------------------
//Ejercicio 6: Promedio del estudiante

double promerdio (const std::vector <int>& calificaciones) {
    if (calificaciones.empty()) {
        return 0.0;
    }
    int suma = 0;
        for (int calificacion : calificaciones) {
            suma += calificacion;
        }
        return static_cast<double>(suma) / calificaciones.size();
}

// Fin Ejercicio 6
//--------------------------------------------------------------------------------------------
// Ejercicio 7: Manejo de memoria

class RegistroAsistencia {
    public:
        std::string fecha;
        std::string estado;

        RegistroAsistencia(const std::string& fecha, const std::string& estado) {
            this->fecha = fecha;
            this->estado = estado;
        }

        void mostrarRegistro() {
            std::cout << "Fecha: " << fecha << std::endl;
            std::cout << "Estado: " << estado << std::endl;
        }
};

// Fin Ejercicio 7
//--------------------------------------------------------------------------------------------







int main() {

// Ejercicio 1: Operaciones basicas

std::cout << "-----------------------------------------" << std::endl;
std::cout << "Ejercicio 1: Operaciones basicas" << std::endl;

    int numero1, numero2;

        std::cout << "Ingresa numero 1: ";
        std::cin >> numero1;

        std::cout << "Ingresa numero 2: ";
        std::cin >> numero2;

        int numeros = numerosEnteros(numero1, numero2);

        std::cout << "la suma de los dos numeros enteros " << numero1 << " + " << numero2 << " = " << numeros << std::endl;

// Fin Ejercicio 1
//--------------------------------------------------------------------------------------------
//Ejercicio 2/5: Gestión de estudiantes/Registro de materias

std::cout << "-----------------------------------------" << std::endl;
std::cout << "Ejercicio 2/5: Gestión de estudiantes/Registro de materias" << std::endl;

    estudiante estudiante1 ("Francisco", 20, "Primero");

    //Ejercicio 5
    estudiante1.agregarMateria("Matematicas");
    estudiante1.agregarMateria("Programacon");
    estudiante1.agregarMateria("Fisica");


            estudiante1.mostrarDatos();
            estudiante1.enseñarMateria();

// Fin Ejercicio 2/5
//--------------------------------------------------------------------------------------------
// Ejercicio 3: Optimizacion de memoria

std::cout << "-----------------------------------------" << std::endl;
std::cout << "Ejercicio 3: Optimizacion de memoria" << std::endl;

int a = 5;
int b = 8;

      std::cout << "Valor de a es: " << a << std::endl;
      std::cout << "Valor de b es: " << b << std::endl;

        intercambiarValor(&a, &b);

        std::cout << "Los valores intercambiados son: " << "a = " << a << " y " << "b = " << b << std::endl;

// Fin Ejercicio 3
//--------------------------------------------------------------------------------------------
// Ejercicio 4: Manejo de excepciones

std::cout << "-----------------------------------------" << std::endl;
std::cout << "Ejercicio 4: Manejo de excepciones" << std::endl;

int numerador, denominador;

    std::cout << "Ingresa el numerador: ";
    std::cin >> numerador;

    std::cout << "Ingresa el denominador: ";
    std::cin >> denominador;

        try{
            int resultado = dividir (numerador, denominador);
            std::cout << "Resultado de la división: " << resultado << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

// Fin Ejercicio 4
//--------------------------------------------------------------------------------------------
// Ejercicio 6: Promedio del estudiante

std::cout << "-----------------------------------------" << std::endl;
std::cout << "Ejercicio 6: Promedio del estudiante" << std::endl;

    std::vector <int> calificaciones = {10, 7, 3, 8, 5, 4};

    double promedio = promerdio(calificaciones);

    std::cout << "El promedio de las calificaciones es:" << promedio << std::endl;

// Fin Ejercicio 6
//--------------------------------------------------------------------------------------------
// Ejercicio 7: Manejo de memoria

std::cout << "-----------------------------------------" << std::endl;
std::cout << "Ejercicio 7: Manejo de memoria" << std::endl;

    RegistroAsistencia registro1 ("2023-11-09", "Asistio");
    RegistroAsistencia registro2 ("2023-11-10", "No asistio");
    RegistroAsistencia registro3 ("2023-11-11", "Tardanza");

        registro1.mostrarRegistro();
        registro2.mostrarRegistro();
        registro3.mostrarRegistro();


return 0;
}
