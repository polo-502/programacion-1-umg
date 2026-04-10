
#include <iostream>
#include <random>
using namespace std;

enum Estado { CONTINUA, GANA, PIERDE };

int tirarDados()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 6);

    int dado1 = dist(gen);
    int dado2 = dist(gen);
    int suma = dado1 + dado2;

    cout << "Jugador tiro " << dado1 << " + " << dado2
         << " = " << suma << endl;

    return suma;
}

int main()
{
    int miPunto = 0;
    Estado estadoJuego;

    int sumaDados = tirarDados();

    switch (sumaDados)
    {
        case 7:
        case 11:
            estadoJuego = GANA;
            break;

        case 2:
        case 3:
        case 12:
            estadoJuego = PIERDE;
            break;

        default:
            estadoJuego = CONTINUA;
            miPunto = sumaDados;
            cout << "El punto es " << miPunto << endl;
            break;
    }

    while (estadoJuego == CONTINUA)
    {
        sumaDados = tirarDados();

        if (sumaDados == miPunto)
            estadoJuego = GANA;
        else if (sumaDados == 7)
            estadoJuego = PIERDE;
    }

    if (estadoJuego == GANA)
        cout << "Jugador gana" << endl;
    else
        cout << "Jugador pierde" << endl;

    return 0;
}
