// Copyright 2022 Universidade Federal de Minas Gerais (UFMG)

#include "complexo.h"

#include <cmath>

Complexo::Complexo() {
  real_ = 0;
  imag_ = 0;
}

Complexo::Complexo(double a, double b) {
  real_ = a;
  imag_ = b;

}

double Complexo::real() {
  return real_;
}

double Complexo::imag() {
  return imag_;
}

bool Complexo::igual(Complexo x) {
  if(real_ == x.real_ && imag_ == x.imag_){
    return true;
  }else{  
    return false;
  }
}

void Complexo::Atribuir(Complexo x) {
  real_ = x.real_;
  imag_ = x.imag_;
}

double Complexo::modulo() {
  return std::sqrt(std::pow(real_, 2) + std::pow(imag_, 2));
}

Complexo Complexo::conjugado() {
  Complexo c(real_, -imag_);
  return c;
}

Complexo Complexo::simetrico() {
  Complexo c(-real_, -imag_);
  return c;
}

Complexo Complexo::inverso() {
  Complexo i(real_/std::pow(Complexo::modulo(),2), -imag_/std::pow(Complexo::modulo(),2));
  return i;
}

Complexo Complexo::somar(Complexo y) {
  Complexo s(real_ + y.real_, imag_ + y.imag_);
  return s;
}

Complexo Complexo::subtrair(Complexo y) {
  Complexo s(real_ - y.real_, imag_ - y.imag_);
  return s;
}

Complexo Complexo::multiplicar(Complexo y) {
  Complexo p(real_*y.real_ - imag_*y.imag_, real_*y.imag_ + imag_*y.real_);
  return p;
}

Complexo Complexo::dividir(Complexo y) {
  double denominador = y.real_ * y.real_ + y.imag_ * y.imag_;
  // Calcular as partes real e imaginária do resultado
  Complexo d;
  d.real_ = (real_ * y.real_ + imag_ * y.imag_) / denominador;
  d.imag_ = (imag_ * y.real_ - real_ * y.imag_) / denominador;
  return d;
}
