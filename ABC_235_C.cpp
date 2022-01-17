#include <bits/stdc++.h>
using namespace std;

void Main(){
  int N,Q;
  cin >> N >> Q;
  vector<int> a(N);
  for(int i=0; i < N; i++){
    cin >> a[i];
  }
  map<int ,vector<int>> mp;
  for(int i = 0; i < N; i++){
    mp[a[i]].push_back(i);
  }

  for(int i = 0; i < Q; i ++){
    int x,k;
    cin >> x >> k;
    if(mp[x].size() < k){
      cout << -1 << endl;
    }else{
      cout << mp[x][k-1] + 1 << endl;
    }
  }

}

int main(){
  Main();
}
