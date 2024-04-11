//pista circular de t metros
//distancia a ser percorrida = x metros

#include <iostream>
using namespace std;

int main(){
    int T,X;
    cin >> T >> X;
    if(T>X){
        cout << X;
    }else{
        cout << X%T;
    }
}