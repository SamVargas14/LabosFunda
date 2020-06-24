#include <iostream>
using namespace std;
int main(void){
    int n;
    cout<<"Ingresar tama\244o del arreglo:";cin>>n;
    int a[n],b[n],c[n];
    cout<<"Elementos del arreglo A:"<<endl;
    for(int i=0;i<n;i++){
    cout<<"Ingrese los elementos: ";cin>>a[i];
    }
    cout<<"Los elementos del arreglo B:"<<endl;
    for(int i=0;i<n;i++){
    cout<<"Elemento ["<<i<<"]:";cin>>b[i];
    }
    for(int i=0;i<n;i++){
    c[i]=a[i]+b[i];
    }
    cout<<"La suma de los arreglos:";
    for(int i=0;i<n;i++){
    cout<<" "<<c[i];
    }
}
