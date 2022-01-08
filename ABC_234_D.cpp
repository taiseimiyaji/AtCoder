#include <bits/stdc++.h>
using namespace std;

void Main(){
  int N, K;
  cin >> N >> K;
  vector<int> P;
  //以下のコードでは実行時間不足となった。。。残念。。。
  //簡単な実装方法を復習すると以下のコメントの通り。
  //multiset型を使うことで常にソートされた配列を使用できる(時間とメモリの節約)
  // void solve() {
  //   multiset<int> AA;
  //   int N, K;
  //   cin >> N >> K;
  //   for(int i = 1; i <= N; i++) {
  //       int x;
  //       cin >> x;
  //       AA.insert(x);
  //       if(SZ(AA) > K) AA.erase(AA.begin());
  //       if(i >= K) cout << *AA.begin() << '\n';
  //   }
}
  for(int i=1; i < N+1; i++){
    int tmp;
    cin >> tmp;
    P.push_back(tmp);
  }
  for(int i = K; i < N+1; i++){
    int ans[N + 1];
    vector<int> P2;
    P2 = P;
    sort(P2.begin(), P2.begin() + i, greater<int>());
    //for(int j =0; j < i; j++){
    //}
    cout << P2.at(4) << endl;
  }
}

int main(){
  Main();
}
