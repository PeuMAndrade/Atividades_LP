#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
float F,K,C;
void celcius(float T){
    if(T > -273.15){
        F = (1.8 * T) + 32;
        K = T + 273;
        cout << fixed <<setprecision(2);
        cout << F << "F, " << K << "K " <<endl;
    }
}

void kelvin(float T){
    if(T > -273.15){
        C = (T-32) * 5/9;
        K = (T - 32) * 5/9 + 273;
        cout << fixed <<setprecision(2);
        cout << C << "C, " << K << "K " <<endl;
    }
}

void fahrenheit(float T){
    if(T > -273.15){
        C = T - 273;
        F = (T - 273) * 1.8 + 32;
        cout << fixed <<setprecision(2);
        cout << C << "C, " << F << "F " <<endl;
    }
}

int main(){
    while(true){
        string T;
        char E;
        cin >> T >> E;
        while (T != "FIM"){
            T = float(T);
            if (E == "C"){
                celcius(T);
                break;
            }
            if (E == "C"){
                fahrenheit(T);
                break;
            }
            else{
                kelvin(T);
                break;
            }
        }
        if(T == "FIM"){
            break;
        }
    }
}