#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_5_A
  //Print a Rectangle
  //入力と出力のタイミングが問題文から読み取りづらかった。
  vector<int> H;
  vector<int> W;
  int h;
  int w;
  int i = 0;
  while(1){
    cin >> h;
    cin >> w;
    if(h == 0 && w == 0){
      break;
    }
    H.push_back(h);
    W.push_back(w);
  }
  for(int i=0;i < H.size(); i++){
    for(int k=0;k<H.at(i); k++){
      for(int j=0;j<W.at(i); j++){
        cout << "#";
      }
      cout << endl;
    }
    cout << endl;
  }
  return;
}

int main(){
  Main();
}
