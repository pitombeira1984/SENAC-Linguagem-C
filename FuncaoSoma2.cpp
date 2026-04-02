#include <iostream>

using namespace std;

int soma(int a, int b){
    return a + b;
}

int main(){

    int x, y;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    cout << "Soma igual: " << soma(x,y);

    return 0;

}