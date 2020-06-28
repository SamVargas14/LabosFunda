#include <iostream>
using namespace std;
void matriz(float [][5],int);
void notaFinal(float [][5],double [],int);
int main(){
    cout<<"CALCULADORA DE NOTAS\n\n"<<"Si el estudiante obtuvo menos del 60% de la nota final, este reprobara la materia.\n\n";
    int n;
    cout<<"Ingrese el numero de estudiantes a evaluar: ";cin>>n;
    float a[n][5];
    double b[n];
    matriz(a,n);
    notaFinal(a,b,n);
    return 0;
}
void matriz(float x[][5],int a){
    cout<<"Ingrese las notas de los estudiantes\n";
    for (int i=0; i<a; i++){
        cout<<"\nEstudiante "<<1+i<<":\n";
        for(int j=0; j<5; j++){
            cin>>x[i][j];
            if (x[i][j]>10){
                cout<<"\nERROR\nLa nota ingresada no es valida.\nIntentelo nuevamente.\n\n";
                j--;
            }
        }
    }
}
void notaFinal(float x[][5],double y[],int a){
    for(int i=0; i<a; i++){
        for(int j=0; j<5; j++){
            y[i] = y[i] + (x[i][j]*0.2);
        }
    }
    for(int i=0; i<a; i++){
        y[i]*=10;
        cout<<"\nLa nota final del estudiante "<<1+i<<" es del:\n"<<y[i]<<"% ";
        if (y[i]>60){
            cout<<" el estudiante ha aprobado la materia\n";
        }
        else{
            cout<<" el estudiante ha reprobado la materia\n";
        }
    }
}