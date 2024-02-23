#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double f,d,ang,t;
    cout<<"Digite la fuerza: ";
    cin>>f;
    cout<<"Digite la distancia: ";
    cin>>d;
    cout<<"Digite el ángulo: ";
    cin>>ang;
    t=f*d*cos(ang);
    cout<<"El resultado del trabajo es: "<<t;
    return 0;
}
