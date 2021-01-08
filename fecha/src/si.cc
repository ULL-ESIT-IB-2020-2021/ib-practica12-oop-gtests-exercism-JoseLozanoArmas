#include<iostream>
#include<iostream>
#include<algorithm>

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


int main() {

   Fecha arr[] = {{20, 1, 2017},
   {12, 11, 2060},
   { 3, 12, 1956},
   {18, 10, 1982},
   {19, 4, 2011},
   { 9, 7, 2013}
   };
   int n = sizeof(arr)/sizeof(arr[0]);

   OrdenarFechas(arr, n);

   std::cout << "Las fechas ordenadas son: " << std::endl;

   for (int i=0; i<n; i++) {
      std::cout << arr[i].dia << " " << arr[i].mes << " " << arr[i].anio << std::endl;
   }
}
