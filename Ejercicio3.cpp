#include <iostream>
#include <math.h>
using namespace std;
 int main(){
     int a,b,c;
     float x1,x2;
     cout<<"Ingrese valor de a: ";
     cin>>a;
     cout<<"Ingrese valor de b: ";
     cin>>b;
     cout<<"Ingrese valor de c: ";
     cin>>c;
     x1 = (-b + sqrt(pow(b,2) - 4*a*c))/2*a;
     x2 = (-b - sqrt(pow(b,2) - 4*a*c))/2*a;
     cout<<"x1= ";
     cout<<x1;
     cout<<"\nx2= ";
     cout<<x2;
     return 0; }