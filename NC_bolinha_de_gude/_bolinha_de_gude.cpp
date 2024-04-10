#include <iostream>
using namespace std;

int main(){
    int F;
    long B;
    cin >> F >> B;
    long res=0;
    for(int i = 0; i<F; i++){
        res += B;
        B*=2;
    }
    cout << res;
}
