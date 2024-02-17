#include <iostream>
#include <list>
using namespace std;

int main(){
    int numero_rodadas, casa_atual, j;
    bool chegou;
    list<int> lista;

    casa_atual = 1;
    chegou = false;

    cin >> numero_rodadas;
    for(int i=0;numero_rodadas>i;i++){
        cin >> j;
        casa_atual += j;
        if (casa_atual < 1){
            casa_atual = 1;
        }
        if(casa_atual >= numero_rodadas){
            chegou = true;
        }
    }
    if (chegou==true){
        cout << "true";
    }
    else{
        cout << "false";
    }
}