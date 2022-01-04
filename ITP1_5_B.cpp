#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_5_B
  //Print a Frame
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
        if(j==0 || j == W.at(i) - 1 || k == 0 || k == H.at(i) - 1){
        cout << "#";
        }else{
          cout << ".";
        }
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
