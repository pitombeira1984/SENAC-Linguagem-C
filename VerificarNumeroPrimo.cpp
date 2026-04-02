#include <iostream>

using namespace std;

bool ehPrimo(int num){

    if(num <= 1) return false;

    for(int i = 2; i < num; i++){

        if(num % i == 0) return false;

    }

    return true;

}

int main(){

    int num;
    cout << "Digite um numero: ";
    cin >> num;

    if(ehPrimo(num)){
        cout << "O numero digitado e Primo";
    }else{
        cout << "O numero digitado nao e Primo";
    }

    return 0;

}

