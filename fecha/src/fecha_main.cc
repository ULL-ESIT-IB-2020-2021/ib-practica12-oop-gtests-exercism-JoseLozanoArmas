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

class Fecha {
 public:
  void Mostrar(){ 
    std::cout << dia_ << "/" << mes_ << "/" << anio_ << std::endl;
  }

  void EstablecerFechas(int dia, int mes, int anio){
     dia_ = dia;
     mes_ = mes;
     anio_ = anio;
  }

  bool comparar(const Fecha &dia1){
   if (dia1.anio_ < dia1.anio_)
      return true;
   if (dia1.anio_ == dia1.anio_ && dia1.mes_ < dia1.mes_)
      return true;
   if (dia1.anio_ == dia1.anio_ && dia1.mes_ == dia1.mes_ && dia1.dia_ < dia1.dia_)
      return true;
   return false;
  }
 
  private:
   int dia_;
   int mes_;
   int anio_;

}; 
  



int main (int argc, char* argv[]){
  //Errores(argc,argv);
  std::ifstream texto_entrada {"fichero_entrada.txt"};
  std::ofstream texto_salida {"fichero_salida.txt"};
  std::string lineas;
  int dia, mes, anio;
  char barra;

  std::vector<Fecha> vector_fechas;
      
  std::cout << "Las fechas introducidas fueron:" << std::endl;

  Fecha fecha; //El constructor

  texto_salida << "La fechas ordenadas son:" << std::endl; 

    while(std::getline(texto_entrada,lineas)){

      texto_entrada >> dia >> barra >> mes >> barra >> anio;
      
      fecha.EstablecerFechas(dia,mes,anio);
      
      fecha.Mostrar();

      /*vector_dia.push_back(anio);
      vector_dia.push_back(mes);
      vector_dia.push_back(dia);*/
      
  
      texto_salida << dia << "/" << mes << "/" << anio << std::endl;

  }
}