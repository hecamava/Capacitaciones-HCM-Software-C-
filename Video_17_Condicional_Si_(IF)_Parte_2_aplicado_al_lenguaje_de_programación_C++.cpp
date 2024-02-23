#include <iostream>

int main()
{
    using namespace std;
    int t;
    
    cout<<"Favor digite el año: ";
    cin>>t;
    
    int x= t%4;  //Definicición de variable t, de tipo entero, % es modulo o residuo de la división de de un numero entre cuatro  
    
    if(x==0){
        cout<<"El año es bisiesto";
    }else{
         cout<<"El año no es bisiesto";  
    }    
    
    return 0;
}
