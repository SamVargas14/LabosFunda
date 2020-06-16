#include <iostream>
using namespace std;
int main(void){
    int dd,dr,re;
    cout<<"Bienvenido\nAqui podras calcular el MDC de dos numeros.";
    cout<<"\nDigite el numero mayor: ";cin>>dd;
    cout<<"\nDigite el numero menor: ";cin>>dr;
    do {
        re = dd%dr;
        if (re !=0){
            dd=dr;
            dr=re;
        }
    }
    while(re !=0);
    cout<<"\nEl MCD es: "<<dr;
    return 0;
}
    