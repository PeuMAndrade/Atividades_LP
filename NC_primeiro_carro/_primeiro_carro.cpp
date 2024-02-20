#include <iostream>
using namespace std;

int main(){
    int Meses, Preco_do_carro, Mes;
    float S, caixa,res;
    bool comprou = false;
    cin >> Meses >> Preco_do_carro;
    int X[Meses];
    for(int i=0;i<Meses;i++){
        cin >> S;
        X[i] = S;
    }

    for(int j : X){
        caixa += X[j];
        cout << "O valor da caixa:" << caixa << endl;
        if (caixa>= Preco_do_carro){
            comprou = true;
        }
        else{
            Mes+=1;
        }
    }
    if (comprou){
        res = caixa-Preco_do_carro;
        cout << Mes << (res);
    }
    else{
        cout << "0" << caixa;
    }

}