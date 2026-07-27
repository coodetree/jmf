#include <iostream>

// 10. Calcular o MDC de três números.

int main()
{
    using namespace std;

    int a;
    int b;
    int c;

    cout << "Digite O valor de A: ";
    cin >> a;

    cout << "Digite o valor de B: ";
    cin >> b;

    cout << "Digite o valor de C: ";
    cin >> c;

    // mdc de euclides

    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    while (a != 0)
    {
        /* code */
        int r = c % a;
        c = a;
        a = r;
    }
    

    cout << "MDC: " << c << "\n";
}