#include <iostream>
using namespace std;

int main(){
    int N,H,M,S;
    cin >> N;
    if (N >=3600){
        H = N/3600;
        M = (N-H*3600)/60;
        S = N-H*3600-M*60;    
    }
    else if(N>= 60 && N<3600){
        H = 0;
        M = N/60;
        S = N - M*60;
    }
    else{
        H = 0;
        M = 0;
        S = N;
    }
    cout << H <<"h " << M << "m "<< S << "s ";
}