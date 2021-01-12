/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas_funciones.cc
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date 3-1-21
  * @brief En este apartado se podrá encontrar las declaraciones del programa complejos_main.cc
  * @bug 
  * @see https://www.internalpointers.com/post/modern-cmake-beginner-introduction
  *      https://www.learncpp.com/cpp-tutorial/81-welcome-to-object-oriented-programming/
  *      
  */
#include <iostream>
void Errores(int argc, char *argv[]);
bool CondicionBisiesto(int numero_evaluar);
void Mostrar();
void EstablecerFechas(int dia, int mes, int anio);
void FechasOrdenadas1(std::vector<int>vector_fechas, std::string fichero_salida);