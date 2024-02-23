#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int x[6]={ 1,2,3,4,5,6 };
    int *prtX;  //& Direccion, "Registro que se ha almacenado"


     prtX = x;//Inicializa el valor del puntero, pero adicionalmente a la memoria RAM del computador
    
     cout<< endl << *prtX; //Imprime la primera posicion 1
     prtX += 2;   //prtX=prtX+2 (En C y C++ posicion -->2 )
     cout<< endl << *prtX; //Imprime el número 3
     prtX -= 2;  //prtX=prtX-2
     cout<< endl << *prtX;
     prtX ++;  //prtX+1
     cout<< endl << *prtX; //Imprime el número 2
    return 0;
}

