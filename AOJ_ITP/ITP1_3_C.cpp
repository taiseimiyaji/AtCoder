#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_3_C
  //Swapping Two Numbers
  //配列に格納することを考えがちだが、できるだけシンプルな実装を考える。
  //業務だといいけど、競プロの場合は制約を見てシンプルさを意識しないと実装で迷いがち。
  for(int i = 0; i < 3000; i++){
    int x,y;
    cin >> x >> y;
    if(x == y && x == 0){
      break;
    }
    if(x < y){
      cout << x << " " << y << endl;
    }else{
      cout << y << " " << x << endl;
    }
  }

}

int main(){
  Main();
}
