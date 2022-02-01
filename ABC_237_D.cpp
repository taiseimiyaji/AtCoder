#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //Atcoder公式解説 ABC237_D
  //ロジックは以下
  //insertは計算量が多いO(N^2)
  //逆から見る
  //LRRLRが入力の場合
  //5を基準にRLLRLに数字を追加すればいい
  int N;
  string S;
  cin >> N >> S;
  deque<int> ans = {N};
  for(int i = N -1; i >= 0; --i){
    if(S[i] == 'L') ans.push_back(i);
    else ans.push_front(i);
  }
  rep(i,N + 1) cout << ans[i] << ' ';
  cout << endl;
  

}
int main(){
  Main();
}
