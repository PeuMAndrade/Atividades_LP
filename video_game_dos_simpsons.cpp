#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    float n1, n2, n3;
    cin >> n1;
    cin >> n2;
    n3 = n1+n2;
    cout << setprecision(2) << fixed;
    cout << n3;
}