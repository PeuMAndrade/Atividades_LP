#include <iostream>
using namespace std;

int main(){
    int L,C,X,Y;
    cin >> L >> C;
    int matriz[L][C];
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0;i<L;i++){
        for(int j=0; j<C; j++){
            if(matriz[i][j] == 0){
                X = i;
                Y = j;
            }
        }
    }
    if(
        matriz[X-1][Y]==1 &&
        matriz[X+1][Y]==1 &&
        matriz[X][Y-1]==1 &&
        matriz[X][Y+1]==1
    ){
        cout << X << " " << Y;
    }else{
        cout << "0" << " " << "0";
    }
}