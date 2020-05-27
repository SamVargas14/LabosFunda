#include <iostream>
#include <string>
using namespace std;
int main(void){
    string w;
    char i,f;
    cout<<"Digite una palabra: ";cin>>w;
    i = w.front();
    f = w.back();
    if (i == f){
        cout<<"La primera y ultima letra son iguales";
    }
    else {
        cout<<"La primera y ultima letra no son iguales";
    }
    return 0;
}