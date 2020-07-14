#include <iostream>
#include <string>
#include <string.h>
using namespace std;
const int longCad = 20;
struct CostoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;};
void datos(struct CostoPorArticulo entrada[], string, int);
void costo(struct CostoPorArticulo entrada[], int);
void contenido(struct CostoPorArticulo entrada[], int);
void costo_total(struct CostoPorArticulo entrada[], int, float);
int main(void){
    char c;
    string art;
    int n; 
    float sum=0;
    cout<<"Cuantos articulos desea ingresar?\n";
    cin>>n;cin.ignore(100, '\n');
    CostoPorArticulo entrada[n];
    datos(entrada,art,n);
    costo(entrada,n);
    contenido(entrada,n);
    costo_total(entrada,n,sum);
    return 0;
} 
void datos(struct CostoPorArticulo entrada[], string art, int n){
    cout<<"Ingrese los datos de cada articulo:\n";
    for(int i=0; i<n; i++){
        cout<<"Nombre del Articulo: ";
        getline(cin, art);
        strncpy(entrada[i].nombreArticul, art.c_str( ), longCad);
        entrada[i].nombreArticul[longCad]='\0';
        cout<<"Cantidad comprada: ";cin>>entrada[i].cantidad;
        cout<<"Precio unitario: ";cin>>entrada[i].precio;
        cout<<"\n";
        cin.ignore(500, '\n');
    }
}
void costo(struct CostoPorArticulo entrada[], int n){
    for(int i=0; i<n; i++){
        entrada[i].costoPorArticulo = entrada[i].cantidad * entrada[i].precio;
    }
}
void contenido(struct CostoPorArticulo entrada[], int n){
    for(int i=0; i<n; i++){
        cout<<"\nNombre del articulo: "<<entrada[i].nombreArticul<<"\nCantidad comprada: "<<entrada[i].cantidad;
        cout<<"\nPrecio unitario: "<<entrada[i].precio<<"\nCosto Por Articulo: "<<entrada[i].costoPorArticulo<<"\n";
    }
}
void costo_total(struct CostoPorArticulo entrada[], int n, float sum){
    for(int i=0; i<n; i++){
        sum = sum + entrada[i].costoPorArticulo;
    }
    cout<<"\nTotal a pagar: "<<sum<<"\n";
}