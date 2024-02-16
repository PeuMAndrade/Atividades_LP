#include <iostream>
using namespace std;
int main(){
    int T,D,V,P,res;
    cin >> T >> D;
    cin >> V >> P;
    res = ((T/D)*P) +(V*T);
    cout << res;
}