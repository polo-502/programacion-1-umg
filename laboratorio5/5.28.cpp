#include <iostream>
using namespace std;

int main() {
    for (int dia = 1; dia <= 12; dia++) {
        // Imprimir el encabezado del día
        cout << "En el " ;
        switch (dia) {
            case 1:  cout << "primer"; break;
            case 2:  cout << "segundo"; break;
            case 3:  cout << "tercer"; break;
            case 4:  cout << "cuarto"; break;
            case 5:  cout << "quinto"; break;
            case 6:  cout << "sexto"; break;
            case 7:  cout << "septimo"; break;
            case 8:  cout << "octavo"; break;
            case 9:  cout << "noveno"; break;
            case 10: cout << "decimo"; break;
            case 11: cout << "undecimo"; break;
            case 12: cout << "duodecimo"; break;
        }
        cout << " dia de Navidad mi amor me dio:\n";

        // Imprimir regalos acumulados
        for (int regalo = dia; regalo >= 1; regalo--) {
            switch (regalo) {
                case 12: cout << "doce tamborileros tocando\n"; break;
                case 11: cout << "once gaiteros tocando\n"; break;
                case 10: cout << "diez señores saltando\n"; break;
                case 9:  cout << "nueve bailarinas bailando\n"; break;
                case 8:  cout << "ocho criadas ordeñando\n"; break;
                case 7:  cout << "siete cisnes nadando\n"; break;
                case 6:  cout << "seis gansos poniendo\n"; break;
                case 5:  cout << "cinco anillos de oro\n"; break;
                case 4:  cout << "cuatro pájaros cantando\n"; break;
                case 3:  cout << "tres gallinas poniendo\n"; break;
                case 2:  cout << "dos tortolitos enamorados\n"; break;
                case 1:
                    if (dia == 1)
                        cout << "una perdiz en un peral\n";
                    else
                        cout << "y una perdiz en un peral\n";
                    break;
            }
        }
        cout << endl;
    }
    return 0;
}
