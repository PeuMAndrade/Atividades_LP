#include <iostream>
using namespace std;

int main(){
  int N,Q,N2;
  cin >> N >> Q;
  N2 = N*N;
  int mat[N2][N2];
  int mat2[N2];
  for(int i=0;i<N2;i++){
    for(int j=0;j<N2;j++){
        cin >> mat[i][j];
        mat2[j]
    }
  }
  for(int i=0;i<N2;i++){
    for(int j=0;j<N2;j++){
      for(int k=0;k<N;k++){
        cout << mat[k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
}