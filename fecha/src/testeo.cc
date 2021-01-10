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

 bool comparar(const Fecha& fecha, const Fecha& fecha_2){
     return (fecha.dia_ < fecha.dia_ && fecha.mes_ < fecha.mes_ && fecha.anio_ < fecha.anio_);
  }

  private:
   int dia_;
   int mes_;
   int anio_;
}; 
  
  
/*bool comparar(int dia, int dia_){
   return (dia < dia_);
}
bool comparar(int dia, int dia_, int mes, int mes_){
   return (dia < dia_ && mes < mes_);
}
bool comparar(int dia, int dia_, int mes, int mes_, int anio, int anio_){
   return (dia < dia_ && mes < mes_ && anio < anio_);
}*/
/*bool comparar(const Fecha &dia1, const Fecha &dia2){
   if (dia1.anio_ < dia2.anio_)
      return true;
   if (dia1.anio_ == dia2.anio_ && dia1.mes_ < dia2.mes_)
      return true;
   if (dia1.anio_ == dia2.anio_ && dia1.mes_ == dia2.mes_ && dia1.dia_ < dia2.dia_)
      return true;
   return false;
}*/



/*std::ostream& operator<<(std::ostream& out, const Fecha& fecha)
{
   return out << fecha;
}*/
 


int main (int argc, char* argv[]){
  //Errores(argc,argv);
  std::ifstream texto_entrada {"fichero_entrada.txt"};
  std::ofstream texto_salida {"fichero_salida.txt"};
  std::string lineas;
  int dia, mes, anio;
  char barra;

  std::vector<int> vector_fechas;
  std::vector<int> vector_dia;
  std::vector<int> vector_mes;
  std::vector<int> vector_anio;

  std::vector<Fecha> clase;

  std::cout << "Las fechas introducidas fueron:" << std::endl;
  texto_salida << "La fechas ordenadas son:" << std::endl; 

  Fecha fecha; //El constructor
  
  
  

    while(std::getline(texto_entrada,lineas)){

      texto_entrada >> dia >> barra >> mes >> barra >> anio;
      fecha.EstablecerFechas(dia,mes,anio);
      fecha.Mostrar();

      vector_dia.push_back(dia);
      vector_mes.push_back(mes);
      vector_anio.push_back(anio);





      /*vector_fechas.push_back(dia);
      vector_fechas.push_back(mes);
      vector_fechas.push_back(anio);*/

      /*vector_dia.push_back(dia);
      vector_mes.push_back(mes);
      vector_anio.push_back(anio);*/
  
   texto_salida << dia << "/" << mes << "/" << anio << std::endl;
     
  
 
  
}
 
 std::cout << "Los dias ordenados son: " << std::endl;
  for(size_t i = 0; i < vector_dia.size(); i++){
     std::sort (vector_dia.begin(), vector_dia.end());
     std::cout << vector_dia[i] << std::endl;

  }

  std::cout << "Los meses ordenados son: " << std::endl;
  for(size_t i = 0; i < vector_mes.size(); i++){
     std::sort (vector_mes.begin(), vector_mes.end());
     std::cout << vector_mes[i] << std::endl;

  }

  std::cout << "Los años ordenados son: " << std::endl;
   for(size_t i = 0; i < vector_anio.size(); i++){
     std::sort (vector_anio.begin(), vector_anio.end());
     std::cout << vector_anio[i] << std::endl;

  }
  

  
  

 

}