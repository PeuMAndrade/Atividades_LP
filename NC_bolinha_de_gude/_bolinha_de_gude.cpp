//Entrada é composta por 2 inteiros separados por um espaço N = quantidade de familiares, Q = Quantidade de bolinhas

#include <iostream>
using namespace std;

int main(){
    int N,Q,RES=0;
    cin >> N >> Q;
    for(int i=0; i<N; i++){
        RES += Q;
        Q = Q*2;
    }
    cout << RES;
}