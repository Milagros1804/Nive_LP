#include <iostream>
using namespace std;

int main() {
    int opcion;
    float a, b;

    do {
        cout << "\n1. Suma"
             << "\n2. Resta"
             << "\n3. Multiplicacion"
             << "\n4. Division"
             << "\n0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese a: ";
            cin >> a;
            cout << "Ingrese b: ";
            cin >> b;
        }

        switch (opcion) {
            case 1:
                cout << "Resultado: " << a + b << endl;
                break;
            case 2:
                cout << "Resultado: " << a - b << endl;
                break;
            case 3:
                cout << "Resultado: " << a * b << endl;
                break;
            case 4:
                if (b == 0)
                    cout << "Error: division por cero" << endl;
                else
                    cout << "Resultado: " << a / b << endl;
                break;
            case 0:
                cout << "Programa terminado" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
        }

    } while (opcion != 0);

    return 0;
}
