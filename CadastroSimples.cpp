#include <iostream>
#include <string>

using namespace std;

int main(){

    string nome;
    int idade;

    cout << "Digite seu Nome: ";
    getline(cin,nome);

    cout << "Digite sua Idade: ";
    cin >> idade;

    cout << nome << " voce tem " << idade << " anos de idade ";

    return 0;
}