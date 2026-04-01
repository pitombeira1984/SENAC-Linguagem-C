#include <iostream>

using namespace std;

int main(){

    float nota1, nota2, media;

    cout << "Digite a Primeira Nota: ";
    cin >> nota1;

    cout << "Digite a Segunda Nota: ";
    cin >> nota2;

    media = (nota1 + nota2)/2;

    if(media >= 7){
        cout << "Media igual: " << media << " Aprovado";
    }else{
        cout << "Media igual: " << media << " Reprovado";
    }

    return 0;

}