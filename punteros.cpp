#include <iostream>
using namespace std;
int main(){
    int array[]={1,2,3};
    int* puntero= array;
    cout << "El valor del puntero es: " << puntero[0] <<", "<< puntero[1]<<", "<<puntero[2]<< endl;
    puntero[0]= 5;
    puntero[1]= 6;
    puntero[2]= 7;
    cout << "El nuevo valor del puntero es: " << puntero[0] <<", "<< puntero[1]<<", "<<puntero[2]<< endl;
    return 0;
}