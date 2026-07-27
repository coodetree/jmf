#include <iostream>

int main()
{
    using namespace std;
    int n;
    int i = 2;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    cout << n << " = ";
    while (n != 1)
    {
        /* code */
        int cont = 0;

        while (n % i == 0)
        {
            /* code */
            n /= i;
            cont+=1;
        }
        
        if (cont >= 1)
        {
            cout << i << "^" << cont;
            if(n != 1){
                cout << " X ";
            }
        }
        i+=1;
    }

    cout << "\n";
}