#include <iostream>
#define PI 3.1415926535


using namespace std;

//+,-,+,-
//x-x^3/3!+x^5/5!
//1,3,5,7 impares

double potencia(double base,double exponente){
    double resultado=base;
    for(int i=1;i<exponente;i++){
        resultado=base*resultado;
    }
    return resultado;
}
double factorial(double x){
    double resultado=1;
    for(int i=x;i>1;i--){
        resultado=resultado*i;
    }
    return resultado;
}

double radianes(double numero){
    double resultado=numero*PI/180;
    return resultado;
}
float sen(double x){
    double signo=0,numerador=0,denominador=0,exponente=0,resultado=0;
    for(int i=0;i<30;i++){
        if(i%2==0){
           signo=1;
        }else{
            signo=-1;
        }
        exponente=(2*i+1);
        numerador=potencia(x,exponente);
        denominador=factorial(exponente);
        resultado=resultado + signo*(numerador/denominador);
    }
    return resultado;
}
int main()
{
    double resultado=0;
    double x=0;
    cout<<"Digite un angulo entre 0° y 360°: ";
    cin>>x;
    x=radianes(x);
    resultado=sen(x);
    cout.precision(12);
    cout<<"Resultado: "<<resultado;
    return 0;
}
