//X reais todos os meses
//Celta custa Y reais
//N numero de meses de contrato
#include <iostream>
using namespace std;

int main(){
    float dinheiro_do_mes=0, valor_carro=0, caixinha=0, sobra=0;
    int tempo_contrato=0, mes_comprado=0;
    bool comprado=false;
    cin >> tempo_contrato >> valor_carro;
    for(int i=0;i<tempo_contrato;i++){
        cin >> dinheiro_do_mes;
        caixinha += dinheiro_do_mes;
        if(caixinha >= valor_carro && comprado == false){
            comprado = true;
            mes_comprado = i+1;
        }
    }
    sobra =(caixinha - valor_carro);
    cout.precision(2);
    if(comprado){
        cout << mes_comprado << " " << fixed << sobra;
    }
    else{
        cout << "0 " << fixed << caixinha;
    }

}