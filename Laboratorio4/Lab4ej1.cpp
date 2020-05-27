#include <iostream>
using namespace std;
int main(void){
    int n1,n2,r;
    cout<<"Ingrese valores a dividir\nValor 1: ";cin>>n1;cout<<"\nValor 2: ";cin>>n2;
    r = n1/n2;
    if (r % 2 == 0){
        cout<<n1<<" es divisible entre "<<n2;
        }
    else {
        cout<<n1<<" no es divisible entre "<<n2;
        }
return 0;}