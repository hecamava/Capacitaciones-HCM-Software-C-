#include <iostream>

int main()
{
   using namespace std;
   int i,m;
   i=0;
   cout<<"Favor digite el numero final de la serie de 2: ";
   cin>>m;
   do{
     cout<<i<<endl;  
      i=i+2;
      
   }while(i<=m);
    return 0;
}
