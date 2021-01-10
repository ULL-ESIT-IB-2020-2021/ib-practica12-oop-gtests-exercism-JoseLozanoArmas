#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>

class Fecha {
   public:
      int dia, mes, anio;
    private:
        void OrdenarFechas(Fecha ,int);
        bool EsBisiesto(int);
};

bool Fecha::EsBisiesto(int anio){
    int aux;
    aux= anio%4;
    if (aux==0){
        std::cout<<"Es bisiesto";
    }else{
        std::cout<<"No es bisiesto";
    }
}
bool comparar(const Fecha &dia1, const Fecha &dia2){
   if (dia1.anio < dia2.anio)
      return true;
   if (dia1.anio == dia2.anio && dia1.mes < dia2.mes)
      return true;
   if (dia1.anio == dia2.anio && dia1.mes == dia2.mes && dia1.dia < dia2.dia)
      return true;
   return false;
}


void OrdenarFechas(Fecha arr[], int n) {
   std::sort(arr, arr+n, comparar);
}


int main(int argc, char* argv[]){
    std::ifstream texto_entrada {"fichero_entrada.txt"};
  std::ofstream texto_salida {"fichero_salida.txt"};
  std::string lineas;
  int dia, mes, anio;
  char barra;

   texto_salida << "La fechas ordenadas son:" << std::endl; 

   std::vector<int> vector_fechas;
   int i=0, n=0;
   
    while(std::getline(texto_entrada,lineas)){

      texto_entrada >> dia >> barra >> mes >> barra >> anio;

      Fecha arr[] = {{dia,mes,anio}};
      i++;

      /*vector_fechas.push_back(dia);
      vector_fechas.push_back(mes);
      vector_fechas.push_back(anio);*/

        
         

   }
   n = sizeof(arr[])/sizeof(arr[0]);

   OrdenarFechas(arr, n);

   for (int i=0; i<n; i++) {
      texto_salida << arr[i].dia << " " << arr[i].mes << " " << arr[i].anio << std::endl;
   }

    /*for(size_t i = 0, u=1, w=2; i < vector_fechas.size(); i+=3,u+=3,w+=3){
     texto_salida << vector_fechas[i]<<"/"<<vector_fechas[u]<<"/"<<vector_fechas[w] << std::endl;
     };*/


}