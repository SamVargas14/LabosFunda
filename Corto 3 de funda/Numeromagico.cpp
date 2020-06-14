#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(void) {
    int num,i,op;
    string out;
    cout<<"Bienvenido a: El Numero Magico"<<"\nReglas del juego";
    cout<<"\n-Adivine el numero de entre 1 y 100."<<"\n-Tendra 5 intentos."<<"\n-Podra salir en el momento que lo desee."<<"\n\nEmpecemos.";
    cout<<endl<<endl;
    srand(time(NULL));
    num = 1 + rand()%(101 - 1);
    for(i=1;i<=6;i=i+1){
        if(i>5){
            cout<<"Lo sentimos, el numero de intentos ha sido agotado.\nEl numero magico era: "<<num;
            break;
        }
        cout<<"Ingrese un numero: ";cin>>op;
        cout<<endl;
        if (op<num){
            cout<<"Siga participando..."<<"\nIntentos restantes: "<<5-i;
            cout<<"\nPista: el numero magico es mayor.";
            cout<<endl<<endl;
            cout<<"\nDesea continuar? SI o NO: ";cin>>out;
            if (out == "no"){
                break;
            }
            cout<<endl<<endl; 
        }
        else if (op>num){
            cout<<"Siga participando..."<<"\nIntentos restantes: "<<5-i;
            cout<<"\nPista: el numero magico es menor.";
            cout<<endl<<endl;
            cout<<"\nDesea continuar? SI o NO: ";cin>>out;
            if ( out == "no"){
                break; 
            }
            cout<<endl<<endl;
        }
        else if(op==num){
            cout<<"Felicitaciones.\n Usted ha encontrado el numero magico.";
            break;
        }
    }
    return 0;
}
