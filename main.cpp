#include <iostream>
#include "trigonometria.hpp"

int main() {
    double angulo1, angulo2;

    // Entradas do usuario para os angulos
    std::cout << "Digite o primeiro angulo em graus: ";
    std::cin >> angulo1;
    std::cout << "Digite o segundo angulo em graus: ";
    std::cin >> angulo2;

    // Criar objetos
    Trigonometria t1(angulo1);
    Trigonometria t2(angulo2);

    // Calcular as funcoes trigonométricas
    std::cout << "Seno do primeiro angulo: " << t1.obterSeno() << std::endl;
    std::cout << "Cosseno do primeiro angulo: " << t1.obterCosseno() << std::endl;
    std::cout << "Tangente do primeiro angulo: " << t1.obterTangente() << std::endl;

    std::cout << "Seno do segundo angulo: " << t2.obterSeno() << std::endl;
    std::cout << "Cosseno do segundo angulo: " << t2.obterCosseno() << std::endl;
    std::cout << "Tangente do segundo angulo: " << t2.obterTangente() << std::endl;

    // Operações entre angulos (seno e cosseno da soma e diferenca)
    std::cout << "Seno da soma dos angulos: " << t1 + t2 << std::endl;
    std::cout << "Seno da diferenca dos angulos: " << t1 - t2 << std::endl;
    std::cout << "Cosseno da soma dos angulos: " << t1 * t2 << std::endl;
    std::cout << "Cosseno da diferenca dos angulos: " << t1 / t2 << std::endl;

    return 0;
}
