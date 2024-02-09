#include<iostream>
using namespace std;

int main(){
    int A,H;
    cin >> A >> H;
    if(A>0){
        if(H>=120){
            cout << "marrom";
        }
        else if (120 > H && H >= 110){
            cout << "azul";
        }
        else if (110 > H && H >= 90){
            cout << "verde";
        }
        else if (90 > H && H >= 72){
            cout << "roxa";
        }
        else{
            cout << "amarela";
        }
    }else{
        cout << "branca";
    }
}
