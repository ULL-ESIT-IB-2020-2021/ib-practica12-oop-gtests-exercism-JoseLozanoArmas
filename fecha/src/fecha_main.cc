/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas_main.cc
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date 3-1-2021
  * @brief El siguiente programa al introducirle una fecha, un número y un fichero de texto. Pondrá en dicho fichero
  *        ún numero de fechas continuas a la antes dada igual al número introducido. 
  * @bug 
  * @see https://www.internalpointers.com/post/modern-cmake-beginner-introduction
  *      https://www.learncpp.com/cpp-tutorial/81-welcome-to-object-oriented-programming/
  *      
  */
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "fecha_funciones.cc"



int main (int argc, char* argv[]){
  //Errores(argc,argv);
  std::ifstream texto_entrada {"fichero_entrada.txt"};
  std::ofstream texto_salida {"fichero_salida.txt"};
  std::string lineas;

  while ((std::getline(texto_entrada,lineas))) {
    std::cout << lineas << std::endl;




    texto_salida << lineas << std::endl;

  }

 


}
