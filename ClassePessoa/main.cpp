#include <iostream>
#include "pessoa.h"

using namespace std;

int main(){

    Pessoa p;

    p.nome = "Tiago";
    p.idade = 42;

    p.exibir();

    return 0;
}