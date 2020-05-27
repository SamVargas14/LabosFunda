#include <iostream>
using namespace std;
int main(void){
    int n;
    cout<<"Ingrese un numero: ";cin>>n;
    if (n > 0){
        cout<<"El numero que usted ingreso es positivo";
    }
    else if (n < 0){
        cout<<"El numero que usted ingreso es negativo";
    }
    else {
        cout<<"Usted ingreso es 0";
    }
return 0;}