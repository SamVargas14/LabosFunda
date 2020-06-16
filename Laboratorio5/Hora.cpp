#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
    int h, m, s;
    cout<<"Introduzca las horas:\n";cin>>h;cout<<"Introduzca los minutos:\n";cin>>m;cout<<"Introduzca los segundos:\n";cin>>s;
    if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 ){
        s++;
        if ( s == 60 ){
            s = 00;
            m++;
            if ( m == 60 ){
                m = 00;
                h++;
                if ( h == 24 )
                    h = 00;
            }
        }
        cout<<"\n   Un segundo despues la hora es: "<<h<<":"<<m<<":"<<s;;
    }
    else
        cout<<"\n   ERROR: La hora es incorrecta." ;
    return 0;
}