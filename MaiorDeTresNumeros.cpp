#include <iostream>

using namespace std;

int main(){

    int a, b, c, maior;

    cout << "Digite Tres Numeros" << endl;

    cout << "Primeiro Numero: ";
    cin >> a;

    cout << "Segundo Numero: ";
    cin >> b;

    cout << "Terceiro Numero: ";
    cin >> c;

    maior = a;

    if(b > maior) maior = b;
    if(c > maior) maior = c;

    cout << "Maior de Todos: " << maior;

    return 0;

}