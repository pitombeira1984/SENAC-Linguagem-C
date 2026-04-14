#include <iostream>

using namespace std;

int main(){

    int resultado;
    string op;
    int n1, n2;

    cout << "Qual operação deseja realizar: ";
    cin >> op;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    if(op == "+"){
        resultado = n1 + n2;
    } else if(op == "-"){
        resultado = n1 - n2;
    } else{
        cout << "Dados Invalidos";
    }

    cout << "Resultado igual: " << resultado << endl;

    return 0;

}