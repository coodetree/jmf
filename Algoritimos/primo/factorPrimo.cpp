#include <iostream>

int main()
{
    using namespace std;

    int n = 100;

    for (int i = 2; i <= n; i++)
    {

        int cont = 1;
        while (cont != 0)
        {
            /* code */
            if (n % i == 0)
            {
                n = n / i;
                cout << i << " X ";
                cont += 1;
            }
            else
            {
               cont = 0;
            }

            
        }
    }
    cout << "\n";
}