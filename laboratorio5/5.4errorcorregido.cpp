 a For (unsigned int x 100, x >= 1, ++x)
cout << x << endl;

 b  switch (valor % 2) {
case 0:
    cout << "Entero par" << endl;
    break;
case 1:
    cout << "Entero impar" << endl;
    break;
}

 c for (unsigned int x = 19; x >= 1; x -= 2) {
    cout << x << endl;
    if (x == 1) break;
}

  d unsigned int contador = 2;

do {
    cout << contador << endl;
    contador += 2;
} while (contador <= 100);

