#include <iostream>
#include <vector>
#include <string>
#include "complejos_funciones.cc"

int main (int argc, char* argv[]){
  Complejo complejo_1 {4,5};
  Complejo resultado;
  int real = 2;
  resultado = resultado.Resta(complejo_1, real);
  resultado.MostrarResta();
      
}











/*#include <iostream>


class Complejo {
   
    void EstablecerImaginario(int real, int imaginario){
     real_ = real;
     imaginario_ = imaginario;
  } 
    void MostrarResta(){
    if(real_ < 0){
    imaginario_ = imaginario_ * -1;
    std::cout << "Resultado resta = " << real_ << " - " << imaginario_ << "i" << std::endl;
  } else { 
    std::cout << "Resultado resta = " << real_ << " + " << imaginario_ << "i" << std::endl;
  }
  }

  Complejo RestaConReal(Complejo complejo_1, int numero){
  Complejo resultado;
  int resultado_real = complejo_1.real_ - numero;
  resultado = {resultado_real};
  return resultado;
  }

 private:
  int real_;
  int imaginario_;

};


int main(int argc, char* argv[]){


  

}*/