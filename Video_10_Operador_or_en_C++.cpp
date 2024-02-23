#include <iostream>

using namespace std;

int main()
{
    /*Devuelve el valor boleano verdadero(1), si el color digitado hace parte de los
    colores del semaforo: (Rojo o rojo), (Naranja o naranja), (Verde o verde) */
    string color;
    cout<<"Digite color: "<<endl;
    cin>>color;
    bool res;
    bool es_color1=color=="Rojo" or color=="rojo";
    bool es_color2=color=="Naranja" or color=="naranja";
    bool es_color3=color=="Verde" or color=="verde";
    system("pause");
    res= es_color1 || es_color2 || es_color3;  /* Podemos remplazarlo por or*/ 
    if(res==1){
        cout<<"Según el color digitado pertenece a los colores del semaforo, por ello se imprime: "<<"("<<res<<")"<<endl;
    }else{   
      cout<<"Según el color digitado no pertenece a los colores del semaforo, por ello se imprime: "<<"("<<res<<")"<<endl;
        
    }
    
    return 0;
}
