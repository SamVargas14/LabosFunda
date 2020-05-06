#include <iostream>
#include <math.h>
using namespace std;
 int main(){
     int a,b,c;
     float x1,x2;
     cout<<"Ingrese valor de a: "; cin>>a;
     cout<<"Ingrese valor de b: "; cin>>b;
     cout<<"Ingrese valor de c: "; cin>>c;
     x1 = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
     x2 = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
     cout<<"\nx1= "<<x1<<"\nx2= "<<x2;
     return 0; }