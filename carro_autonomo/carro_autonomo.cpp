#include <iostream>
#include <cmath>
using namespace std;

void modulo(int x1, int y1,int x2,int y2){
    float d_c_p,d_p_b;
    d_c_p = sqrt(pow(x1, 2) + pow(y1, 2));
    d_p_b = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (d_c_p > 7 && d_p_b >5){
        cout << "Nao passou no teste";
    }
    else if(d_c_p > 7 && d_p_b <=5){
        cout << "Pedestre nao identificado";
    }
    else if(d_c_p <= 7 && d_p_b >5){
        cout << "Buraco nao identificado";
    }
    else{
        cout << "Aprovado no teste";
    }
}
int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    modulo(x1,y1,x2,y2);
}
