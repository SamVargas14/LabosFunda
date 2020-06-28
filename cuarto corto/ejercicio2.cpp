#include <iostream>
using namespace std;
int media(float[],float);
void comparacion(float[],double,int,int);
int main (){
    int s=0,b=0;
    float a[25];
    double prom;
    cout<<"Ingrese las estaturas a promediar.\n";
    for(int i=0; i<25; i++){
        cout<<"Estudiante "<<1+i<<": ";cin>>a[i];
    }
    media(a,prom);
    comparacion(a,prom,s,b);
    return 0;
}
int media(float x[],float a){
    for(int i=0; i<25; i++){
        a= a+(x[i]*0.04);
    }
    cout<<"El promedio de estatura de la clase es: "<<a<<endl;
    return a;
}
//Me tope con el problema que el valor del promedio no salia de la funcion "media"
//por lo cual la funcion de comparacion no funcina :(
void comparacion(float x[],double a,int b, int c){
    for(int i=0; i<25; i++){
        if (x[i]>a){
            b++;
        }
        else if(x[i]<a){
            c++;
        }
    }
    cout<<b<<" estudiantes estan por sobre el promedio.\n"<<c<<" estudiantes estan bajo la media.";
}