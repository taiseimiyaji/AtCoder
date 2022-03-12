#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){ 
  //ITP1_9_B
  //Shuffle
  //substr関数で抽出ができる。

  string W;
  int m = 0;
  while(1){
    cin >> W;
    if(W == "-")break;
    cin >> m;
    int h = 0;
    for(int i = 0; i < m; i++){
      cin >> h;
      W.append(W.substr(0,h));
      W = W.substr(h,W.size());
    }
    cout << W << endl;
  }

}
int main(){
  Main();
}
