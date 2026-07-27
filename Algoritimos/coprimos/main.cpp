#include <iostream>
#include <numeric> // Necessário para std::gcd

// Função que verifica se dois números são coprimos
bool saoCoprimos(int a, int b) {
    // Se o MDC for 1, eles são coprimos
    return std::gcd(a, b) == 1;
}

int main() {
    int num1, num2;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    if (saoCoprimos(num1, num2)) {
        std::cout << num1 << " e " << num2 << " sao coprimos." << std::endl;
    } else {
        std::cout << num1 << " e " << num2 << " nao sao coprimos (MDC = " << std::gcd(num1, num2) << ")." << std::endl;
    }

    return 0;
}