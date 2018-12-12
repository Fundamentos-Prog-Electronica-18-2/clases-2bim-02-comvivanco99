#include <iostream>

using namespace std;

//declaro variable global
double saldo = 100;

void sumarSaldo (double s){
    saldo = saldo + s;
}

void restarSaldo (double v){
    if(v <= saldo){
        saldo = saldo - v;
    }else{
        cout << "Su valor ingresado es mayor a su saldo, no se puede realizar la resta, su saldo no se modifica. " << endl;
    }
}

string obtenerTipoCuenta(){
    string frase = " ";
    if(saldo <= 100){
        frase = "Su saldo le permite ser un cliente tipo D.";
    }else{
        if((saldo >= 101) & (saldo <= 1000)){
             frase = "Su saldo le permite ser un cliente tipo C.";
        }else{
           if((saldo >= 1001) & (saldo <= 10000)){
               frase = "Su saldo le permite ser un cliente tipo B.";
          }else{
             frase = "Su saldo le permite ser un cliente tipo A.";
        }
      }
    }
   return frase;
}
int obtenerEdad(int a){
    int operacion = 2018 - a;
    return operacion;
}
int main()
{
    int opcion = 0;
    double valor = 0;
    int nacimiento = 0;
    cout << "Ingrese su año de nacimiento: "<< endl;
    cin >> nacimiento;
    cout << "Que opcion quiere realizar, 1 = sumar , 2 = restar: " << endl;
    cin >> opcion;
    if(opcion == 1){
        cout << "Ingrese el valor a sumar: " << endl;
        cin >> valor;
        sumarSaldo(valor);
    }else{
        if(opcion == 2){
            cout << "Ingrese el valor a restar: " << endl;
            cin >> valor;
            restarSaldo(valor);
        }else{
            cout << "Opcion incorrecta, su saldo no se modificara. " << endl;
        }
    }
    string tipo = obtenerTipoCuenta();
    cout << "Hola tu saldo es: " << saldo << " , " << tipo << endl;

    int edad = obtenerEdad(nacimiento);
    cout << "Su edad es: "<< edad << endl;
    return 0;
}
