//Entradas
//1a linha: N = Numero de linhas, M = Numero de colunas
//0 = Não existe bug, 1 = Existe bug

#include <iostream>
using namespace std;

int main(){
    int L, C, t, X, Y;
    bool R = true;
    cin >> L >> C;
    int mat[L][C];
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            cin >> mat[i][j];
        }
    }
    cin >> t;
    for(int k=0;k<t;k++){
        cin >> X >> Y;
        X -= 1;
        Y -= 1;
        if(mat[X][Y]==1){
            mat[X][Y]=0;
        }
    }
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            if(mat[i][j]==1){
                R=false;
            }
        }
    }
    if(R){
        cout << "HASTA LA VISTA BABY";
    }else{
        cout << "ILL BE BACK";
    }
}