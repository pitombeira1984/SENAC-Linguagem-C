#include <iostream>

using namespace std;

int main(){

    int a, b;

    cout << "Digite o Primeiro Número: ";
    cin >> a;

    cout << "Digite o Segundo Número: ";
    cin >> b;

    if(a > b){
        cout << "Maior: " << a;
    }else{
        cout << "Maior: " << b;
    }

    return 0;

}