#include <iostream>
#include "polimorfismo.h"

using namespace std;

void hola(){
    cout << "Hola chaval" << endl;
}
void hola(const string& nombre){
    cout << "Hola " << nombre << endl;
}
inline int suma(int a,int b);
int main(){
    hola();
    hola("Jose");
    int a=5;
    int b;
    cout << "Introduce un valor para b: " << endl;
    cin >> b;
    int resultado= suma(a,b);
    cout<< "La suma de a y b es: " << resultado << endl;
}
inline int suma(int a,int b){
    return a+b;
}



