#include <iostream>
using namespace std;
int main(void) {
    int a;
    cout<<"Bienvenido al detector de a\244os bisiestos.\n";
    cout<<"Ingrese el a\244o: ";cin>>a;cout<<endl;
    if (a % 400 == 0){
        cout<<"El a\244o "<<a<<" es bisiesto.";
    }
    else if (a % 400 > 0 ){
        if (a % 4 == 0){
            if (a % 100 > 0){
                cout<<"El a\244o "<<a<<" es bisiesto.";
            }
            else {
                cout<<"El a\244o "<<a<<" no es bisiesto.";
            }
        }
        else if (a % 4 > 0){
        cout<<"El a\244o "<<a<<" no es bisiesto.";
        }
    }
    return 0; 
}