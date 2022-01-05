#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_6_B
  //Finding Missing Cards
  //解くのに15分くらいかかっている。解法わかってから実装に時間がかかる。
  //原因はコードが長くなることとそれによるバグの混入、デバッグ
  //今回の場合はmark判定を関数化orコピペしてタイポとか減らすべき
  int state[4][13] ={0};
  int n;
  cin >> n;
  char mark;
  int num;
  for(int i = 0; i < n; i++){
    cin >> mark >> num;
    if(mark == 'S'){
      state[0][num - 1] = 1;
    }
    if(mark == 'H'){
      state[1][num - 1] = 1;
    }
    if(mark == 'C'){
      state[2][num - 1] = 1;
    }
    if(mark == 'D'){
      state[3][num - 1] = 1;
    }
  }
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 13; j++){
      if(state[i][j] == 0){
        if(i == 0){
          mark = 'S';
        }
        if(i == 1){
          mark = 'H';
        }
        if(i == 2){
          mark = 'C';
        }
        if(i == 3){
          mark = 'D';
        }
        cout << mark << " " << j+1 << endl;
      }
    }
  }



}

int main(){
  Main();
}
