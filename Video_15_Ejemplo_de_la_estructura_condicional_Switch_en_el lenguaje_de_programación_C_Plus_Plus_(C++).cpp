#include <iostream>

using namespace std;

int main()
{
  
  int dia;
  
  cout<<"Favor digite el día de la semana: ";
  cin>>dia;
  
  switch(dia){
      case 1:
         cout<<"El número digitado corresponde al día lunes ";
      break;
      case 2:
         cout<<"El número digitado corresponde al día martes ";
      break;
      case 3:
         cout<<"El número digitado corresponde al día miercoles ";
      break;
      case 4:
         cout<<"El número digitado corresponde al día jueves ";
      break;
      case 5:
         cout<<"El número digitado corresponde al día viernes ";
      break;
      case 6:
         cout<<"El número digitado corresponde al día sábado ";
      break;
      case 7:
         cout<<"El número digitado corresponde al día domingo ";
      break;
      
    default:
      cout<<"El día digitado no corresponde a un dia de la semana";
      break;
  }
   return 0;
}

