#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Tamanho do vetor: ";
    std::cin >> n;

    std::vector<int> vet(n);
    std::cout << "Digite os elementos:\n";
    for (int &x : vet) {
        std::cin >> x;
    }

    std::cout << "Vetor lido: ";
    for (const int &x : vet) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    return 0;
}