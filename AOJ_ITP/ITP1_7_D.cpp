#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //ITP1_7_D
  //Matrix Multiplicarion
  int n,m,l;
  cin >> n >> m >> l;
  int a[100][100] = {0};
  int b[100][100] = {0};
  long long int c[100][100] = {0}; //問題文の制約からデータ型に注意する。
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < m; i++){
    for(int j = 0; j < l; j++){
      cin >> b[i][j];
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < l; j++){
      for(int k = 0; k < m; k++){
        c[i][j] += a[i][k] *b[k][j]; 
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < l; j++){
      cout << c[i][j];
      if(j != l-1){
        cout << " ";
      }
    }
    cout << endl;
  }





}
int main(){
  Main();
}
