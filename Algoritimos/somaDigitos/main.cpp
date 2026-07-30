// Calcular a soma dos dígitos de um número

#include <iostream>
using namespace std;

int main()
{
    int num;
    int resto;
    int soma = 0;

    cout << "Numero: ";
    cin >> num;
    int copia = num;

    while (copia != 0)
    {
        resto = copia % 10;
        copia /= 10;
        soma += resto;
    }

    
    cout << "A soma dos digitos de " << num << " vale " << soma << endl;
}