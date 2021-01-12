#include <iostream>
#include "fecha.h"


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
  private:
   int dia_;
   int mes_;
   int anio_;
};  

 void Errores(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << argv[0] << "- Gestión de fechas" << std::endl;
    std::cout << "Modo de uso: ./fechas fichero_entrada.txt fichero_salida.txt" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};

  if (parameter == "--help") {
    std::cout << "El siguiente programa, a traves de los parametros dados siendo: " << std::endl;
    std::cout << "fichero de entrada, fichero de salida " << std::endl;
    std::cout << "pondrá en el fichero de salida, todas las fechas del fichero de entrada" << std::endl;
    std::cout << "ordenadas cronologicamente y mostrará un 1 cuando el año sea bisiesto" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

bool CondicionBisiesto(int numero_evaluar){   ///comenzamos evaluando si el año es bisiesto o no
  if ((numero_evaluar % 4 == 0) && (numero_evaluar % 100 != 0) || (numero_evaluar % 400 == 0)) {
    return "Es bisiesto";
  } else { 
    return "No es bisiesto";
  }
}


void FechasOrdenadas1(std::vector<int>vector_fechas, std::string fichero_salida){
  std::vector<int> ordenar_datos;
  int dia = 0, mes = 0, anio = 0, resultado = 0;
      for (int i = 0; i < vector_fechas.size() - 2;){
         dia = vector_fechas[i+0];
         mes = vector_fechas[i+1];
         anio = vector_fechas[i+3];
         resultado = ((anio*10000)+(mes*100)+dia);
         vector_fechas.emplace_back(resultado);
         i = i + 3;
      }
      std::sort(ordenar_datos.begin(), ordenar_datos.end());

      int dia1 = 0;
      int mes1 = 0;
      int anyo1 = 0;

      std::ofstream texto_resultado (fichero_salida);
      for(int i = 0; i < ordenar_datos.size(); i++){
         int intercambio = ordenar_datos[i];
         anyo1 = (intercambio/10000);
         mes1 = ((intercambio%10000)/100);
         dia1 = ((intercambio%10000)%100);
         texto_resultado << dia1 << "/" << mes1 << "/" << anyo1 << std::endl;
      }
      texto_resultado.close();
    }

