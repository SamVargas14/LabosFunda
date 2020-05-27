#include <iostream>
#include <string>
using namespace std;
int main(void){
     string p;
     cout<<"Ingrese palabras a contar: ";getline (cin, p);
 int c = 0;
 for(int i=0; p[i]; i++)
 	c++;
 if (c % 2 == 0, c <= 10){
    cout<<"\nEl numero de caracteres es par y es menor a 10";
 }
 else if (c % 2 == 1, c <= 10){
    cout<<"\nEl numero de caracteres es inpar y es menor a 10";
 }
 else  if (c % 2 == 0, c >= 10){
    cout<<"\nEl numero de caracteres es par y es mayor a 10";
 }
 else  if (c % 2 == 1, c >= 10){
    cout<<"\nEl numero de caracteres es inpar y es mayor a 10";
 }
 return 0;
}