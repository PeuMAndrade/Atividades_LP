//Entrada é composta por 2 inteiros separados por um espaço N = quantidade de familiares, Q = Quantidade de bolinhas

#include <iostream>
using namespace std;

int main(){
    int F;
    long B;
    cin >> F >> B;
    long res=0;
    for(int i = 0; i<F; i++){
        res += B;
        B*=2;
    }
    cout << res;
}
