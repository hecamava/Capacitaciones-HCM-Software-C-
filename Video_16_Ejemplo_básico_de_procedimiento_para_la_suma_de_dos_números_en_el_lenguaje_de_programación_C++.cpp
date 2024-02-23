#include <iostream>

using namespace std;
void suma(double a, double b);

int main()
{
    double a,b;
    cout<<"Digite primer valor: ";
    cin>>a;
    cout<<"Digite segundo valor: ";
    cin>>b;
    suma(a,b);
    return 0;
}

void suma(double a, double b){
    
    double sum= a+b;
     cout<<"La suma es: "<<sum <<endl;
 }
