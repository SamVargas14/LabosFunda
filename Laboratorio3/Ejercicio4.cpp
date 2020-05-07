#include <iostream>
using namespace std;
int main() {
    string n;
    int c;
    float $,p;
    cout<<"Producto: "; getline(cin,n);
    cout<<"Precio: $"; cin>>p;
    cout<<"Cantidad comprada: "; cin>>c;
    $ = p * c;
    cout<<"\nTotal gastado: $"<<$;
    return 0;}