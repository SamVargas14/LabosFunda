#include <iostream>
using namespace std;
void arreglos (int [],int [],int);
void suma (int[],int[],int[],int);
void resultado (int[],int);

int main(){
    int n;
    cout<<"Ingresar tama\244o de los arreglos: ";cin>>n;
    int a[n],b[n],c[n];
    arreglos(a,b,n);
    suma(a,b,c,n);
    resultado(c,n);
    return 0;
}
void arreglos(int a[],int b[], int n){
    cout<<"Elementos del arreglo A:"<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<"Los elementos del arreglo B:"<<endl;
    for(int i=0;i<n;i++){
    cin>>b[i];
    }
}
void suma(int a[],int b[],int c[], int n){
    for(int i=0;i<n;i++){
    c[i]=a[i]+b[i];
    }
}
void resultado(int c[], int n){
    cout<<"La suma de los arreglos A y B es:";
    for(int i=0;i<n;i++){
    cout<<" "<<c[i];
    }
}