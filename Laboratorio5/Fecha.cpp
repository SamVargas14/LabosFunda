#include <iostream>
using namespace std;
int main(void){
    bool b;
    int d,m,a;
    cout<<"Introduzca el dia:\n";cin>>d;cout<<"Introduzca el mes:\n";cin>>m;cout<<"Introduzca el a\244o:\n";cin>>a;
    switch (m){
        case 2:
            if (a % 400 == 0){
            b=1;
            }
            else if (a % 400 > 0 ){
                if (a%4==0 && a%100>0){
                    b=1; 
                }
                else if (a % 4 > 0){
                    b=0;
                }
            }
            if (b==1){
                if ( d >= 1 && d <= 29 && m >= 1 && m <= 12){
                    d++;
                    if ( d == 30 ){
                        d = 1;
                        m++;
                        if ( m == 13 ){
                            m = 1;
                            a++;
                        }
                    }
                    cout<<"\nUn dia despues la fecha es: "<<d<<"/"<<m<<"/"<<a;
                }
            }
            else if (b==0){
                if ( d >= 1 && d <= 28 && m >= 1 && m <= 12){
                    d++;
                    if ( d == 29 ){
                        d = 1;
                        m++;
                        if ( m == 13 ){
                            m = 1;
                            a++;
                        }
                    }
                    cout<<"\nUn dia despues la fecha es: "<<d<<"/"<<m<<"/"<<a;
                }
            }
            else{
                cout<<"ERROR: la fecha ingresada es incorrecta.";
            }
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            if ( d >= 1 && d <= 30 && m >= 1 && m <= 12){
                d++;
                if ( d == 31 ){
                    d = 1;
                    m++;
                    if ( m == 13 ){
                        m = 1;
                        a++;
                    }
                }
                cout<<"\nUn dia despues la fecha es: "<<d<<"/"<<m<<"/"<<a;
            }
            else{
                cout<<"ERROR: la fecha ingresada es incorrecta.";
            }
        break;
        default:
            if ( d >= 1 && d <= 31 && m >= 1 && m <= 12){
                d++;
                if ( d == 32 ){
                    d = 1;
                    m++;
                    if ( m == 13 ){
                        m = 1;
                        a++;
                    }
                }
                cout<<"\nUn dia despues la fecha es: "<<d<<"/"<<m<<"/"<<a;
            }
            else{
                cout<<"ERROR: la fecha ingresada es incorrecta.";
            }
        break;
        }
    return 0;
}