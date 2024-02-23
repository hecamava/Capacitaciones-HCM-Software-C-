#include <iostream>
using namespace std;

int main()
{
/* Devuelve el valor boleano verdadero(1), si la edad digitada es de un adolescente
es decir si la edad esta entre los 11 y los 17 años, en el caso contrario imprimir(0)
y el correspondiente mensaje de que no es un adolescente
*/    
int x;    
    
cout<<"Digite edad: "<<endl;
cin>>x;
bool res;
bool es_adolescente1= x>=11;
bool es_adolescente2= x<18;
system("pause");
res= es_adolescente1 && es_adolescente2;
if(res==1){
    cout<<"Segun la edad digitada, la persona es adolescente, por ello se imprime"<<"("<<res<<")"<<endl;
}else{
cout<<"Segun la edad digitada, la persona no es adolescente, por ello se imprime"<<"("<<res<<")"<<endl;    
}
    
return 0;
}
