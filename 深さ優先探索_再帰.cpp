#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,M,A[100009], B[100009];
vector<int> G[100009];
bool visited[100009];//falseのときは未到達、trueのときは到達済み。

void dfs(int pos){
  visited[pos] = true;
  for(int i : G[pos]){
    if(visited[i] == false) dfs(i);
  }
}

int main(){
  //入力
  cin >> N >> M;
  for(int i = i; i <= M; i++){
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }
  
  //深さ優先探索
  dfs(1);
  
  //連結かどうかの判定(Answer=trueのとき連結)
  bool Answer = true;
  for(int i = 1; i <= N; i++){
    if(visited[i] == false) Answer = false;
  }
  if(Answer == true) cout << "The graph is connected." << endl;
  else cout << "The graph is not connected;" << endl;
  return 0;
}
