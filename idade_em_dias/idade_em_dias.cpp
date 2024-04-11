#include <iostream>
using namespace std;

int main(){
    int N,A,M,D;
    cin >> N;
    if(N>= 365){
        A = N/365;
        M = (N - A*365)/30;
        D = (N - A*365 - M*30);
    }
    else if(N>= 30 && N<365){
        A = 0;
        M = N/30;
        D = (N - M*30);
    }
    else{
        A=0;
        M=0;
        D=N;
    }
    cout << A << " ano(s)" << endl;
    cout << M << " mes(es)" << endl;
    cout << D << " dia(s)" << endl;
}