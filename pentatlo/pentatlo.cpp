#include <iostream>
using namespace std;

int main(){
    int X, N1,N2,N3,N4,N5;
    float res;
    cin >> X >> N1 >> N2 >> N3 >> N4 >> N5;
    res = (float) (N1+N2+N3+N4+N5)/5;
    cout.precision(1);
    cout << X << fixed << " " << res;
}