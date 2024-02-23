#include <iostream>

int main()
{
 using namespace std;
 
 double x,y;
  double sum,res,mul,div1;
  
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
  
   /*Atención esta división se realiza de manera básica,
   es decir sin validar que el divisor es cero (0), para ello se
   necesita el condicional if, este tema aparece en el siguiente video o código*/
  
  div1=x/y;     
  cout<<"La división es: "<<div1<<endl;
 
  return 0;
}
