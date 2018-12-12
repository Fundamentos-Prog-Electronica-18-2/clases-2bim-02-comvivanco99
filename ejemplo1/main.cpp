#include <iostream>

using namespace std;

int valor = 10;

void metodo1(int v){
    valor = valor + v;
    cout << "Valor es " << valor << "." << endl;
}

void metodo2(){
    valor = 10;
    cout << "Valor es " << valor << "." << endl;
}

int main()
{

    metodo1(2);
    metodo2();
    cout << "Valor es " << valor << "." << endl;
    metodo1(3);
    cout << "Valor es " << valor << "." << endl;
    return 0;
}
