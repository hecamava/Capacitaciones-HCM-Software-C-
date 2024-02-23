#include <iostream>

int main()
{
 using namespace std;
 
 double x,y;
  double sum,res,mul,div1;   /*Atención: Definimos div1 y no div,
  ya que div es una instruccion propia del lenguaje C++  */
  
  cout<<"Digite el primer valor: ";
  cin>>x;
  
  cout<<"Digite el segundo valor: ";
  cin>>y;
  
  sum=x+y;
  cout<<"La suma es: "<<sum<<endl;
   
  res=x-y;
  cout<<"La resta es: "<<res<<endl;
  
  mul=x*y;
  cout<<"La multiplicación es: "<<mul<<endl;
  
   /*Atención esta división ahora si se realiza de manera completa,
   es decir validando si el divisor es cero (0), para ello utilizamos
   la función condicional if*/
  if(y==0){
      
  } else {
  div1=x/y;     
  cout<<"La división es: "<<div1<<endl;
  }
  return 0;
}
