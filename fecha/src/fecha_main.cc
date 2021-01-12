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
#include <algorithm>
#include "fecha_funciones.cc"

 

int main (int argc, char* argv[]){
  Errores(argc,argv);
  std::ifstream texto_entrada (argv[1]);
  std::ofstream texto_salida (argv[2]);
  std::string lineas;
  std::string fichero_salida;
  int dia, mes, anio, resultado;
  char barra;
  std::vector<int> vector_fechas;

  
  std::cout << "Dime un nombre para el fichero de salida" << std::endl;
  std::cin >> fichero_salida;

  Fecha fecha; ///El constructor

    while(std::getline(texto_entrada,lineas)){

      texto_entrada >> dia >> barra >> mes >> barra >> anio;
      fecha.EstablecerFechas(dia,mes,anio);
      fecha.Mostrar();

      vector_fechas.push_back(dia);
      vector_fechas.push_back(mes);
      vector_fechas.push_back(anio);
      
    }
     

    FechasOrdenadas1(vector_fechas, fichero_salida);
     

 
  
   

  
  

 

}