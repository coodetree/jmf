#include <iostream>
// quadrado perfeito

int main()
{
    using namespace std;

    int n = 0, i;
    bool ehquadrado = false;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    for (i = 0; i * i <= n; i++)
    {
        /* code */
        if (i * i == n)
        {
            ehquadrado = true;
            break;
        }
    }

    cout << "Ehquadrado: " << ehquadrado << ".\n";

    return 0;
}