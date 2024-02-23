#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int fin;
    cout<<"Ingresar e número de registros: "<<endl;
    cin>>fin;
    cout<<endl;
    
    double num[fin];
    double prom;
    double suma=0, men=0, may=0;
    
    
    for (int i=0; i<fin; i++){
        cout<<"Elemento["<<i+1<<"]: ";
        cin>>num[i];
        
        suma +=num[i];    //suma +num[i];
    }
    prom= suma/fin;
    
    for (int i=0; i<fin; i++){
       if(num[i] < prom)
         men++;    //Igual a men=men+1
      if(num[i] > prom)
         may++;    //Igual a may=may+1      
    }
    cout<<endl;
    cout<<"El número de registros es: "<<fin<<endl;
    cout<<"La suma o sumatoria de los registros es: "<<suma<<endl;
    cout<<"El promedio de los registros es: "<<prom<<endl;
    cout<<"Cantidad de registros mayores que el promedio: "<<may<<endl;
    cout<<"Cantidad de registros menores que el promedio: "<<men<<endl;
    
    system("pause");
    
    return 0;
}

