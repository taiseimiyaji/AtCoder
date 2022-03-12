#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //ITP1_6_D
  //Matrix Vector Multiplication
  //要素数を考えてメモリをどれくらい使うか意識する。
  //Cっぽい書き方をした方がいいのか、Vectorを使うべきか判断しないと時間がかかる
  int n,m;
  cin >> n >> m;
  int a[100][100];
  int b[100];
  for(int j = 0; j < n; j++){
    for(int i = 0; i < m; i++){
      cin >> a[j][i];
    }
  }
  for(int i = 0; i < m; i++){
    cin >> b[i];
  }
  int c[n] = {0};
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      c[i] += a[i][j] * b[j];
    }
    cout << c[i] << endl;
  }
  
  //計算部分

  

}
int main(){
  Main();
}
