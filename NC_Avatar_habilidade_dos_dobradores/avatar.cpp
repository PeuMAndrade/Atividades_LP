#include <iostream>
#include <list>
using namespace std;

int main(){
    int lista[101];
    int lista2[101];
    list<int> myarray;
    int N,J,E;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> J;
        lista[i] = J;
    }
    for(int i=0;i<N;i++){
        cin >> J;
        lista2[J] = lista[i];
    }
    cin >> E;
    for(int i=0;i<=N;i++){
        if(lista2[i] == E){
            cout << i << " ";
            myarray.push_back(E);
        }
    }
    if(myarray.empty()){
        cout << "Nenhum";
    }
}