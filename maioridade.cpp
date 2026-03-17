#include <iostream>
using namespace std;

int main() {
    string nome;
    int idade;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "\nOlá, " << nome << "!" << endl;
    cout << "Você tem " << idade << " anos." << endl;

    if (idade >= 18) {
        cout << "Você é maior de idade." << endl;
    } else {
        cout << "Você é menor de idade." << endl;
    }

    return 0;
}