#include <iostream>
#include <string>

using namespace std;

int main() {

    string nome;

    cout << "Digite seu nome completo: ";
    getline(cin, nome);//Entrada de dados composta. Copilador lê nome completo

    cout << "Ola, " << nome << "seja bem vindo !";

    return 0;

}