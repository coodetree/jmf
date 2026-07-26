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

    int c = a * b;

    while (b != 0)
    {
        /* code */
        r = a % b;
        a = b;
        b = r;
    }

    // mmc calculo
    int mmc = c / a;

    cout << "MDC : " << a << " | MMC : " << mmc << "\n";

    return 0;
}