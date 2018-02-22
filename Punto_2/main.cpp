/*
PARCIAL 1
Segundo Punto

Elaborado por:
    - Julio Cesar Pulgarin
    - Javier Alejandro Yepes Henao
*/

//Librerias
#include<iostream>

using namespace std;

int main(){
//Definicion de variables M=Monto, D=Descuento, T=Total
    int M=0;
    float D=0, T=0;
//Datos que ingresa el usuario
    cout<<"Ingrese un monto: ";
    cin>>M;
//Condiciones
    if (M>10000){
        D=M*0.20;
    }
    else {
        D=M*0.10;
    }
    cout<<"El descuento es de: "<<D;
}
