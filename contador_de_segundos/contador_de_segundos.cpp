#include <iostream>
#include <string>
using namespace std;

int main(){
    int x,h=0,m=0,s=0;
    cin >> x;
    while(x>=3600){
        h++;
        x-=3600;

    }
    
    while(x>=60){
        m++;
        x-=60;

    }
    s=x;
    cout << h << "h " << m << "m " << s << "s";
}