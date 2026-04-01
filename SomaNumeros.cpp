#include <iostream>

using namespace std;

int main(){

    int i;
    int number;
    int soma = 0;

    for(i=1; i<=5; i++){
        cout << "Digite um numero: ";
        cin >> number;
        soma += number;
    }

    cout << "Soma: " << soma;

    return 0;

}