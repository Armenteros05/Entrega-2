#include <iostream>
using namespace std;

void hola(){
    cout << "Hola chaval" << endl;
}
void hola(const string& nombre){
    cout << "Hola " << nombre << endl;
}
int main(){
    hola();
    hola("Jose");
    int a;
    int b;
    cout << "Introduce un valor para a: " << endl;
    cin >> a;
    cout << "Introduce un valor para b: " << endl;
    cin >> b;
    int suma= a + b;
    cout << "La suma de dos numeros llamados a y b es:"<< suma << endl;
    return 0;
}



