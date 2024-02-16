#include <iostream>

using namespace std;

bool Primo(int numero){
    if(numero < 1){
        return false;
    }
    for(int i = 2; i<= numero/2; ++i){
        if(numero % i == 0 ){
            return false;
        }
    }
    return true;
}

int main(){
    int numero,Y,K=0;
    cin >> numero >> Y;
    for(int i = numero; i<=Y; ++i){
        if(Primo(i)){
            K++;
        }
    }
    cout << K;
}