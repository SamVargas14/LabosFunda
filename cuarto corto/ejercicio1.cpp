#include <iostream>
using namespace std;
int main (){
    char a[100];
    cout<<"CLAVE MURCIELAGO\n"<<"Instrucciones:\n";
    cout<<"-Digite el texto que desea convertir.\n-Debe llevar un punto siempre al final.\n-La conversion sera mostrada sin espacios.\n";
    cout<<"Digite lo que desea convertir:\n";
    for(int i=0; i<100; i++){
        cin>>a[i];
        if (a[i]=='.'){
            break;
        }
    }
    for(int i=0; i<100; i++){
        switch(a[i]){
            case 'm': cout<<0;break;
            case 'u': cout<<1;break;
            case 'r': cout<<2;break;
            case 'c': cout<<3;break;
            case 'i': cout<<4;break;
            case 'e': cout<<5;break;
            case 'l': cout<<6;break;
            case 'a': cout<<7;break;
            case 'g': cout<<8;break;
            case 'o': cout<<9;break;
            default: cout<<a[i];break;
        }
        if (a[i]=='.'){
                break;
        }
    }
    return 0;
}