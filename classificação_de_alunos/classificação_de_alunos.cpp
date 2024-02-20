#include <iostream>
using namespace std;

int main(){
    int T,A,M,N;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> A;
        cin >> M;
        for(int j=0; j<A;j++){
            cin >> N;
            if (N >= 1.95*M){
                cout << "SS"<<endl;
            }
            else if( N >= 1.67*M and N <1.95*M){
                cout << "S"<<endl;
            }
            else if(N >= 1.00*M and N <1.67*M){
                cout << "MS"<<endl;
            }
            else if(N >= 0.67*M and N <1.00*M){
                cout << "MI" <<endl;
            }
            else{
                cout << "I"<<endl;
            }
        }
    }
}