
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int numeroAleatorio()
{
    return 1 + rand() % 9;
}

void respuestaCorrecta()
{
    int opcion = 1 + rand() % 4;

    switch (opcion)
    {
        case 1:
            cout << "Muy bien!" << endl;
            break;
        case 2:
            cout << "Excelente!" << endl;
            break;
        case 3:
            cout << "Buen trabajo!" << endl;
            break;
        case 4:
            cout << "Sigue asi!" << endl;
            break;
    }
}

void respuestaIncorrecta()
{
    int opcion = 1 + rand() % 4;

    switch (opcion)
    {
        case 1:
            cout << "No. Por favor intenta de nuevo." << endl;
            break;
        case 2:
            cout << "Incorrecto. Intenta una vez mas." << endl;
            break;
        case 3:
            cout << "No te rindas!" << endl;
            break;
        case 4:
            cout << "No. Sigue intentando." << endl;
            break;
    }
}

int main()
{
    srand(time(0));

    while (true)
    {
        int correctas = 0;
        int incorrectas = 0;

        for (int i = 1; i <= 10; i++)
        {
            int a = numeroAleatorio();
            int b = numeroAleatorio();
            int respuesta;

            cout << "Cuanto es " << a << " por " << b << "? ";
            cin >> respuesta;

            if (respuesta == a * b)
            {
                respuestaCorrecta();
                correctas++;
            }
            else
            {
                respuestaIncorrecta();
                incorrectas++;
            }
        }

        double porcentaje = (correctas / 10.0) * 100.0;

        cout << "\nRespuestas correctas: " << correctas << endl;
        cout << "Respuestas incorrectas: " << incorrectas << endl;
        cout << "Porcentaje de aciertos: " << porcentaje << "%" << endl;

        if (porcentaje < 75.0)
            cout << "Por favor pida ayuda adicional a su profesor." << endl;
        else
            cout << "Felicidades, esta listo para pasar al siguiente nivel!" << endl;

        cout << "\n--- Siguiente estudiante ---\n" << endl;
    }

    return 0;
}
