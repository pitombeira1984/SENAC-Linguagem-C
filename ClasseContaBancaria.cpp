#include <iostream>

using namespace std;

class conta{

    private:

    float saldo;

    public:

    conta(){
        saldo = 0;
    }

    void depositar(float valor){
        saldo += valor;
    }

    void sacar(float valor){
        if(valor <= saldo){
            saldo -= valor;
        }else{
            cout << "Saldo Insuficiente" << endl;
        }
    }

    void mostarSaldo(){
        cout << "Saldo: " << saldo << endl;
    }

};

int main(){

    conta c;

    c.depositar(100);
    c.sacar(50);
    c.mostarSaldo();

    return 0;

}