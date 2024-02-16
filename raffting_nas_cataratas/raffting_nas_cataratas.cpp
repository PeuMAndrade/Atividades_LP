#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int value;
    int resultado = 0;
    string linha;
    getline(cin,linha);
    istringstream stream(linha);
    while(stream >> value){
        resultado += value - 2;
    }
    cout << resultado;
    return 0;
}
