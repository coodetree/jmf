#include <iostream>

int main()
{
    using namespace std;

    int a;
    int b;
    int r;

    cout << "Digite o valor de(A): ";
    cin >> a;

    cout << "Digite o valor de (B): ";
    cin >> b;

    while (b != 0)
    {
        /* code */
        r = a % b;
        a = b;
        b = r;
    }

    cout << "MDC = " << a << "\n";
}