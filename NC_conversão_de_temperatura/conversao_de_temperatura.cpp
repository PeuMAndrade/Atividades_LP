#include <iostream>
#include <iomanip>
using namespace std;

void celcius(float T){
    float F, K;
    if(T > -273.15){
        F = (1.8 * T) + 32;
        K = T + 273;
        cout << fixed <<setprecision(2);
        cout << F << 'F, ' << K << 'K ' <<endl;
    }
}

void fahrenheit(float T){
    float C, K;
    if(T > -273.15){
        C = (T-32) * 5/9;
        K = (T - 32) * 5/9 + 273;
        cout << fixed <<setprecision(2);
        cout << C << 'C, ' << K << 'K ' <<endl;
    }
}

void fahrenheit(float T){
    float C, F;
    if(T > -273.15){
        C = T - 273;
        F = (T - 273) * 1.8 + 32;
        cout << fixed <<setprecision(2);
        cout << C << 'C, ' << F << 'F ' <<endl;
    }
}
