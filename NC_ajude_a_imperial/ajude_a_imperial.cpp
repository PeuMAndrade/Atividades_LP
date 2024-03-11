#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,K,J;
    vector<int> X,Y,S;
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> K;
        X.push_back(K);
    }
    for(int i=0;i<N;i++){
        cin >> K;
        Y.push_back(K);
    }
    for(int i=0;i<N;i++){
        if(X[i] == 0){
            S.push_back(0);
        }else{
            J = (Y[i] *100)/X[i];
            S.push_back(J);
        }
    }
    for(int i=0;i<S.size();i++){
        cout << S[i] << " ";
    }
}