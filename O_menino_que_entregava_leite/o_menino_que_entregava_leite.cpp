//Carrocinha mede X cm de comprimento
//Carrocinha mede y cm de larguera
//Area da Carrocinha mede x*y=z
//Diametro da garrafa =2*R
//AREA/DIAMETRO 

#include<iostream>
using namespace std;

int main(){
    int X,Y,R,V1,V2;
    cin >> X >> Y >> R;
    V1 = X/(2*R);
    V2 = Y/(2*R);
    cout << V1*V2;
}