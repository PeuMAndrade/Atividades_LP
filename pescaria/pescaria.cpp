#include <iostream>
using namespace std;

int main(){
    int e1, e2, res;
    cin >> e1;
    cin >> e2;
    res = e1*e2;

    if(500 > res){
        cout << "Paciencia Firmino!";
    } 
    else if(500 <= res && res < 1800){
        cout << "Vara de Bambu";
    }   
    else if(1800 <= res && res < 7500){
        cout << "Vara de Fibra de Vidro";
    }
    else{
        cout << "Vara de Iridio";
    }
}