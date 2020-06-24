#include <iostream>
using namespace std;
int main(void){
    int n,e,c=0;
    cout<<"Ingrese el tama\244o del arreglo: ";cin>>n;
    int a[n];
    cout<<"Elementos del arreglo\n";
    for(int i=0; i<n; i++){
        cout<<"Ingrese elementos: ";cin>>a[i];
    }
    cout<<"Ingrese el numero que desea saber si se repite:";cin>>e;
    for(int i=0; i<n; i++){
        if (e==a[i]){
            c++;
        }
    }
    cout<<"El numero se repite "<<c<<" veces.";
}