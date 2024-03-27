#include <iostream>
using namespace std;

int main(){
    int tempo;
    char estado;
    cin >> estado >> tempo;
    if (estado=="S"){
        if (tempo>=30){
            cout << "Imune! Siga para um local seguro";
        }
        else if( 7 <= tempo && tempo <= 30){
            cout << "Acesso negado! Fique em observacao";
        }
        else{
            cout << "Acesso negado! Isolamento urgente";
        }
    }
    else{
        cout << "Acesso permitido!";
    }     
}