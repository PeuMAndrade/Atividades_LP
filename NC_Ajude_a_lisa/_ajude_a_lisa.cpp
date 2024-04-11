//Quicksort
//Busca binaria
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Dados{
    string nome;
    int matricula;
    int telefone;
};
int main(){ 
    vector<Dados> lista;
    int N,C,M;
    bool T;
    cin >> N;
    for(int i=0;i<N;i++){
        Dados pessoa;
        cin >> pessoa.matricula >> pessoa.telefone >> pessoa.nome;
        lista.push_back(pessoa);
    }
    cin >> C;
    for(int i=0;i<C;i++){
        cin >> M;
        T=false;
        for(const auto& i : lista){
            if(i.matricula ==M){
                cout << i.nome << ": " << i.telefone << endl;
                T=true;
            }
        }
        if(!T){
            cout << "Aluno nao encontrado";
        }
    }
}