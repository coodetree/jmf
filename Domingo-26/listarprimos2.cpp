#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    int n;
    cout << "Digite um limite: ";
    cin >> n;

    if (n < 2)
    {
        cout << "Nao existem numeros primos menores que 2.\n";
        return 0;
    }

    vector<bool> ehPrimo(n + 1, true);
    ehPrimo[0] = false;
    ehPrimo[1] = false;

    for (int i = 2; i * i <= n; ++i)
    {
        if (ehPrimo[i])
        {
            for (int multiplo = i + i; multiplo <= n; multiplo += i)
            {
                ehPrimo[multiplo] = false;
            }
        }
    }

    cout << "Numeros primos ate " << n << ": ";
    for (int i = 2; i <= n; ++i)
    {
        if (ehPrimo[i])
        {
            cout << i << " ";
        }
    }
    cout << "\n";

    return 0;
}