#include <bits/stdc++.h>
using namespace std;


void Main(){
  //Atcoder公式解説
  //ロジックは以下
  //l < rの時ループ
  //1.両端がaならl,rを進める
  //2.右がaならrを進める
  //3.両端が同じならl,rを進める
  //ループ結果として
  //l >= rならYes,それ以外はNo
  //ポイント:頭に任意の数aを加えて回文判定する = 後から任意の数aを除いて回文判定する
  //但し、右のaは消せるけど左のaは消せないことに注意する
  string s;
  cin >> s;
  int n = s.size();
  int l = 0, r = n - 1; //カーソルの準備
  while(l < r && s[l] == 'a' && s[r] == 'a'){
    ++l;--r;
  }
  while(l < r && s[r] == 'a') --r;
  while(l < r && s[l] == s[r]){
    ++l; --r;
  }
  if(l >= r)cout << "Yes" << endl;
  else cout << "No" << endl;
}
int main(){
  Main();
}
