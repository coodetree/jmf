#include <iostream>

int main()
{
    using namespace std;
    int n;
    n = 100;
    int lista[n];

    lista[0] = 0;
    lista[1] = 0;

    // listar todos como primos
    // 1. listar todos os n 2 ate n como primos .
    // 2 listar dos multiplos como nao primos
    for (int i = 2; i < n; i++)
    {
        lista[i] = 1;
    }

    // mostrar lista
    for (int i = 2; i * i <= n; i++)
    {
        for (int p = i+i; p < n; p += i)
        {
            lista[p] = 0;
        }
    }


    for (int i = 2; i < n; i++)
    {
        /* code */
        if(lista[i] == 1)
        {
            cout << i;
            cout << " ";
        }
    }
    cout << "\n";
}