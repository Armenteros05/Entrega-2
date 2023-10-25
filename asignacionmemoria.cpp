#include <iostream>
using namespace std;
int main(){
    int* puntero= new int;
    *puntero= 5;
    cout << "El valor del puntero es: " << *puntero << endl;
    int* puntero_1 = puntero;
    for(int i=0; i<10; i++){
        cout << "Los nuevos valores del puntero son: " << *puntero_1 << endl;
        *puntero_1= *puntero_1 + 1;
    }
    delete puntero;
    return 0;
}
