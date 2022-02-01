#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //ITP1_6_c
  //Official House
  //バグを埋め込みやすい。問題文通りの出力をしっかりする
  int count[4][3][10] = {0};
  int n;
  int b,f,r,v;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> b >> f >> r >> v;
    count[b-1][f-1][r-1] += v;
  }
  for (int k = 0; k < 4; k++){
    for (int j = 0; j < 3; j++){
      for (int i = 0; i < 10; i++){
        //if(i != 0)cout << " ";
        cout << " ";
        cout << count[k][j][i];
      }
      cout << endl;
    }
    if(k != 3)cout << "####################" << endl;
  }
  

}
int main(){
  Main();
}
