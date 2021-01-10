#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>



std::vector<std::string> ObtenerFechas(std::string nombre_fichero){
  std::ifstream fichero(nombre_fichero.c_str());
  std::string linea; 
  std::vector<std::string> Fechas{};
  //fichero.open(nombre_fichero);
  if( fichero.fail() ){
    std::cout << "No existe el fichero!" << std::endl;
        exit(1);
    }
  while (! fichero.eof()) {
    getline(fichero,linea);
    if (! fichero.eof()) 
      Fechas.emplace_back(linea);
    }
  fichero.close();
  return Fechas;
}

int main(){
    std::cout<<"Dime el nombre de tu fichero"<<std::endl;
  std::string nombre1;
  std::cin>>nombre1;
  std::vector<std::string> mostrar= ObtenerFechas(nombre1);
  for (unsigned int i=0;i<mostrar.size();i++){
    std::cout<<mostrar[i]<<std::endl;
  }
}

