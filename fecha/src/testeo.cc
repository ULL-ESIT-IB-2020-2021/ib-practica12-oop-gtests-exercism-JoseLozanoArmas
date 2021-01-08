#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include "fecha_funciones.cc"

class Fecha {
 private:
  int dia_;
  int mes_;
  int anio_;
 public:

  void Mostrar(){
    std::cout << dia_ << " " << mes_ << " " << anio_ << std::endl;
  }

  void EstablecerDia(int dia){ dia_ = dia;};
  void EstablecerMes(int mes){ mes_ = mes;};
  void EstablecerAnio(int anio){ anio_ = anio;};

};

int main (int argc, char* argv[]){
  //Errores(argc,argv);
  std::ifstream texto_entrada {"fichero_entrada.txt"};
  std::ofstream texto_salida {"fichero_salida.txt"};
  std::string lineas;
  std::vector<int> vector_fechas;
  
  Fecha fecha; //El constructor

  while(std::getline(texto_entrada,lineas)){

  std::string prueba = "01032002";
  int calculo_fecha = stoi(lineas);
  //std::cout << lineas << std::endl;
  int anio = calculo_fecha % 10000;
  int mes = (calculo_fecha / 10000) % 100;
  int dia = calculo_fecha / 1000000;

  fecha.EstablecerDia(dia);
  fecha.EstablecerMes(mes);
  fecha.EstablecerAnio(anio);
  //fecha.Mostrar();

  vector_fechas.push_back(calculo_fecha);
  std::sort(vector_fechas.begin(), vector_fechas.end());
  
  


    texto_salida << dia << "/" << mes << "/" << anio << std::endl;


  }

  for(size_t i = 0; i < vector_fechas.size(); i++){
   
    std::cout << vector_fechas[i] << std::endl;
  }

  



  

  
}

 


