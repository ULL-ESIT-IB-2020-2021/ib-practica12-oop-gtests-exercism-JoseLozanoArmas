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
 /*bool comparar(const Fecha& fecha, const Fecha& fecha_2){
     return (fecha.dia_ < fecha.dia_ && fecha.mes_ < fecha.mes_ && fecha.anio_ < fecha.anio_);
  }*/
  private:
   int dia_;
   int mes_;
   int anio_;
};  

/*bool comparar(const Fecha &dia1, const Fecha &dia2){
   if (dia1.anio_ < dia2.anio_)
      return true;
   if (dia1.anio_ == dia2.anio_ && dia1.mes_ < dia2.mes_)
      return true;
   if (dia1.anio_ == dia2.anio_ && dia1.mes_ == dia2.mes_ && dia1.dia_ < dia2.dia_)
      return true;
   return false;
  

}*/

int main (int argc, char* argv[]){
  //Errores(argc,argv);
  std::ifstream texto_entrada {"fichero_entrada.txt"};
  std::ofstream texto_salida;
  std::string lineas;
  std::string fichero_salida;
  int dia, mes, anio, resultado;
  char barra;
  std::vector<int> vector_fechas;

  
  /*std::cout << "Dime un nombre" << std::endl;
  std::cin >> fichero_salida;
  std::cout << "Las fechas introducidas fueron:" << std::endl;
  texto_salida << "La fechas ordenadas son:" << std::endl;*/

  Fecha fecha; ///El constructor

    while(std::getline(texto_entrada,lineas)){

      texto_entrada >> dia >> barra >> mes >> barra >> anio;
      fecha.EstablecerFechas(dia,mes,anio);
      fecha.Mostrar();

      vector_fechas.push_back(dia);
      vector_fechas.push_back(mes);
      vector_fechas.push_back(anio);

      
  
    }

    for (int i = 0; i < vector_fechas.size(); i++){
       std::cout << vector_fechas[i] << std::endl;
    }
  
  

  
  

 

}