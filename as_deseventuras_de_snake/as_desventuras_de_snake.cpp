#include <iostream>
using namespace std;
int main(){
    int c1, c2, c3, e1, e2, e3, res;
    cin >> c1 >> c2 >> c3;
    cin >> e1 >> e2 >> e3;
    res = c1-(e1*3) + c2-(e2*3) + c3-(e3*3);
    cout << res;
}