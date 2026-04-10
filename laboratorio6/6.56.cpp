#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randNumero()
{
    return 1 + rand() % 9;
}

void hacerPregunta(int a, int b)
{
    cout << "Cuanto es " << a << " por " << b << "? ";
}

int main()
{
    srand(time(0));

    int num1, num2, respuestaUsuario, respuestaCorrecta;

    while (true)
    {
        num1 = randNumero();
        num2 = randNumero();
        respuestaCorrecta = num1 * num2;

        do
        {
            hacerPregunta(num1, num2);
            cin >> respuestaUsuario;

            if (respuestaUsuario == respuestaCorrecta)
                cout << "Muy bien!\n\n";
            else
                cout << "No. Por favor intenta de nuevo.\n";
        }
        while (respuestaUsuario != respuestaCorrecta);
    }

    return 0;
}
