#include <iostream>
#include "polimorfismo.h"

using namespace std;
//uso de void + polimorfismo de "hola"

void hola(){
    cout << "Hola chaval" << endl;
}
void hola(const string& nombre){
    cout << "Hola " << nombre << endl;
}
inline int suma(int a,int b);
//al declarar una suma con un parametro fijo y uno a declarar, tenemos un operador que usa variables constantes y variables a declarar
int main(){
    hola();
    hola("Jose");
    int a=5;
    int b;
    cout << "Introduce un valor para b: " << endl;
    cin >> b;
    int resultado= suma(a,b);
    cout<< "La suma de a y b, teniendo en cuenta que a vale 5 es: " << resultado << endl;

   //uso de una función externa que hemos declarado en polimorfismo.h
   cout << "Que quieres comer hoy?" << endl;
   cin >> comida;
   cout << "Hoy cenaremos eso" << endl;

//uso de función inline
inline int suma(int a,int b) {
    return a + b;
}







