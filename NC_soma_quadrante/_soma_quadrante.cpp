#include <iostream>
using namespace std;

int main(){
    int N, N2,N4, P,ii,q,j=0;
    int res=0;
    cin >> N >> q;
    N2 = N*N;
    N4 = N2*N2;
    P = (N*N)-N;
    ii = q*N;
    int L[N4];
    for(int i=0;i<N2;i++){
        while(j<N2){
            cin >> L[j];
            j++;
        }
    }
    for (int i=0; i<N2; i ++){
        for(int j=0;j<N;j++){
            res+=L[ii];
            ii++;
        }
        ii+=P;
    }

}
