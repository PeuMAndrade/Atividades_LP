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
        cout << F << " F, " << K << " K " <<endl;
    }
    else{
        cout << "Temperatura invalida"<<endl;
    }
}

void fahrenheit(float T){
    if(T > -459.67){
        C = (T-32) * 5/9;
        K = (T - 32) * 5/9 + 273;
        cout << fixed <<setprecision(2);
        cout << C << " C, " << K << " K " <<endl;
    }
    else{
        cout << "Temperatura invalida"<<endl;
    }
}

void kelvin(float T){
    if(T > 0){
        C = T - 273;
        F = (T - 273) * 1.8 + 32;
        cout << fixed <<setprecision(2);
        cout << C << " C, " << F << " F " <<endl;
    }
    else{
        cout << "Temperatura invalida" <<endl;
    }
}

int main(){
    while(true){
        string T1;
        string E;
        cin >> T1 >> E;
        while (T1 != "FIM"){
            float T = stof(T1);
            if (E == "C"){
                celcius(T);
                break;
            }
            else if (E == "F"){
                fahrenheit(T);
                break;
            }
            else{
                kelvin(T);
                break;
            }
        }
        if(T1 == "FIM"){
            break;
        }
    }
}