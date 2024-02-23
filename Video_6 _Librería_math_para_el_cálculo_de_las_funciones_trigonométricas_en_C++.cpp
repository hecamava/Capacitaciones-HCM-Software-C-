#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double ang;
    
    cout<<"Digite angulo: ";
    cin>>ang;
    cout<<"El seno del angulo es: "<<sin(ang)<<endl;
    cout<<"El coseno del angulo es: "<<cos(ang)<<endl;
    cout<<"La tangente del angulo es: "<<tan(ang)<<endl;
    cout<<"La cotangente del angulo es: "<<cos(ang)/sin(ang)<<endl;
    cout<<"La secante del angulo es: "<<1/cos(ang)<<endl;
    cout<<"La cosecante del angulo es: "<<1/sin(ang)<<endl;
    return 0;
}

