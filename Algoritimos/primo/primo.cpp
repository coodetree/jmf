#include <iostream>

int main()
{
    using namespace std;

    int n;
    bool ehprimo = true;

    cout << "Digite um numero (0 e 1 nao sao primos ): ";
    cin >> n;

    if (n > 1)
    {
        for (int i = 2; i * i <= n; i++)
        {
            /* code */
            if (n % i == 0)
            {
                ehprimo = false;
            }
        }

        cout << "Ehprimo: " << ehprimo << "\n";
    }
}