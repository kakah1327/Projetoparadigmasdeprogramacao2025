#ifndef TRIGONOMETRIA_HPP
#define TRIGONOMETRIA_HPP

#include <cmath>  // Para as funcoes matematicas
#include <iostream>
#include <fstream>
#include <string>

class Trigonometria {
private:
    double angulo_graus;      // Angulo em graus
    double angulo_radianos;   // Angulo em radianos

    // Função auxiliar para calcular o fatorial
    long double fatorial(int n) const;

public:
    // Construtor
    Trigonometria(double angulo);

    // Definir angulo
    void setAngulo(double angulo);

    // Obter seno
    double obterSeno() const;

    // Obter cosseno
    double obterCosseno() const;

    // Obter tangente
    double obterTangente() const;

    // Obter cotangente
    double obterCotangente() const;

    // Obter secante
    double obterSecante() const;

    // Obter cossecante
    double obterCossecante() const;

    // Seno da soma de angulos
    double operator+(const Trigonometria &outro) const;

    // Seno da diferença de angulos
    double operator-(const Trigonometria &outro) const;

    // Cosseno da soma de angulos
    double operator*(const Trigonometria &outro) const;

    // Cosseno da diferença de angulos
    double operator/(const Trigonometria &outro) const;
};

#endif
