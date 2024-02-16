#include <iostream>
using namespace std;

int main(){
    int X,Y;
    cin >> X >> Y;
    if(0 < X && X < 100 && 0 < Y && Y < 100){
        if(X > 70 || Y > 70){
            cout << "Coordenada valida e o navio esta longe";
        }else{
            cout << "Coordenada valida e o navio esta perto";
        }
    }else{
        cout << "Coordenada invalida";
    }
}