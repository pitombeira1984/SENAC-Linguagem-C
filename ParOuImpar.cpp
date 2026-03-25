#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "Entre com o valor: ";
    cin >> number;

    if (number % 2 == 0){
        cout << "Par";
    }else{
        cout << "Impar";
    }

    return 0;
}