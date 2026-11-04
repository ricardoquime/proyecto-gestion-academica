#include <iostream>
using namespace std;

int main() {

    string nombre;
    int codigo;

    cout << "REGISTRO DE ESTUDIANTES" << endl;

    cout << "Ingrese codigo: ";
    cin >> codigo;

    cin.ignore();

    cout << "Ingrese nombre: ";
    getline(cin, nombre);

    cout << "\nDATOS REGISTRADOS" << endl;
    cout << "Codigo: " << codigo << endl;
    cout << "Nombre: " << nombre << endl;

    return 0;
}