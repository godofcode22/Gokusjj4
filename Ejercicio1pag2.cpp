// Eliminar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    int *valor;
    cout << "cuantos numeros quieres usar? " << endl;
    cin >> num;
    valor = new int[num];
    for (int c = 0; c < num; c++) {
        cout << "ingrese el valor de la " << c + 1 << "era pos" << endl;
        cin >> valor[c];
    }
    int orden=0;
    bool elim=true;

    cout << "para eliminar un numero presione 0, para conservarlo ingrese 1" << endl;
 
    for (int c = 0; c < num; c++) {
        cout << "ingrese 1 o 0 " << endl;
        cin >> orden;
        switch (orden) {
        case 0:
            elim=true;
            break;
        case 1:
            elim = false;
            break;
        }
        if (elim == true) {
            valor[c] = NULL;
        }
        else if (elim == false) {
            valor[c] = valor[c];
        }
        

    }
    cout << "el array final es -> " << endl;
    for (int c = 0; c < num; c++) {
        cout << valor[c] << ",";
    }
    cout << endl;
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
