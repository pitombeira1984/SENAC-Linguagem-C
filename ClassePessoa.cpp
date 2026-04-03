#include <iostream>

using namespace std;

class Pessoa{

    public:

    string nome;
    int idade;

    void exibir(){

        cout << "Nome: " << nome << endl;
        cout << "idade: " << idade << endl;

    }

};

int main(){

    Pessoa p;

    cout << "Digite seu Nome: ";
    getline(cin, p.nome);

    cout << "Digite sua Idade: ";
    cin >> p.idade;

    p.exibir();

    return 0;

}