/*
PARCIAL 1
Primer Punto

Elaborado por:
    - Julio Cesar Pulgarin
    - Javier Alejandro Yepes Henao
*/

//Librerias
#include<iostream>

using namespace std;

int main(){
//Definicion de variables Ac=Area del circulo y Rc=Radio del circulo
    int Rc=0;
    float Ac=0;
    cout<<"Ingrese el Radio del Circulo: ";
    cin>>Rc;
//Formula para hallar el Area de un circulo
    Ac=3.1416*(Rc*Rc);
//Condiciones
    if (Ac<5000){
        cout<<"El area del circulo es: "<<Ac;
    }
    else {
        cout<<"DATO_ERRONEO";
    }
}
