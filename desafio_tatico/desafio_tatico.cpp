#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ATK;
    vector<int> DEF;
    int P,S,L=0,resA,resB,A,D,k=0;
    cin >> P;
    cin >> S;
    L = P*S;

    for(int i=0;L>i;i++){
        cin >> A >> D;
        ATK.push_back(A);
        DEF.push_back(D);
    }

    for(int i=0;P>i;i++){
        resA = 0;
        resB = 0;
        while (S>k){
            resA += ATK[k];
            resB += DEF[k];
            k++;
        }
        cout << resA << " " << resB << endl;
        S+=(P+1);
    }

}