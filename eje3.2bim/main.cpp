#include <iostream>
#include<math.h>
// obtener el cuadrado y el cubo de un numero ingresado por el usuario

using namespace std;

int obtenerCuadrado(int a){
    int valor = 0;
    valor = pow(a , 2);
    return valor;
}

int obtenerCubo(int v){
    int valor = 0;
    valor = pow(v , 3);
    return valor;
}

int main()
{
    double numero = 0;
    int opcion = 0;
    int resultado = 0;
    cout << "Ingrese un numero para operar" << endl;
    cin >> numero;
    cout << "Ingrese la opcion para operar, 1 = Cuadrado y 2 = Cubo: " << endl;
    cin >> opcion;

    if (opcion == 1){
        resultado = obtenerCuadrado(numero);
        cout << "El cuadrado del numero " << numero << " es :" << resultado << endl;
    }else{
        if (opcion == 2){
            resultado = obtenerCubo(numero);
            cout << "El cubo del numero " << numero << " es :" << resultado << endl;
        }else{
            cout << "Opcion incorrecta " << endl;
        }
    }
    return 0;
}
