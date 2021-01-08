/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas_funciones.cc
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date 3-1-21
  * @brief El siguiente programa realiza la suma y la resta de 2 numeros complejos.
  * @bug 
  * @see https://www.internalpointers.com/post/modern-cmake-beginner-introduction
  *      https://www.learncpp.com/cpp-tutorial/81-welcome-to-object-oriented-programming/
  *      
  */
#include <iostream>
#include <vector>
#include <string>
#include "complejos_funciones.cc"

int main (int argc, char* argv[]){
  Complejo complejo_1 {4,5};
  Complejo complejo_2 {7,-8};
  Complejo resultado;
  resultado = resultado.Suma(complejo_1, complejo_2);
  resultado.MostrarSuma();

  resultado = resultado.Resta(complejo_1, complejo_2);
  resultado.MostrarResta();
    
}