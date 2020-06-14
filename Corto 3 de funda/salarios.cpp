#include <iostream>
using namespace std;
int main(void) {
    int i,e,h,he;
    float isss,afp,ir,st,sr;
    cout<<"Calculadora de salarios.\n"<<"\nIngrese el numero de empleados:\n";cin>>e;
    for(i=1;i<=e;i=i+1){
        cout<<"Ingrese total de horas trabajadas: ";cin>>h;
        cout<<"\nIngrese horas extra: ";cin>>he;
        st = (h*1.75) + (he*2.50);
        isss = st * 0.04;
        afp = st * 0.0625;
        if (st>500){
            ir = st * 0.01;
            sr = st - isss - afp - ir;
            cout<<"\nSalario total: $"<<st<<"\nSalario real: $"<<sr;
            cout<<endl;
        }
        sr = st - isss - afp;
        cout<<"\nSalario total: $"<<st<<"\nSalario real: $"<<sr;
        cout<<endl;
    }
    return 0;
}