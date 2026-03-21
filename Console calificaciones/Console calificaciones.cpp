// Console calificaciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

#include <iostream>
using namespace std;

const int MAX = 20;

string nombres[MAX];
int notas[MAX];
int cantidad = 0;

void registrarEstudiantes() {
    cout << "Cantidad de estudiantes (maximo 20): ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Nombre del estudiante " << i + 1 << ": ";
        cin >> nombres[i];

        cout << "Calificacion final (0-100): ";
        cin >> notas[i];
    }
}

float calcularPromedio() {
    int suma = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }

    return (float)suma / cantidad;
}

int notaMasAlta() {
    int mayor = notas[0];

    for (int i = 1; i < cantidad; i++) {
        if (notas[i] > mayor) {
            mayor = notas[i];
        }
    }

    return mayor;
}

int notaMasBaja() {
    int menor = notas[0];

    for (int i = 1; i < cantidad; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }

    return menor;
}

void mostrarAprobados() {
    cout << "Estudiantes aprobados:\n";

    for (int i = 0; i < cantidad; i++) {
        if (notas[i] >= 70) {
            cout << nombres[i] << " - " << notas[i] << endl;
        }
    }
}

int main() {

    int opcion;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Registrar estudiantes\n";
        cout << "2. Mostrar promedio\n";
        cout << "3. Mostrar nota mas alta\n";
        cout << "4. Mostrar nota mas baja\n";
        cout << "5. Mostrar estudiantes aprobados\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {

        case 1:
            registrarEstudiantes();
            break;

        case 2:
            cout << "Promedio general: " << calcularPromedio() << endl;
            break;

        case 3:
            cout << "Nota mas alta: " << notaMasAlta() << endl;
            break;

        case 4:
            cout << "Nota mas baja: " << notaMasBaja() << endl;
            break;

        case 5:
            mostrarAprobados();
            break;

        case 6:
            cout << "Saliendo del programa...\n";
            break;

        default:
            cout << "Opcion invalida\n";
        }

    } while (opcion != 6);

    return 0;
}