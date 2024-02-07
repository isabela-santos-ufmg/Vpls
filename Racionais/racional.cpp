#include "racional.h"

#include <cmath>
#include <iostream>

void Racional::Simplificar() {
  if(denominador_ < 0){
    denominador_ = -denominador_;
    numerador_ = -numerador_;
  }
  int a = numerador_;
  int b = denominador_;

    if (a < 0) a = -a;

    // Calcular o MDC
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // Simplificar usando o MDC
    numerador_ /= a;
    denominador_ /= a;
}

Racional::Racional() {
  numerador_ = 0;
  denominador_ = 1;
}

Racional::Racional(int n)  {
  numerador_ = n;
  denominador_ = 1;
}

Racional::Racional(int n, int d) {
  numerador_ = n;
  denominador_ = d;
  Racional::Simplificar();
}

int Racional::numerador() const {
  return numerador_;
}

int Racional::denominador() const {
  return denominador_;
}

Racional Racional::simetrico() const {
  return Racional(-numerador_, denominador_);
}

Racional Racional::somar(Racional k) const {
  return Racional(numerador_*k.denominador_ + k.numerador_*denominador_, denominador_*k.denominador_);
}

Racional Racional::subtrair(Racional k) const {
  return Racional(numerador_*k.denominador_ - k.numerador_*denominador_, denominador_*k.denominador_);
}

Racional Racional::multiplicar(Racional k) const {
  return Racional(numerador_*k.numerador_, denominador_*k.denominador_);
}

Racional Racional::dividir(Racional k) const {
  return Racional(numerador_*k.denominador_, denominador_*k.numerador_);
}