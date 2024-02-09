#include <iostream>
using namespace std;

int main(){
    char z,g,d,c;
    cin >> z >> g;
    cin >> d >> c;
    if(z==d){
        cout << "Driblado" <<endl;
        if (g!=c){
            cout << "...e o goleiro pega";
        }else{
            cout << "Gol";
        }
    }else{
        cout << "Bloqueado";
    }
}