#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> Areas; 
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int valor;
        cin >> valor;
        Areas.push_back(valor);
    }
    int contagem = count(Areas.begin(), Areas.end(), 1);
    int res = (contagem*100)/n;
    if(res<30){
        cout << "Regiao segura";
    }
    else if (res>=30 && res<=50)
    {
        cout << "Regiao em estado de alerta";
    }
    else
    {
        cout << "Regiao com alto indice de perda de biodiversidade";
    }
    
}
