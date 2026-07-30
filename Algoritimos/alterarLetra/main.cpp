#include <iostream>

using namespace std;

int main()
{
    string nome = "jose";
    string inverso;
    // cout << nome.length();
    for (int i = nome.length()-1; i >= 0; i-=1)
    {
         inverso += nome.at(i);
    }
    cout << inverso;
}