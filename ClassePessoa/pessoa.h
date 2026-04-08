#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

using namespace std;

class Pessoa{

    public:
    string nome;
    int idade;

    void exibir(){
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }
};

#endif