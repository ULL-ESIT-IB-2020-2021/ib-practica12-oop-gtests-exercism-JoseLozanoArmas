#include <iostream>
#include "fecha.h"

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