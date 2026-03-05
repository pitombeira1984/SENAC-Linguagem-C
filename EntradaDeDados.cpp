#include <iostream>
#include <string>

int main(){
    std::string nome;

    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);

    std::cout << "Ola, "<< nome <<"! Seja bem vindo! " << std::endl;

    return 0;
}