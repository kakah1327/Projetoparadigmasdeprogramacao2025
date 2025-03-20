#include "trigonometria.hpp"

#define PI 3.1415926535

// Construtor
Trigonometria::Trigonometria(double angulo) {
    angulo_graus = angulo;
    angulo_radianos = angulo * (PI / 180.0);  // Converte para radianos
}

// Função para calcular o fatorial
long double Trigonometria::fatorial(int n) const {
    long double resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Métodos para obter as funções trigonométricas
double Trigonometria::obterSeno() const {
    double seno = 0;
    for (int i = 0; i < 10; i++) {  // Aproximação em 10 termos
        double termo = (pow(-1, i) * pow(angulo_radianos, 2 * i + 1)) / fatorial(2 * i + 1);
        seno += termo;
    }
    return seno;
}

double Trigonometria::obterCosseno() const {
    double cosseno = 0;
    for (int i = 0; i < 10; i++) {  // Aproximação em 10 termos
        double termo = (pow(-1, i) * pow(angulo_radianos, 2 * i)) / fatorial(2 * i);
        cosseno += termo;
    }
    return cosseno;
}

double Trigonometria::obterTangente() const {
    return obterSeno() / obterCosseno();
}

double Trigonometria::obterCotangente() const {
    return obterCosseno() / obterSeno();
}

double Trigonometria::obterSecante() const {
    return 1 / obterCosseno();
}

double Trigonometria::obterCossecante() const {
    return 1 / obterSeno();
}

// Seno da soma de angulos
double Trigonometria::operator+(const Trigonometria &outro) const {
    return obterSeno() * outro.obterCosseno() + obterCosseno() * outro.obterSeno();
}

// Seno da diferenca de angulos
double Trigonometria::operator-(const Trigonometria &outro) const {
    return obterSeno() * outro.obterCosseno() - obterCosseno() * outro.obterSeno();
}

// Cosseno da soma de angulos
double Trigonometria::operator*(const Trigonometria &outro) const {
    return obterCosseno() * outro.obterCosseno() - obterSeno() * outro.obterSeno();
}

// Cosseno da diferenca de angulos
double Trigonometria::operator/(const Trigonometria &outro) const {
    return obterCosseno() * outro.obterCosseno() + obterSeno() * outro.obterSeno();
}
