#include <iostream>
using namespace std;

int main(){
    int F,B;
    cin >> F >> B;
    int res=0;
    for(int i = 0; i<F; i++){
        res += B;
        B*=2;
    }
    cout << res;
}