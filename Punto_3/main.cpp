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
//Definicion de variables
    int s=0;
    float d=0, dt=0, t=0;
//Se piden los datos al usuario
    cout<<"Ingrese el sueldo: ";
    cin>>s;
//Condiciones
    if (s<=1000){
        d=s*0.10;
        t=s-d;
    }
    else if (s>1000 && s<2000){
        d=(s*0.10)+(s*0.05);
        t=s-d;
    }
    else{
        d=(s*0.10)+(s*0.05)+(s*0.03);
        t=s-d;
    }
    cout<<"El descuento total es: "<<d<<endl;
    cout<<"El sueldo neto es: "<<t<<endl;
}
