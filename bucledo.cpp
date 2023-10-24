#include<iostream>
using namespace std;
int main() {
    cout<<"ingrese su numero:";
    int numero;
    cin>>numero;
    int contador_de_thegrefg=1;
    do{
        cout<<numero<<"x"<<contador_de_thegrefg<<"="<<numero*contador_de_thegrefg<<endl;
        contador_de_thegrefg++;
    }
    while(contador_de_thegrefg<=10);
    return 0;}