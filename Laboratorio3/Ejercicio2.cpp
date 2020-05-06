#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main() {
    float r,a,p;
    cout<<"Introducir radio en cm: "; cin>>r;
    a = M_PI * pow(r,2); 
    p = (2 * M_PI) * r;
    cout<<"\nArea= "<<a<<"cm²"<<"\nPerimetro= "<<p<<"cm";
    return 0;}